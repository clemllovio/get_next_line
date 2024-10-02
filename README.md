# get_next_line
get_next_line is a project that implements a function which reads a line from a file descriptor. When called in a loop, the function allows reading a text file or standard input line by line. This project aims to improve skills in file manipulation, memory allocation, and understanding of static variables in C programming.
## Installation
To use this function in your project:
  1. Clone the repository:
     ```bash
     git clone https://github.com/clemllovio/get_next_line.git
     ```
  2. Include the source files in your project
##Usage
To use get_next_line in your project:
  1. Include the header in your C files:
     ```c
     #include "get_next_line.h"
     ```
  2. Call the function in your code. For example:
     ```c
     int fd;
     char *line;

     fd = open("example.txt", O_RDONLY);
     while ((line = get_next_line(fd)) != NULL)
     {
         printf("%s", line);
         free(line);
     }
     close(fd);
     ```
  3. When compiling your project, include all the necessary source files:
     ``` bash
     gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 your_program.c get_next_line.c get_next_line_utils.c
     ```
## Function Prototype
```c
char *get_next_line(int fd);
```
• Parameters: `fd` - The file descriptor to read from

• Return Value: The line read from the file descriptor, or NULL if there's nothing else to read or an error occurred

## Credits
This project was developed by Clémence Llovio as part of the curriculum at 42 School.
