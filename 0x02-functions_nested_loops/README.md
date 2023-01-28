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
