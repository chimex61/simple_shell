# simple_shell
![Holberton school logo](https://secure.meetupstatic.com/photos/event/b/c/5/6/highres_475548214.jpeg)
# Simple Shell Project

## Table of Contents
* [Description](#description)
* [File Structure](#file-structure)
* [Requirements](#requirements)
* [Quick Start](#quick-start)
* [Usage](#usage)
* [Man page](#man-page)
* [Example of Use](#example-of-use)
* [Bugs](#bugs)
* [Authors](#authors)

## Description
This is collaborative project made by Nfon Andrew Tatah, students of Software Engineering at Holberton School. It simply consists of trying to develop and make our own UNIX command line interpreter (Shell).

 It's a recreation of the <kbd>sh</kbd> shell a command line interpreter, this program has the exact same output as <kbd>sh</kbd> <kbd>(/bin/sh)</kbd> as well as the exact same error output
 ## File Structure

These are the files with the custom funtions and system calls, each one contains a brief description:

|   ***File***                                  |  ***Description**		 	     |
|-----------------------------------------------|--------------------------------------------|
|  [`holberton.h`](./holberton.h)              	|  Header file with the prototypes 	     |
|  [`man_1_simple_shell`](./man_1_simple_shell) | Manual Page                      	     |
|  [`README.md`](./README.md)                   | Readme.md file	          	     |
|  [`AUTHORS`](./AUTHORS)                       | AUTHORS file list of contributors          |
|  ['free_list.c'](./free_list.c)    | Frees LinkList		   		             |
|  ['linkpath.c'](./linkpath.c)      | -creates a singly linked list for PATH directories     |
|                                    | -adds a node in a singly linked list                   |
|                                    | -creates a singly linked list for PATH directories     |
|                                    | -creates a singly linked list for PATH directories     |
|  ['string.c'](./string.c)          |  prints a character,                                  |
|                                       prints a string,                                     |
|				       gives the length of a string                         |
|			               copies a string in a newly allocated memory          |
|				       concatenates 3 strings in a newly allocated memory   |
|  ['line_exec.c'](./link_exec.c)    |  splits a string into an array of words,	             |
|  				       executes a command using execve,		     |
|                                      reallocates a memory block,			     |
|			              frees a 2 dimensional array			     |
|  ['checkbuild.c'](./checkbuild.c)  |  checks if a command is a build-in command     	     |
|  ['buildin.c'](./buildin.c)          handles the exit buildin command                     |
|  			      	       converts a string into an integer                    |
|				       prints the current environment                       |
|                                      Initialize or modify and existinig global            |
|                                      remove a global variable                             |
=============================================================================================

## List of allowed functions and system calls for this project
 - access (man 2 access)
 - chdir (man 2 chdir)
 - close (man 2 close)
 - closedir (man 3 closedir)
 - execve (man 2 execve)
 - exit (man 3 exit)
 - _exit (man 2 _exit)
 - fflush (man 3 fflush)
 - fork (man 2 fork)
 - free (man 3 free)
 - getcwd (man 3 getcwd)
 - getline (man 3 getline)
 - isatty (man 3 isatty)
 - kill (man 2 kill)
 - malloc (man 3 malloc)
 - open (man 2 open)
 - opendir (man 3 opendir)
 - perror (man 3 perror)
 - read (man 2 read)
 - readdir (man 3 readdir)
 - signal (man 2 signal)
 - stat (__xstat) (man 2 stat)
 - lstat (__lxstat) (man 2 lstat)
 - fstat (__fxstat) (man 2 fstat)
 - strtok (man 3 strtok)
 - wait (man 2 wait)
 - waitpid (man 2 waitpid)
 - wait3 (man 2 wait3)
 - wait4 (man 2 wait4)
 - write (man 2 write)
****

## USAGE
You can try our shell by following these steps:
> **Step 1:** Clone our repository using this command, (you need to have git installed on your machine first)
````
git clone https://github.com/andrew21-mch/simple_shell
````
> **Step 2:** Navigate into the simple-shell directory using:
````
cd simple_shell
````
> **Step 3:** Compile the C files as follows:
````
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
````
> **Step 4:** Run the shell
````
./hsh
````
**Quitting**
To Exit the shell, you can use any of the following commands:
> **1: Type the command "exit"**
````
exit
````
> **2: Press on Ctrl + D**

## Example of Usage
````
┌──(andy㉿work-spaces)-[~/alx/skk]
└─$ ./hsh
#Shell$ ls -;
/usr/bin/ls: invalid option -- ';'
Try '/usr/bin/ls --help' for more information.
#Shell$ ls -l
total 84
-rw-r--r-- 1 andy andy   139 Nov 11 16:13  AUTHORS
-rw-r--r-- 1 andy andy  2187 Nov 11 16:13  buildin.c
-rw-r--r-- 1 andy andy   574 Nov 11 16:13  checkbuild.c
-rw-r--r-- 1 andy andy   574 Nov 11 16:13  checkbuild.c~
-rwxr-xr-x 1 andy andy 22520 Nov 11 16:13  hsh
-rw-r--r-- 1 andy andy  2111 Nov 11 16:13  line_exec.c
-rw-r--r-- 1 andy andy  2151 Nov 11 16:13  linkpath.c
-rw-r--r-- 1 andy andy  2152 Nov 11 16:13  linkpath.c~
-rwxr-xr-x 1 andy andy  2250 Nov 11 16:13  man_1_simple_shell
-rw-r--r-- 1 andy andy  7035 Nov 11 16:13 '#README.md#'
-rw-r--r-- 1 andy andy  7245 Nov 11 16:13  README.md
-rw-r--r-- 1 andy andy  1303 Nov 11 16:13  shell.c
-rw-r--r-- 1 andy andy  1396 Nov 11 16:13  shell.h
-rw-r--r-- 1 andy andy  1722 Nov 11 16:13  string.c
#Shell$ pwd
/home/andy/alx/skk

````
## Bugs
No known Bugs.

## TEAM
Nfon Andrew Tatah  : [LinkedIn/nfon] | [GitHub/nfon] | [Twitter/nfon]
Mofor Emmanuel

[Holberton School]: <https://www.holbertonschool.com>
[LinkedIn/nfon]: <https://www.linkedin.com/in/nfon-andrew-7703a11a0/>
[GitHub/nfon]: <https://github.com/andrew21-mch>
[Twitter/nfon]: <https://twitter.com/nfonandrew73>

## AUTHOR DESCRIPTION [NFON ANDREW]
 - I am a computer Engineering student of the National Higher Polytechnic Institute Of the University of Bamenda and a software engineering student at Holberton School.
  - ### Our Program in Holberton includes
  - Low Level Programming (C-Programming)
  - Higher Level Programming ( Python )
  - System Programming and Devops ( Shell and git)
  - Fullstack Web Developement ( javascript, python, SQL, HTML and CSS)
