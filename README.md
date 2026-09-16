# Libft

*This project has been created as part of the 42 curriculum by yahiaAlmouie.*

## Description

Libft is a custom C library developed as part of the 42 curriculum.
This is my first project at 42, completed as part of Milestone 0.
The project consists of reimplementing functions from the standard C library and creating additional utility functions for working with strings, memory, characters, and file descriptors.

The project is divided into three groups:

### 1. Libc Functions
Reimplementations of standard C library functions:
* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_strlen`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_strchr`
* `ft_strlcpy`
* `ft_strrchr`
* `ft_strlcat`
* `ft_toupper`
* `ft_tolower`
* `ft_strncmp`
* `ft_memchr`
* `ft_memcmp`
* `ft_strnstr`
* `ft_atoi`
* `ft_calloc`
* `ft_strdup`

### 2. Additional Functions
Additional utility functions implemented as part of the project:
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### 3. Linked List Functions
Functions for creating and manipulating singly linked lists:
* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## Compilation

The project uses a `Makefile` and is compiled with:

```bash
gcc -Wall -Wextra -Werror
```

To compile the library:

```bash
make
```

This creates the static library:

```text
libft.a
```

### Makefile Rules

```bash
make
```

Compiles the library.

```bash
make clean
```

Removes all generated object files (`.o`).

```bash
make fclean
```

Removes the object files and `libft.a`.

```bash
make re
```

Removes the generated files and recompiles the library from scratch.

## Resources

* [W3Schools](https://www.w3schools.com/)
* CS50x course materials
* YouTube tutorials

## AI Usage

AI was used as a learning aid to explain some complex C concepts and to help identify and correct parts of the code.

The code was written, tested, and debugged as part of my own learning process.
