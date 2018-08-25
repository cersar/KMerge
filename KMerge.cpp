//
// Created by yangsen on 18-8-25.
//
#include <iostream>
#include "KMerge.h"
#include "Heap.h"

using namespace std;

List KMerge(List lists[],int n){
    List list = NULL;
    bool isHead = true;
    Node **nodes = new Node*[n];
    Node *p;
    for(int i=0;i<n;++i){
        nodes[i] = lists[i];
    }
    MakeMinHeap(nodes,n);

    while(n>0){
        if(isHead){
            isHead = false;
            p=new Node();
            list = p;
        }
        p->item = nodes[0]->item;
        if(nodes[0]->next==NULL) {
            swap(nodes[0],nodes[n-1]);
            n--;
        }else{
            nodes[0]=nodes[0]->next;
        }
        if(n>0){
            MinHeap(nodes,n,0);
            p->next = new Node();
            p=p->next;
        }
    }

    delete [] nodes;
    return list;
}
