//
// Created by Ali_Msi on 3/30/2020.
//

#ifndef ALGORITHM_HEAP_H
#define ALGORITHM_HEAP_H


class Heap {
public:
    Heap();
    int *Storage;
    int length;
    int capict=0;




    bool isFill();
    int size();
    void Expand();
    void addElment(int item );
    void deletElemant(int index );
    void print_data();
    int numberOfFreeSlot();
    int indexOf(int item);

    void Heapify(int index);
    int left(int index);
    int right(int index);

private:
    void swap(int *A ,int *B);


};


#endif //ALGORITHM_HEAP_H
