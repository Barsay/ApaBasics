//
// Created by Thomas Galliano on 26/07/2020.
//

#ifndef APA_BASICS_APABASICS_LIBRARY_H
#define APA_BASICS_APABASICS_LIBRARY_H

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

#endif //APA_BASICS_APABASICS_LIBRARY_H
