//
// Created by Thoma on 28/08/2020.
//
#include "item.h"
/**
 * boolean returns if item are equal
 * @param A
 * @param B
 * @return
 */
int ITEMeq(Item A, Item B) {
    return (A == B);
}
/**
 * boolean returns if item are not equal
 * @param A
 * @param B
 * @return
 */
int ITEMneq(Item A, Item B) {
    return (A != B);
}
/**
 * boolean returns if A is less than B
 * @param A
 * @param B
 * @return
 */
int ITEMlt(Item A, Item B) {
    return (A < B);
}
/**
 * boolean returns if A is greater than B
 * @param A
 * @param B
 * @return
 */
int ITEMgt(Item A, Item B) {
    return (A > B);
}