# CPP00

Exercises of Module 00 from C++ modules


## Table of Contents

- [ex00: Megaphone](#ex00-megaphone)
- [ex01: PhoneBook](#ex01-phonebook)
- [ex02: Bank Accounts](#ex02-bank-accounts)

## ex00: Megaphone

### Files

- [Makefile](ex00/Makefile)
- [megaphone.cpp](ex00/megaphone.cpp)

### Description

The `megaphone` program takes command-line arguments and prints them in uppercase. If no arguments are provided, it prints a loud and unbearable feedback noise.

### How to Compile

Run `make` in the `ex00` directory to compile the program.

### Usage

```bash
./megaphone arg1 arg2 ...
```

## ex01: PhoneBook

### Files

- [Makefile](ex01/Makefile)
- [main.cpp](ex01/main.cpp)
- [PhoneBook.cpp](ex01/PhoneBook.cpp)
- [PhoneBook.hpp](ex01/PhoneBook.hpp)
- [Contact.cpp](ex01/Contact.cpp)
- [Contact.hpp](ex01/Contact.hpp)

### Description

The `PhoneBook` program allows the user to manage a simple phonebook. It supports commands like ADD, SEARCH, and EXIT. Contacts can be added with details such as first name, last name, nickname, phone number, and a secret. The program provides a basic user interface for managing contacts.

### How to Compile

Run `make` in the `ex01` directory to compile the program.

### Usage

```bash
./phonebook
```

Follow the on-screen instructions to interact with the phonebook.

## ex02: Bank Accounts

### Files

- [Makefile](ex02/Makefile)
- [Account.cpp](ex02/Account.cpp)
- [Account.hpp](ex02/Account.hpp)
- [tests.cpp](ex02/tests.cpp)

### Description

The `Account` program simulates a basic banking system with account management. It tracks the number of accounts, total amount, deposits, and withdrawals. The `tests.cpp` file contains a test scenario demonstrating the functionality of the `Account` class.

### How to Compile

Run `make` in the `ex02` directory to compile the program.

### Usage

```bash
./account
```

This will execute the test scenario and display the account information.
