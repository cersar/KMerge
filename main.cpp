#include <iostream>
#include "Heap.h"
#include "LinkedList.h"
#include "KMerge.h"

using namespace std;



int main() {
    int array1[]={3,4,7},array2[]={1,5,8},array3[]={2,6,9};
    List list1 = CreateList(array1, sizeof(array1)/sizeof(int));
    List list2 = CreateList(array2, sizeof(array2)/sizeof(int));
    List list3 = CreateList(array3, sizeof(array3)/sizeof(int));
    List lists[]={list1,list2,list3};
    List result;
    result = KMerge(lists,sizeof(lists)/ sizeof(List));
    printList(result);
    DestoryList(list1);
    DestoryList(list2);
    DestoryList(list3);
    DestoryList(result);
    return 0;
}