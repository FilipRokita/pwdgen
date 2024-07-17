# pwdgen

Simple command-line utility to generate a random password of specified length.

## Usage

### Prerequisites

This program requires `Clang` and `Make` to build and run.

### How to Use

1. Compile the program using a C compiler:
    ```
    make pwdgen
    ```

2. Run the program:
    ```
    ./pwdgen <length>
    ```
    Replace `<length>` with the desired length of the password (an integer).

### Example
Generate password of length 12:
```
$ ./pwdgen 12
v%b82j1Sll+2)V
```
This will output a random password consisting of printable ASCII characters

### Notes
- The program checks if a valid integer length is provided as an argument.
- It generates a random password using characters from ASCII values 33 to 126.
- Only one argument (the password length) should be provided.

## Author

Filip Rokita  
Website: [www.filiprokita.com](http://www.filiprokita.com)