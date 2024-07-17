# pwdgen

Program ``pwdgen`` is a command-line utility designed to generate secure random passwords of a specified length using printable ASCII characters. It offers a simple and effective way to create passwords suitable for various applications, including securing accounts, generating temporary access credentials, or creating cryptographic keys.

## Usage

### Prerequisites

This program requires `Clang` and `Make` to build and run.

### How to Use

1. Clone the repository and navigate to the directory:
    ```
    git clone <repository_url>
    cd pwdgen
    ```

2. Compile the program using a C compiler:
    ```
    make pwdgen
    ```

3. Run the program:
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
This will output a random password consisting of printable ASCII characters.


### Notes
- Ensure `<length>` is a valid integer.
- Passwords are generated using ASCII values 33 to 126.
- Only one argument (the password length) should be provided.

## Other

### Author

Filip Rokita  
Website: [www.filiprokita.com](http://www.filiprokita.com)

### Legal
This program is provided as-is, without warranties or conditions of any kind, either express or implied. By using this program, you agree that the author is not responsible for any damage that may occur as a result of its use.

### License
See the [LICENSE](./LICENSE) file for licensing information.