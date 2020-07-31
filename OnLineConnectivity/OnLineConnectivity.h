//
// Created by Thoma on 31/07/2020.
//

#ifndef APA_BASICS_ONLINECONNECTIVITY_H
#define APA_BASICS_ONLINECONNECTIVITY_H
//These variables are used as "dummy variables" to indicate items such as max of a generic array, etc.
//They should be overrided if used in a program.
#define N 10

/**
 * Online connectivity: given two integers p and q, this problem has as a goal to define wheter they
 * are connected or not.
 * for every couple of points, these algorithms do:
 * 1.Read p and q 2. find p's id  3. find q's id 4. if they are connected ask for next couple. If they aren't, make a union.
 *
 * Quick-find algorithm saves the rappresentation of all the points on a id[n] array, finds if the two requested
 * points are already connected, and if they aren't it connects them.
 * Initially id[i]=i: every point is connected to itself
 * when p and q are connected, id[p]=id[q]
 * Cost: Linear.
 * @param n max size of the key vector: to collect n elements, this parameter is n-1
 */
void quick_find(int n);
/**
 * Single version of quick find. the id array, p, and q are given by input from external functions.
 *
 * Quick-find algorithm saves the rappresentation of all the points on a id[n] array, finds if the two requested
 * points are already connected, and if they aren't it connects them.
 * It outputs their status (connected/not connected). If they weren't connected, it connects them.
 *
 * Cost: Linear.
 * Online connectivity: given two integers p and q, this problem has as a goal to define wheter they
 * are connected or not.
 * for every couple of points, these algorithms do:
 * 1.Read p and q 2. find p's id  3. find q's id 4. if they are connected ask for next couple. If they aren't, make a union.
 *

 *
 * @param n size of the id array
 * @param id array containing the elements
 * @param p first number to be checked
 * @param q second element to be checked
 * @param connect 1 if non-connected elements should be coonected, 0 if they shouldn't
 * @return  1 if already connected, 0 if elements aren't connected, -1 if error.
 */
int single_Quick_find(int n, int id[n], int p, int q, int connect);

/**
 * * Online connectivity: given two integers p and q, this problem has as a goal to define wheter they
 * are connected or not.
 * for every couple of points, these algorithms do:
 * 1.Read p and q 2. find p's id  3. find q's id 4. if they are connected ask for next couple. If they aren't, make a union.
 *
 * QuickUnion is nice doesnt use cycles. It does:
 * 1. initialize id[i]=i: every point points to itself
 * 2. find: eerhy point is searched as a chain of links.
 * 3. Union
 *
 * Cost: unitary
 *
 * @param n size of the id array
 */
void quick_union(int n);

/** Online connectivity: given two integers p and q, this problem has as a goal to define wheter they
 * are connected or not.
 * for every couple of points, these algorithms do:
 * 1.Read p and q 2. find p's id  3. find q's id 4. if they are connected ask for next couple. If they aren't, make a union.
 *
 * When applying the union, Weighted Quick Union looks for the ensemble containing the most of points (data about the sizes
 * is stored in the sz arrau), and connects only its root to the root of the bigger ensemble.
 * root to the other.
 * Weighted quick union
 * @param n size of id and sz
 */

void Weighted_Quick_Union(int n);

#endif //APA_BASICS_ONLINECONNECTIVITY_H
