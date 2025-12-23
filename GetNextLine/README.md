This project has been created as part of the 42 curriculum by pidi.


## Description

This project reimplements the function 'get_next_line', whose goal is to read from a file descriptor and return its content one line at a time.
The function must handle variable buffer sizes, and preserve unprocessed data between calls until all the input is read. It is designed to deepen understanding of file descriptors, static variables, memory management, and I/O using read().

## Implementation

A line is defined as a sequence of characters ending with a newline character ('\n') or the end of the file.

get_next_line reads from a valid file descriptor and returns one line per call, stored in dynamically allocated memory that must be freed by the caller.

The function uses a static buffer to store data read from the file that has not yet been returned. New data read from the file is appended to this buffer, and any leftover data after extracting a line is preserved for the next call.

It correctly handles:
	Very small or very large BUFFER_SIZE values
	Empty files
	End-of-file and read errors
	Algorithm

Helper functions handle string joining, substring extraction, newline detection, and memory cleanup.

## Usage

Define BUFFER_SIZE at compile time
Run make to compile the project
Include get_next_line.h in your source files
use fd = open("example.txt", O_RDONLY) to read into file descriptor
check if fd reading fails
send data into get_nexT_line(fd) and store the result into a string char.
On a loop, read into the string, print the result, free the string, read again. Until the return value is NULL.

Returns NULL on:
	end-of-file (after all lines are read)
	read error
	invalid file descriptor


## Resources

AI use: asked AI to evaluate me on my code by askign questions on my understandin of the core project and the edge cases

StackXchange: https://stackoverflow.com/questions/79840014/42-school-get-next-line-segfaults-on-empty-txt-test-2-despite-fixing-ft-extract?noredirect=1#comment140891505_79840014

Linux manuals: https://man7.org/linux/man-pages/ (read, open, close, malloc, free)

Libft functions

## End!