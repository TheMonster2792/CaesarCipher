
## Caesar Cipher Program

This program encrypts a name (first and/or last) using the Caesar cipher technique, shifting each letter by a specified number. The program converts all characters to lowercase and ignores any non-alphabetic characters (like spaces and punctuation) in the process.

### Features
- Encrypts both first and last names, or any other multi-word input.
- Supports custom shift values.
- Wraps around alphabet letters correctly (e.g., 'z' shifted by 1 becomes 'a').

### Requirements
- C++ compiler (e.g., `g++` for Linux/Mac, or Visual Studio for Windows)

### Instructions

1. **Clone or download the code**:
   Save the `.cpp` code file in a directory on your computer.

2. **Compile the Code**:
   Use the following command to compile the program:

   ```bash
   g++ caesar_cipher.cpp -o caesar_cipher
   ```

   This command compiles `caesar_cipher.cpp` and creates an executable named `caesar_cipher`.

3. **Run the Program**:
   After compiling, run the program with the command:

   ```bash
   ./caesar_cipher
   ```

   ### Example Usage
   The program will prompt you to enter your full name and a shift value:

   ```plaintext
   Input your full name: John Doe
   Input shift number: 3
   ```

   After entering the information, the program outputs the encrypted name:

   ```plaintext
   Shifted result: mrkq grh
   ```

   In this example, "John Doe" with a shift of 3 is encrypted to "mrkq grh".

### Notes
- **Character Conversion**: All characters are converted to lowercase for simplicity.
- **Shift Range**: Entering a negative shift will decrypt a previously encrypted message if you know the shift used originally.

This completes the setup and usage instructions for the Caesar cipher program. Enjoy encrypting your names!
