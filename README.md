# C++ Programming Course Project

## Overview

Welcome to the C++ Programming Course Project! This project is designed to provide hands-on experience and practical application of fundamental C++ concepts. The project consists of multiple exercises, each building upon the knowledge gained in the course modules.

## Module 00: Introduction to C++ Programming

### Contents:

#### I. Introduction
   - Overview of C++ as a general-purpose programming language
   - Introduction to Object-Oriented Programming (OOP)
   - C++ derived from C for simplicity
   - Gradual introduction to new concepts

#### II. General rules
   - Compilation rules with specific flags (-Wall -Wextra -Werror, -std=c++98)
   - Formatting and naming conventions for files, classes, functions, etc.
   - No enforced coding style, but readability is emphasized
   - Allowed and forbidden practices, including library usage restrictions
   - Design requirements, memory management, and include guards

#### III. Exercise 00: Megaphone
   - Write a C++ program that converts input text to uppercase
   - Demonstrates basic C++ syntax and string manipulation

#### IV. Exercise 01: My Awesome PhoneBook
   - Implement a phonebook program with PhoneBook and Contact classes
   - Limited to 8 contacts, no dynamic allocation allowed
   - Commands: ADD, SEARCH, EXIT
   - Input validation and formatting for contact display

#### V. Exercise 02: The Job Of Your Dreams
   - Recreate a lost Account.cpp file using provided Account.hpp and log file
   - Pass provided tests and match log file output
   - Optional exercise

#### VI. Submission and peer-evaluation
   - Turn in assignments in the Git repository
   - Emphasis on file naming and correct submission

The module aims to build a foundation in C++ programming, encouraging students to follow best practices and gradually explore more advanced concepts in subsequent modules.

## Project Structure

The project is organized into directories for each exercise, containing necessary source code files and Makefiles for compilation.

### Directory Structure:

- **ex00**: Megaphone
  - `Makefile`: Makefile for compiling the "megaphone" program
  - `megaphone.cpp`: C++ program for converting command-line arguments to uppercase

- **ex01**: My Awesome PhoneBook
  - `Makefile`: Makefile for compiling the "phonebook" program
  - `PhoneBook.hpp`: Header file for the PhoneBook class
  - `Contact.hpp`: Header file for the Contact class
  - `PhoneBook.cpp`: Implementation file for the PhoneBook class
  - `Contact.cpp`: Implementation file for the Contact class
  - `main.cpp`: Main file for the phonebook program

- **ex02**: The Job Of Your Dreams
  - `Makefile`: Makefile for compiling the "account" program
  - `Account.hpp`: Header file for the Account class
  - `Account.cpp`: Implementation file for the Account class
  - `tests.cpp`: Test suite for the Account class

## Compilation Instructions

Each exercise directory contains a Makefile that simplifies the compilation process. To build the programs, navigate to the exercise directory in the terminal and run the following commands:

```bash
make          # Builds the executable
./<program>   # Runs the program
```

For example, in the `ex01` directory:

```bash
cd ex01
make
./phonebook
```

## Exercise Specifics

- **Exercise 00: Megaphone**
  - Capitalizes and prints command-line arguments in uppercase.
  - Usage: `./megaphone [arg1] [arg2] ...`

- **Exercise 01: My Awesome PhoneBook**
  - Implements a phonebook program with limited contacts.
  - Usage: `./phonebook`

- **Exercise 02: The Job Of Your Dreams**
  - Represents bank accounts and provides functionalities for transactions.
  - Usage: `./account`

## Additional Notes

- Follow the compilation rules and flags specified in each Makefile.
- Adhere to the formatting and naming conventions outlined in Module 00.
- Submission and peer-evaluation details are provided in Module 00.

Feel free to explore and enhance the functionalities of each program. Happy coding!
