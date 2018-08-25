//
// Created by yangsen on 18-8-25.
//

#include "Heap.h"


void MakeMinHeap(Node* array[], int heapSize)
{
    for (int i = heapSize / 2 - 1; i >= 0; --i) {
        MinHeap(array, heapSize, i);
    }
}

void MinHeap(Node* array[], int heapSize, int index)
{
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int minIndex = index;
    if (left < heapSize&&array[minIndex]->item > array[left]->item) {
        minIndex = left;
    }
    if (right < heapSize&&array[minIndex]->item > array[right]->item) {
        minIndex = right;
    }
    if (minIndex != index) {
        swap(array[minIndex], array[index]);
        MinHeap(array, heapSize, minIndex);
    }
}