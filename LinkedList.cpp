//
// Created by yangsen on 18-8-25.
//
#include <iostream>
#include "LinkedList.h"

using namespace std;

List CreateList(int array[],int len){
    List list = NULL;
    bool isHead = true;
    Node *p=list;
    int i=0;
    while(i<len){
        if(isHead) {
            p = new Node();
            list = p;
            isHead = false;
        }
        p->item = array[i];
        if(i<len-1){
            p->next = new Node();
        }
        p = p->next;
        i++;
    }
    return list;
}

void DestoryList(List list){
    Node *p = list,*next;
    while(p!=NULL){
        next = p->next;
        delete p;
        p=next;
    }
}

void printList(List list){
    Node *p = list;
    bool isHead = true;
    while(p!=NULL){
        if(isHead){
            isHead = false;
        }else{
            cout<<"->";
        }
        cout<<p->item;
        p=p->next;
    }
    cout<<endl;
}