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
 * Quick-find algorithm saves the rappresentation of all the points on a id[n] array, finds if the two requested
 * points are already connected, and if they aren't it connects them.
 * It outputs their status (connected/not connected). If they weren't connected, it connects them.
 * initially id[i]=i: every point is connected to itself
 * when p and q are connected, id[p]=id[q]
 * Cost: Linear.
 * @param n max size of the key vector: to collect n elements, this parameter is n-1
 */
void quick_find(int n);
/**
 * Single version of quick find. the id array, p, and q are given by input from external functions.
 *Online connectivity: given two integers p and q, this problem has as a goal to define wheter they
 * are connected or not.
 * Quick-find algorithm saves the rappresentation of all the points on a id[n] array, finds if the two requested
 * points are already connected, and if they aren't it connects them.
 * It outputs their status (connected/not connected). If they weren't connected, it connects them.
 * Cost: Linear.
 *
 * @param n size of the id array
 * @param id array containing the elements
 * @param p first number to be checked
 * @param q second element to be checked
 * @param connect 1 if non-connected elements should be coonected, 0 if they shouldn't
 * @return  1 if already connected, 0 if elements aren't connected, -1 if error.
 */
int single_Quick_find(int n, int id[n], int p, int q, int connect);

void quick_union(int n);

void Weighted_Quick_Union();

#endif //APA_BASICS_ONLINECONNECTIVITY_H
