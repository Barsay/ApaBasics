//
// Created by Thomas Galliano on 26/07/2020.
//

#ifndef APA_BASICS_APABASICS_LIBRARY_H
#define APA_BASICS_APABASICS_LIBRARY_H

//SIMPLE FUNCTIONS:
/** Simple function that calculates the determinant of a 2x2 matrix.
 * Used as the terminal case for "determinant" function.
 *
 * Type: Mathematical
 * Model: None
 * Recursion Type: Not recursive
 * Reduction: NO
 *
 * @param m the 3x2 matrix
 * @return det(m)
 */
int det2x2(int m[2][2]);
// int minore(int **m,int i, int j, int n, int **m2); todo


//RECURSIVE FUNCTIONS
/**
 * Type: Mathematical
 * Model: None
 * Recursion Type: Linear
 * Reduction: Constant
 *
 * Algorithm cost: O(n)
 *
 * @param n Number to be calculated
 * @return n!
 */
long fact (long n);
/**
  * Type: Mathematical
 * Model: None
 * Recursion Type: Multi
 * Reduction: Constant
 * Algorithm cost: O(2^n)[WARNING, COSTS A LOT FOR BIG NUMBERS!]
 *
 * @param n
 * @return nth Fibonacci number
 */
long fib (long n);

/**
 * Type: Mathematical
 * Model: None
 * Recursion Type: Linear
 * Reduction: variable
 * Algorithm cost: O(log(y))
 *
 * @param x
 * @param y
 * @return MCD between x and y
 */
int mcd(int x, int y);

//int determinant(int n, int a[][n]); todo


#endif //APA_BASICS_APABASICS_LIBRARY_H
