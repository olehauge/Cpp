/*
A Polybius square is a 5x5 grid used for creating a simple substitution cipher where each letter
is replaced by its row and column coordinates, usually with the letters 'I' and 'J' sharing one cell. 
It was developed by the ancient Greek historian Polybius and was initially used for long-distance 
signaling with torches. 

  0 1 2  3  4
0 A B C  D  E
1 F G H I/J K
2 L M N  O  P
3 Q R S  T  U
4 V W X  Y  Z 

Encryption: Find the letter in the grid and replace it with its coordinates. 
The row number is typically written before the column number.

Decryption: Replace each pair of coordinates with the corresponding letter from the grid.

Shared square: To make a message secret, the sender and receiver must agree on a 
specific Polybius square arrangement beforehand. This ca be acheived with a key 
with the letters (without duplicates) of the key being placed at the beginning and 
the remaining letters following it in alphabetical order

  0 1  2  3 4
0 P O  R  S C 
1 H E  A  B D
2 F G I/J K L
3 M N  Q  T U
4 V W  X  Y Z

METHOD
A method involves a Bifid cipher without a key (or, in other words, with a key of plain alphabet).
The message is transformed into coordinates on the Polybius square, and the coordinates are recorded vertically.
Letter	                s	o	m	e	t	e	x	t
Horizontal coordinate	3	4	2	5	4	5	3	4
Vertical coordinate	4	3	3	1	4	1	5	4

Then the coordinates are read row by row: 34  25  45  34  43  31  41  54

Next, the coordinates are converted into letters using the same square:

Horizontal coordinate	3	2	4	3	4	3	4	5
Vertical coordinate	    4	5	5	4	3	1	1	4

The obtained primary ciphertext is encrypted again. It is 
written out without being split into pairs: 3425453443314154

The resulting sequence of digits is cyclically shifted to the left by 
one step (an odd number of steps [move 3 to the end]): 4254534433141543

This sequence is again divided into groups of two: 42 54 53 44 33 14 15 43
And is replaced with the final ciphertext according to the table:

Horizontal coordinate	4	5	5	4	3	1	1	4
Vertical coordinate	    2	4	3	4	3	4	5	3
Letter	                i	u	p	t	n	q	v	o
Thus, after encryption, we get "iuptnqvo".

*/