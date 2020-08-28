//
// Created by Thomas Galliano on 26/07/2020.
//

#ifndef APA_BASICS_BASIC_ALGORITHMS_H
#define APA_BASICS_BASIC_ALGORITHMS_H
#define MAX 1000
#include "item.h"
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

//SORTING

/**
 * Iterates through the Array comparing two items at a time and "pushes up" the greater one.
 * Complexity: n^2
 *
 * @param A Array of int to be ordered
 * @param l Point from where the Array is not ordered anymore (0 if A is not ordered)
 * @param r Max index of A (A must be A[r])
 */
void bubbleSort(int *A, int l, int r);

#endif //APA_BASICS_BASIC_ALGORITHMS_H

/**
 * Iterates through the Array, saving the index of the least number, and swaps it with the first least non-ordered
 * number
 * Complexity: n^2
 *
 * @param A Array of int to be ordered
 * @param l Point from where the Array is not ordered anymore (0 if A is not ordered)
 * @param r Max index of A (A must be A[r])
 */
 void selectionSort(int *A, int l, int r);

/**
* Sorting algorithm, applies a bubble sort on a sequence of non- adjacent indexes.
 *This one uses knuth sequence (h(i)=3*h(i-1)+1))
* Complexity: O(n^(3/2))
*
* @param A Array of int to be ordered
* @param l Point from where the Array is not ordered anymore (0 if A is not ordered)
* @param r Max index of A (A must be A[r])
*/
 void shellSort(int *A, int l, int r);

 /** Linear Sorting algorithm, not based on confrontation. Its ordering method is based on counting every occurrence
  * of every number in A.
  * Complexity: O(n)
  *
  * @param A Array of int to be ordered
  * @param l Point from where the Array is not ordered anymore (0 if A is not ordered)
  * @param r Max index of A (A must be A[r])
  * @param k if a is the max number of A,  k must be a-1 (ex. if A contains numbers from 1 to 100, k must be 99).
  */
 void countingSort(int *A, int l, int r, int k);
/**
 * Wrapper function for MergeSort. Calls MergeSortR
 * @param A
 * @param N
 */
 void MergeSort(Item *A, int N);
 /**
  * Recursive Algorithm for sorting. Uses an auxiliary array to save data (->Non in loco)
  * Complexity: O(n*log[2](n))
  * @param A Array to be Sorted
  * @param B Array used internally. Must have the same size of A
  * @param l Starting index from where we want the funtion to sort (Should be 0)
  * @param r Size of A
  */
 void MergeSortR(Item *A, Item *B,int l, int r);
/**
 * Recursive Algorithm, used by MergeSort to merge two Item Arrays into one.
 * @param A
 * @param B
 * @param l
 * @param q
 * @param r
 */
void Merge(Item *A, Item *B, int l, int q, int r);