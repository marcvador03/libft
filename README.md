**Purpose**

The whole package is a library developed in C containing standard C functions fto be used in other projects. 
This is the first project of the common core of 42 school. Most functions are replicas from the standard Libc, and also contains "ft_printf" and "get_next_line" functions developed later in other 42 projects. 

**Installation**

the library compiles with gcc or clang, using "cc" alias command.
In your terminal run "make" in the main directory, which compiles all files and creates a static library libft.a in the same directory.

"make clean" removes object files created.
"make fclean" removes object files and the static libft.a library.
"make re" does a "make fclean" followed by a "make" to regenerate all files.

**Additional information**

Check libft.h which shortly describes the purpose of each function developed. For most of them, "man command" will provide you with details on expected behavior. Important note: unlike standard libc functions, I have added checks to avoid Undefined Behaviour (hopefully...)
ft_printf mimics printf standard C function, but only with simple arguments '%s', '%x', '%d', '%i', '%c', '%p', '%u', '%X'. 
get_next_line returns one line at a time from one or multiple Files Descriptors (fd). When EOF is reached, the function returns NULL. IMPORTANT: memory must be freed by the user.



