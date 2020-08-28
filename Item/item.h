//
// Created by Thoma on 28/08/2020.
//

#ifndef APA_BASICS_ITEM_H
#define APA_BASICS_ITEM_H

#define maxKey 100
typedef int Item;

Item ITEMscan();
int ITEMeq(Item A, Item B);
int ITEMneq(Item A, Item B);
int ITEMlt(Item A, Item B);
int ITEMgt(Item A, Item B);
void ITEMshow(Item A);
Item ITEMrand();

#endif //APA_BASICS_ITEM_H
