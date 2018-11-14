# Get next line
A school 42 project.

 ### Score 125/100
 **Mandatory**
 100/100 
 **Bonus**
 25/25

**Note** *This project is not beeing updated. Check get_next_line inside my personal C library [libft](https://github.com/tavelino/libft "libft, a project from school 42"). Where you can use this and other functions by including libft.a.*

### About the project

The challange here is to create a function that read and return every line from a file descriptor each time the function is called.
The bonus from this project is just use one static variable and handling multiple file descriptors **without losing thread of reading on any.**

Get_next_line behaves like `cat`. But will be usefull for parsing exercizes where theres one piece of data per line.

*For more details regarding the project see `school42-files/get_next_line.en.pdf`*

#### Restrictions to code

This function must respect school 42 norms:
 - Only use While loops
 - max 25 lines per function (max 84 characters per line)
 - max 4 arguments per function
 - no memory leaks, no segmentation faults, no exceptions
 - No use of C Standard Library functions besides `read`, `malloc` and `free`. Everything else is forbidden.
 - etc
 
Check the norms at the folder `school42-files/norm.pdf`
 
***

## How to use

The project must be submitted without both a Makefile and a main. A main has been supplied but you can use your own.

To compile use the terminal and run the commands bellow at **get_next_line** directory.

- First create the library **libft.a** by running the command:
```console
make -C libft/ fclean && make -C libft/
```
- Compile the project by running gcc command:
```console
gcc -Wall -Werror -Wextra get_next_line.c get_next_line.h main.c libft/libft.a
```

### How to test

After compile you can run the a.out giving a file as a parameter.

```console
./a.out [input_file]
```
Example:

  ```console
  .a.out main.c
  ```

It must be the same result as:

   ```console
   cat main.c
   ```

#### Use get_next_line with input on stdin

If you modify the main to call `get_next_line` with `fd` parameter set to 0, 
get_next_line will wait for input on `stdin`

*** 

## More Details

## Prototype
```
get_next_line(int const fd, char **line)
```
**fd** is the file descriptor from which you will read
**line** is the line read from **fd**

### How function works
First it tests if there was no error while processing the **fd** and there is a line to read.

### Return function
 - **1** if a line WAS read
 - **0** if the reading has finished
 - **-1** if an error occours


#OBS
get_next_line should be able to fetch lines as long as you're reading from **files that can be accesed**.

***

# You want to make your own get_next_line?

That's great!
If you need to test your own implementation you can use:
@jgigault's [42FileChecker](https://github.com/jgigault/42FileChecker)

Bon courage!
