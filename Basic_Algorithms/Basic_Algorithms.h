//
// Created by Thomas Galliano on 26/07/2020.
//

#ifndef APA_BASICS_BASIC_ALGORITHMS_H
#define APA_BASICS_BASIC_ALGORITHMS_H
#define MAX 1000
#include "item.h"

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
/** @relates MergeSort
 * @relates CountingSort
 * Recursive Algorithm, used by MergeSort to merge two Item Arrays into one.
 * @param A
 * @param B
 * @param l
 * @param q
 * @param r
 */
void Merge(Item *A, Item *B, int l, int q, int r);

/** @Description
 * Research Algorithm, used to explore the space of a problem, when its elements are
 * displaced as SIMPLE DISPOSITIONS.
 * It is recursive.
 * @formula <formula>
 * Simple disposition: D(n,k) = (n!)/(n-k)!
 * @example How many words can you form the word YOUMATH using 4 letters?
 * [Note: every letter is different! No elements are repeated]
 *      n= 7
 *      k= 4
 *      D(n,k)= (n!)/(n-k) = (7)!/(7-4)!
 *
 * @param pos input should be 0. The algorythm will then use it as a position f0r the *sol arrray,
 * and use it as a termination condition (when sol>=k)
 * @param val malloc(n*sizeof(int)); The array containing the values to be searched.
 * @param sol malloc(k * sizeof(int)); dinamically refreshed arrau containing the solutions of the problem.
 * @param mark calloc(n* sizeof(int)); marker array used to check if an element is already
 * been put in a solution in a certain position.
 * @param n size of the set
 * @param k size of how much elements of the set will be taken
 * @param count input should be 0. used to count the number of valid solutions
 * @return Prints all the solutions, and returns how much they are.
 */
int disp(int pos, int *val, int *sol, int *mark, int n, int k, int count);

/**@Description
 * Research Algorithm, used to explore the space of a problem, when its elements are
 * displaced as REPEATED DISPOSITIONS.
 * Recursive.
 * Prints all the solutions, and returns the number of solutions.
 * Note: similar to disp()
 * @Formula
 * Repeated disposition: D'(n,k) = n^k
 * @example how many 3-digits numbers can you form with the numbers 1,2,3,4,5,6?
 * [Note: every digit is different, but in order to consider the right solution they can be
 * repeated, ex. 111,222 etc]
 * n=6 [counting 1,2,3,4,5,6]
 * k=3 [Wanting to obtain a 3-digits number]
 * D'(6,3)= 6^3= 216
 * @param pos input should be 0. The algorithm will then use it as a position for the *sol array,
 * and use it as a termination condition (when sol>=k)
 * @param val malloc(n*sizeof(int)); The array containing the values to be searched.
 * @param sol malloc(k * sizeof(int)); dinamically refreshed arrau containing the solutions of the problem.
 * @param n  size of the set
 * @param k size of how much elements of the set are used
 * @param count input should be 0. used to count the number of valid solutions
 * @return Prints all the solutions, and returns how much they are.
 */
int disp_rip(int pos, int *val, int *sol, int n, int k, int count);
/**
 * @Description Research algorithm. Used to explore the space of a problem, when its elements
 * are displaced as SIMPLE PERMUTATIONS
 * Recursive.
 * @Formula P(n)= D(n,n)= n!
 * @example A family has 2 parents and 5 children. The children change their place at table every meal.
 * How many meals will it take them to return to their first position?
 * 7 places, 2 are fixed.
 * D(5)=5!=120 meals.
 *
 * @param pos input is 0.
 * @param val malloc(n*sizeof(int)); The array containing the values to be searched.
 * @param sol malloc(n*sizeof(int)); dinamically refreshed arrau containing the K solutions of the problem.
 * (sized k on disp, here sized n)
 * @param mark calloc(n, sizeof(int)); marker array used to check if an element is already
 * been put in a solution in a certain position.
 * @param n size of the set
 * @param count counter of the solutions
 * @return Prints all the solutions, and returns how much they are.
 */
int perm(int pos, int *val, int *sol, int *mark, int n, int count);
/** @Description Research algorithm. Used to explore the space of a problem, when its elements
 * are displaced as REPEATED PERMUTATIONS
 * @Formula P[a,b...](n)=(n!)/(a!*b*!*...), a, b.... are the values that are repeated (a,b...)
 * @example
 * Given the word ORO, how much anagrams can you form?
 * n=3, a=2 (Dist_Val= {0,R}) (note: in this algorithm a is called n_dist)
 * @param pos input should be 0. The algorithm will then use it as a position for the *sol array,
 * and use it as a termination condition (when sol>=k)
 * P[2](3)= 3!/2! = 3
 * @param dist_val malloc(n_dist*sizeof(int)); Array of distinct elements
 * @param sol malloc(n*sizeof(int)):
 * @param mark malloc(n_dist, sizeof(int)); Contains, for every element, how much they are present in
 * the problem (ex: ORO = mark[0]=2 (2 O's), mark[1]=1 (1 R))
 * @param n size of the set
 * @param n_dist number of SINGLE elements (ex. word oro has dist_val=2 (O,R))
 * @param count counter of the solutions
 * @return Prints all the solutions, and returns how much they are.
 */
int perm_r(int pos, int *dist_val, int *sol, int *mark, int n, int n_dist, int count);
/** @Description Research algorithm. Used to explore the space of a problem, when its elements are displaced
 * as SIMPLE COMBINATIONS
 * @Formula C(n,k) = (D(n,k)/P(n,k) = (n!)/k!*(n-k)!
 * @Example: playing 3 numbers at the lottery (having 90 numbers in total), how many triplets can you
 * make? n= 90, k= 3
 * C(90,3) = (90!)/(90-3)! = 117480
 *
 * @param pos input should be 0. The algorithm will then use it as a position for the *sol array,
 * and use it as a termination condition (when sol>=k)
 * @param val malloc(n*sizeof(int)); Array containing the n elements. Note: every element can be displaced
 * only one time (marker not needed)
 * @param sol malloc(k*sizeof(int));
 * @param n size of the set
 * @param k size of how much elements of the set are used
 * @param start initially 0
 * @param count initially 0,
 * @return Prints all the solutions, and returns how much they are.
 */
int comb(int pos, int *val, int *sol, int n, int k, int start, int count);

/**@Description Research algorithm. Used to explore the space of a problem, when its elements are displaced
 * as SIMPLE COMBINATIONS. Recursive.
 * @Formula: C'(n,k)= ((n+k-1)!)/(k!*(n-1)!)
 * @example Two dices are launched, how many combinations of their faces are possible?
 * C'(6,2)= 21
 * @param pos input should be 0. The algorithm will then use it as a position for the *sol array,
 * and use it as a termination condition (when sol>=k)
 * @param val malloc(n*sizeof(int)); Array containing the n elements.
 * @param sol malloc(k*sizeof(int)); Array used for the solution. Composed of K elements
 * @param n size of the set
 * @param k how many n-elements are combined
 * @param start initially 0
 * @param count initially 0
 * @return Prints all the solutions, and returns how much they are.
 */
int comb_r(int pos, int *val, int *sol, int n, int k, int start, int count);
/**
 * Description: Research algorithm, used to explore the space of a problem, where   its elements are displaced
 * as A POWERSET. This is version uses the Divide et Impera paradigm.
 * Example: for val = {1,2,3} its powerset is: {null},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}.
 *
 * @param pos input should be 0. The algorithm will then use it as a position for the *sol array,
 * and use it as a termination condition (when sol>=k)
 * @param val malloc(n*sizeof(int)); Array containing the n elements.
 * @param sol  Array used for the solution.
 * @param k  size of the set
 * @param start initially 0. Used to exclude symmetrical solutions (ex. {1,2}and {2,1})
 * @param count
 * @return Prints all the solutions, and returns how much they are.
 */
int powerset_DeI (int pos, int *val, int *sol, int k, int start, int count);
/**
 * Description: Research algorithm, used to explore the space of a problem, where   its elements are displaced
 * as A POWERSET. This is version uses Simple Dispositions.
 * Example: for val = {1,2,3} its powerset is: {null},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}.
 *
 * @param pos input 0. used as marker: sol[pos]=0 if the element is not contained in the solution, else
 * sol[pos]=1
 * @param val malloc(n*sizeof(int)); Array containing the n elements.
 * @param sol  malloc(n*sizeof(int));  Array used for the solution.
 * @param k  size of the set
 * @param count
 * @return Prints all the solutions, and returns how much they are.
 */
int powerset_Disp(int pos, int *val, int *sol, int k, int count);

/**
 * hen the problem searched needs to have minimum cardinaliy, this solution is the best.
 * @param val
 * @param k
 * @param sol
 * @param n
 * @param pos
 * @param start
 * @return Prints all the solutions, and returns how much they are.
 */
int powerset_comb(int *val, int k, int *sol, int n, int pos, int start);
/**
 * Description: Function used as wrapper for powerset_comb(). Generates the null solution,
 * and calls powerset_comb() in order to calculate the rest of the powerset.

 * @relates powerset_comb()
 * @param val
 * @param k
 * @param sol
 * @return
 */
int powerset_wrapper(int *val, int k, int *sol);
/**
 * @Description  Research algorithm, used to explore the space of a problem, where its elements are a
 * partition of a set. This algorithm is used to find one of all the possible partitions.
 * @param pos
 * @param val malloc(n=sizeof(int))
 * @param sol malloc(n*sizeof(int))
 * @param n size of the solution
 * @param k number of choices (Different from the other algorithms!)
 */
void part_disp_ripet(int pos, int *val, int *sol, int n, int k);
/**
 * @Description Research algorithm, used to explore the space of a problem, where its elements are a
 * partition of a set. This algorithm is used to find all of the possible partitions.
 *
 * @param n size of the solution
 * @param m number of blocks
 * @param pos
 * @param sol  malloc(n*sizeof(int))
 * @param val  malloc(n*sizeof(int))
 */
void Er(int n, int m, int pos, int *sol, int *val);
/**
 * @Description Struct used for molt_princ function.
 */
typedef struct {
    int *choices;
    int numberOfChoices;
}Level;
/**
 * Research algorithm, used to explore the space of a problem, where every choice has a different number
 * of possible sub-choices.
 *
 *
 * @param pos initially o
 * @param val malloc(n*sizeof(Level)); for (i=0;i<n;i++)val[i].numberOfChoices = malloc(val[i].numberofchoices*sizeof(int));
 * @param sol malloc(n*sizeof(int));
 * @param n number of levels
 * @param count initially 0, used internally as a counter
 * @return Prints all the solutions, and returns how much they are.
 */
int molt_princ(int pos, Level *val, int *sol, int n, int count);
#endif //APA_BASICS_BASIC_ALGORITHMS_H