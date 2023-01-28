# 0x02. C - Functions, nested loops
## Learning Objectives
* At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google**:
### General
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the **gcc** flags **-Wall -Werror -pedantic -Wextra -std=gnu89**
* What are header files and how to use them with **#include**
## Requirements
### General
* Allowed editors **vi**, **vim**, **emacs**
* All your files will be complied on Ubuntu 20.04 LTS using **gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All your files should end with a new line
* A **README.md** file, at the root of the folder of the project is mandatory
* Your code should use the **Betty** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like **printf**, **puts**, etc… is forbidden
* You are allowed to use [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push **\_putchar.c**, we will use our file. If you do it won’t be taken into account
* In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you\
  don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **main.c** files at\
  compilation. Our **main.c** files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function **\_putchar** should be included in your header file called **main.h**
* Don’t forget to push your header file

## Tasks
### 0. _putchar
Write a program that prints **\_putchar**, followed by a new line
* The program should return **0**

```
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-
putchar
julien@ubuntu:~/0x02$ ./0-putchar
_putchar
julien@ubuntu:~/0x02$
```
#### Repo:
* GitHub repository: **alx-low_level_programming**
* Directory: **0x02-function_nested_loops**
* File: **0-putchar.c**

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.
* Prototype: **void print_alphabet(void);**
* You can only use **\_putchar** twice in your code

```
julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	    print_alphabet();
		    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabe
t.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
```
#### Repo:
* GitHub repository: **alx-low_level_programming**
* Directory: **0x02-functions_nested_loops**
* File: **1-alphabet.c**

### 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Prototype: **void print_alphabet_x10(void);**
* You can only use **\_putchar** twice in your code

```
julien@ubuntu:~/0x02$ cat 2-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
```
#### Repo:
* GitHub repository: **alx-low_level_programming**
* Directory: **0x02-functions_nested_loops**
* File: **2-print_alphabet_x10.c**

### 3. islower
Write a function that checks for lowercase character.
* Prototype: **int \_islower(int c);**
* Return **1** if **c** is lowercase
* Return **0** otherwise

FYI: The standard library provides a similar function: **islower**. Run **man islower** to learn more.

```
julien@ubuntu:~/0x02$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$
```
#### Repo:
* GitHub repository: **alx-low_level_programming**
* Directory: **0x02-functions_nested_loops**
* File: **3-islower.c**
