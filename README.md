# pwdgen

Program pwdgen generates a random password of specified length when executed with a command-line argument indicating the desired length of the password. It verifies the input length provided by the user, ensuring it is a valid number. Here’s how it works:

The program begins by checking if the correct number of arguments (only one, the password length) is provided. If not, it displays the correct usage format and exits.

Next, it verifies that the provided argument is indeed a number by checking each character in the string representation of the argument.

Once validated, the program converts this string to an integer to determine the length of the password to generate.

Using random number generation (rand()), it constructs a password of the specified length by selecting random ASCII characters in the range from 33 to 126 (which covers printable ASCII characters).

Finally, the generated password is printed to the console.

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

## Other

### Author

Filip Rokita  
Website: [www.filiprokita.com](http://www.filiprokita.com)

### Legal
This program is provided as-is, without warranties or conditions of any kind, either express or implied. By using this program, you agree that the author is not responsible for any damage that may occur as a result of its use.

### License
See the [LICENSE](./LICENSE) file for licensing information.