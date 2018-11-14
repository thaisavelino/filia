# Get next line
A school 42 project.
For more details regarding the project see 'get_next_line - Subject(EN).pdf'

### Score 124/100
##### Mandatory
100/100
##### Bonus
24/25

## How to use

Using the terminal run the commands bellow.

- Create the library **libft.a** by running the command bellow at **libft** directory:
```
make -C libft
```
- Compile the project by running gcc command from **get_next_line** directory:
```
gcc -Wall -Werror -Wextra get_next_line.c get_next_line.h main.c libft/libft.a
```

### How to test

After compile you can run a.out with your file to test.
```
.a.out test1.txt
```

## Prototype
```
get_next_line(int const fd, char **line)
```
**fd** is the file descriptor from which you will read
**line** is the line read from **fd**

### How function works
** First it tests if there was no error while processing the **fd** and there i a line to read.

### Return function
 - **1** if a line WAS read
 - **0** if the reading has finished
 - **-1** if an error occours


#OBS
get_next_line should be able to fetch lines as long as you're reading from **files that can be accesed**.

# How to test

After compile you can run a.out with your file to test.
```
.a.out test1.txt
```

# I want to make my own get_next_line

That's great!
If you need to test your own implementation of get_next_line you can use:
@jgigault's [42FileChecker](https://github.com/jgigault/42FileChecker)
