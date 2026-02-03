# Born2beRoot

*This project has been created as part of the 42 curriculum by pi*

## Project Description

Born2beRoot is a system administration project that introduces the fundamentals of virtualization, operating system configuration, and server security. The project involves creating a virtual machine running a Linux distribution with strict security policies, including encrypted partitions, a configured firewall, SSH service, sudo rules, and password policies. Additionally, a monitoring script displays system information at regular intervals.

## OS Choice

### Debian vs Rocky Linux

For this project, I chose **Debian** for the following reasons:

**Debian Advantages:**
- Extensive documentation and large community support
- Excellent stability and reliability, making it ideal for servers
- APT package manager is beginner-friendly and well-documented
- Serves as the foundation for Ubuntu and many other distributions
- Longer release cycles ensure fewer breaking changes

**Debian Disadvantages:**
- Packages can be outdated compared to rolling-release distributions
- Initial setup may require more manual configuration than user-friendly distributions

**Rocky Linux:**
- Enterprise-grade distribution, successor to CentOS
- Uses DNF/YUM package managers
- Integrates SELinux by default
- Better suited for enterprise environments requiring RHEL compatibility

**Conclusion:** Debian is more suitable for beginners in system administration due to its extensive documentation, stable package ecosystem, and straightforward configuration process.

## Partitioning

The disk is partitioned using **LVM (Logical Volume Manager)** with **LUKS encryption** to ensure data security.

### Partition Structure

- **/boot** (500 MB): Contains the kernel and bootloader files, unencrypted to allow system startup
- **Encrypted LVM Physical Volume**: Contains all other partitions

### Logical Volumes (within encrypted container)

- **root** (/): Root filesystem
- **swap**: Swap space for memory overflow
- **home** (/home): User home directories
- **var** (/var): Variable data (logs, caches, databases)
- **srv** (/srv): Service data (web servers, FTP)
- **tmp** (/tmp): Temporary files
- **var-log** (/var/log): System and application logs

### Why LVM?

- **Flexibility**: Easily resize partitions without downtime
- **Snapshots**: Create backups of logical volumes
- **Better disk management**: Combine multiple physical disks into one volume group

### Why Separate Partitions?

- **Security**: Isolates system components; compromise of one partition doesn't affect others
- **Stability**: Prevents log files or temporary files from filling up the root partition
- **Performance**: Different partitions can have different mount options and filesystem types

## Security Policies

### Password Policy

**Expiration Rules** (configured in `/etc/login.defs`):
- Maximum password age: 30 days
- Minimum days between password changes: 2 days
- Warning before expiration: 7 days

**Password Strength Requirements** (configured via `libpam-pwquality`):
- Minimum length: 10 characters
- Must contain at least 1 uppercase letter
- Must contain at least 1 lowercase letter
- Must contain at least 1 digit
- Maximum 3 consecutive identical characters
- Cannot contain the username
- Must differ from old password by at least 7 characters
- Rules apply to root user as well

### SSH Configuration

- SSH service runs on port **4242** (non-standard port reduces automated attack surface)
- Root login via SSH is **disabled** for security
- Password authentication enabled for user accounts

### Firewall (UFW)

- **Default policy**: Deny all incoming connections, allow all outgoing
- **Allowed ports**: 4242 (SSH)
- UFW provides a simplified interface for managing iptables rules(low-level Linux kernel firewall commands that define which network traffic to accept, reject, or drop based on criteria like IP addresses, ports, and protocols)

## User Management

### Groups

- **sudo**: Users in this group can execute commands with root privileges
- **user42**: Project-specific group containing the primary user

### User Configuration

- Primary user (login) is member of both `sudo` and `user42` groups
- Root account password follows the same password policy

### sudo Configuration

Configured in `/etc/sudoers` (edited with `visudo`):

- **Authentication attempts**: Limited to 3 tries
- **Custom error message**: Displayed on incorrect password
- **TTY requirement**: sudo can only be used from a terminal
- **Log files**: 
  - Input and output logged to `/var/log/sudo/`
  - Command log stored in `/var/log/sudo/sudo.log`
- **Secure PATH**: Restricts executables that can be run via sudo

## Services

### Mandatory Services

**SSH (OpenSSH Server)**
- Allows secure remote access to the server
- Configured on port 4242
- Root login disabled

**UFW (Uncomplicated Firewall)**
- Protects the server from unauthorized access
- Configured to allow only necessary ports

**Cron**
- Schedules automated tasks
- Runs monitoring script every 10 minutes

## Monitoring Script

A bash script (`/etc/cron.d/monitoring.sh`) displays system information every 10 minutes via `wall`:

**Displayed Information:**
- OS architecture and kernel version
- Physical and virtual CPU count
- Available RAM and utilization percentage
- Available disk space and utilization percentage
- CPU load percentage
- Date and time of last reboot
- LVM active status
- Number of active connections
- Number of logged-in users
- Server IPv4 address and MAC address
- Number of commands executed with sudo

**Implementation:**
- Executed automatically by cron every 10 minutes
- Uses commands: `uname`, `grep`, `awk`, `free`, `df`, `mpstat`, `who`, `ip`, `journalctl`
- Requires packages: `bc`, `sysstat`

## Comparisons

### AppArmor vs SELinux

**AppArmor** (used in Debian):
- Profile-based mandatory access control
- Simpler to configure and maintain
- Uses file paths for access control
- Profiles are easier to write and understand
- Default security module in Debian

**SELinux** (used in Rocky/RHEL):
- Label-based mandatory access control
- More complex but more granular control
- Uses security contexts and labels
- Steeper learning curve
- Enterprise standard, more powerful for complex environments

### UFW vs firewalld

**UFW** (Uncomplicated Firewall - Debian):
- Simple command-line interface
- Frontend for iptables
- Easy to learn for beginners
- Perfect for straightforward firewall rules
- Less verbose syntax

**firewalld** (Rocky/RHEL):
- Dynamic firewall management
- Uses zones concept for network segments
- Runtime and permanent configurations
- More complex but more flexible
- Better suited for environments with changing network conditions

### VirtualBox

**VirtualBox**:
- Cross-platform (Windows, macOS, Linux)
- Free and open-source
- Wide hardware compatibility
- Extensive features (snapshots, cloning, port forwarding)
- Safe for your system
- Have as many OS as you want

**UTM**:
- free vistualization app for Mac
- Not cross-platform but can run (Windows, macOS, Linux)
- Built on QEMU faster on apple silicon chips!
- Vbox for compatibility, UTM for modern and fast.

## Resources

main debian howto and installation and info:
		[https://www.debian.org/releases/trixie/amd64/install.en.pdf]

users, groups:  [https://www.debian.org/releases/stable/arm64/apds03.en.html#id5325]
	       		[https://phoenixnap.com/kb/how-to-list-users-linux]
				[https://www.baeldung.com/linux/list-all-groups]
				[https://linuxopsys.com/adduser-command-in-linux]
				[https://www.howtouselinux.com/post/list-all-groups-linux]
monitoring.sh:	[AI !!]
		
