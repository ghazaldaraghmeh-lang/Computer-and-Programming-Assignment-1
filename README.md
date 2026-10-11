COMP133 – Assignment 1

Assignment Description
This is a C programming assignment that reads three values (x, y, and n) from a file named vals.txt and calculates a result using mathematical functions.
The program calculates the sum of all even digits in the four-digit integer n, computes a value z using x and y, and then calculates the square root of their sum to obtain the final result res.

Mathematical Equations
The program calculates the values using the following equations:
1. Calculate z:
z = x^y + xy + y^x

2. Calculate the final result:
res = √{sumOfEvenDigits(n) + find_z(x,y)}

Program Requirements
The program must read the following values from vals.txt, in order:
	x: Any positive integer.
	y: Any positive double-precision number.
	n: A four-digit integer, assumed to contain exactly four digits.
The program must implement and use the following three functions:
	find_res(n, x, y): Takes n, x, and y as parameters and returns the final result res.
	sumOfEvenDigits(n): Takes n as a parameter and returns the sum of all even digits in the four-digit integer n.
	find_z(x, y): Takes x and y as parameters and returns the value of z according to the given mathematical equation.
Finally, the program prints the calculated result.

Example
If vals.txt contains the following values:
5
2.5
2348
The program reads the three values, performs the required calculations, and prints the final result.

Restrictions
	Loops are not allowed anywhere in the program.
	All three required functions must be implemented and used.
	The input values must be read from vals.txt.

