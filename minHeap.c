#include<stdio.h>
#include<stdlib.h>

struct Heap
{
    int *array;
    int count;
    int capacity;
    int heap_type;
};

struct Heap *CreateHeap(int capacity, int heap_type) {
    struct heap *h = (struct heap *)malloc(sizeof(struct heap));
    if (h == NULL)
    {
        printf("Memory error");
        return;
    }
    
    h -> heap_type = heap_type;
    h -> count = 0;
    h -> capacity = capacity;
    h -> array = (int *)malloc(sizeof(int) * h -> capacity);
    if (h -> array == NULL)
    {
        printf("Memory error");
        return;
    }
    
    return h;
}

int Parent (struct Heap *h, int i) {
    if (i <= 0 || i >= h -> count)
        return -1;
    return i - 1 / 2;
}

int GetMaximum (Heap *h) {
    if (h -> count == 0)
        return -1;
    return h -> array[0];
}

int LeftChild ( struct Heap *h, int i) {
    int left = 2 * i + 1;
    if (left >= h -> count)
        return -1;
    return left;
}

int RightChild ( struct Heap *h, int i) {
    int right = 2 * i + 2;
    if (right >= h -> count)
        return -1;
    return right;
}

void PercolateDown (struct Heap *h, int i) {
    int l, r, max, temp;
    l = LeftChild(h, i);
    r = RightChild(h, i);
    
    if ( 1 != -1 && (h -> array[l] > h -> array[i]))
        max = 1;
    else
        max = i;
    
    if ( r != -1 && (h -> array[r] > h -> array[max]))
        max = r;
    
    if ( max != i) {
        temp = h -> array[i];
        h -> array[i] = h -> array[max];
        h -> array[max] = temp;
    }
    
    PercolateDown(h, max);
}


