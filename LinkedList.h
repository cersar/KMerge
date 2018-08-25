//
// Created by yangsen on 18-8-25.
//

#ifndef KMERGE_LINKEDLIST_H
#define KMERGE_LINKEDLIST_H

typedef struct Node{
    int item;
    Node *next;
}*List;

List CreateList(int array[],int len);
void DestoryList(List list);
void printList(List list);

#endif //KMERGE_LINKEDLIST_H
