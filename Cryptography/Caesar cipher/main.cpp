// Letters in plain text are replaced by other letters or symbols
// by shifting them a fixed number of positions in the alphabet.
// ROT3 to ROT13, shift of three or 13 positions
// The basic idea is to SUBSTITUTE one letter with another. 
/* How it works:
To cipher a given text, we need an integer value, know as a shift. 
The shift indicates the number of spots each letter of the text has
been moved down. The encryption can be represented using modular
arithmetic by first transforming the letters into numbers, 
according to the scheme:
A = 0, 
B = 1, 
...
Z = 25

Plaintext: 
Shift:
Ciphertext: 

If the shift exeeds 26, you should take modulo 26 of the result
to warp around within the alphabet. 

Features: 
1. Fixed key
2. Symmetric
3. Keyspace limited to alphabet used
*/ 

#include <iostream>


int main () {
    //input: plaintext
    std::cout << "Enter plaintext: ";
    std::cin >> plaintext;
    //input: shift
    //output: ciphertext
}
