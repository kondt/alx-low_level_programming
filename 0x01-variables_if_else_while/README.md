# 0x01. C - Variables, if, else, while
## Learning Objectives
* At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google**:

### General
* What are the arithmetic operators and how to use them
* What are the logical operators (sometimes called boolean operators) and how to use them
* What the the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* What are the boolean operators and how to use them
* How to use the if, if ... else statements
* How to use comments
* How to declare variables of type **char**, **int**, **unsigned int** with **printf**
* How to use the **while** loop
* How to use the variables with the **while** loop
* How to print variables using **printf**
* What is the **ASCII** character set
* What are the purpose of the gcc flags **-m32** and **-m64**

## Requirments
### General
* Allowed editors: **vi**, **vim**, **emacs**
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the optio
ns **-Wall** **-Werror** **-Wextra** **-pedantic** **-std=gnu89**
* All your files should end with a new line
* A **README.md** file at the root of the repo, containing a description of the repository
* A **README.md** file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use **system**
* Your code should use the **Betty** style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
## Tasks

### 0. Positive anything is better than negative nothing
This program will assign a random number to the variable **n** each time it is executed. Complete the source code in order to print whether the number stored in the variable **n** is positive or negative.
* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* The variable **n** will store a different value every time you will run this program
* You don't have to understand what **rand**, **srand**, **RAND_MAX** do. Please do not touch this code
* The output of the program should be:
   * The number,followed by
      * if the number is greater than 0: **is positive**
	  * if the number is 0: **is zero**
	  * if the number is less than 0: **is negative**
   * followed by a new line
Example
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
0 is zero
julien@ubuntu:~/0x01$
```
#### Repo:
* GitHub repository: **alx-low_level_programming**
* Directory: **0x01-variables_if_else_while**
* File: **0-positive_or_negative.c**
