#include "ArrayADTList.h"


template<class DataType>
ArrayADTList<DataType>::ArrayADTList() {
    this->size = 0;
    this->cursor = 0;
}

template<class DataType>
ArrayADTList<DataType>::~ArrayADTList() {
    makeEmpty();
}

template<class DataType>
bool ArrayADTList<DataType>::isFull() {
    return (cursor == MAX_SIZE);
}

template<class DataType>
int ArrayADTList<DataType>::getLength() {
    return size;
}

template<class DataType>
void ArrayADTList<DataType>::resetList() {
    cursor = 0;
}

template<class DataType>
void ArrayADTList<DataType>::makeEmpty() {
    size = 0;
    cursor = 0;
}


template<class DataType>
bool ArrayADTList<DataType>::getItem(const DataType &item, DataType &found_item) {
    int foundIndex = binarySearch(collection, 0, size, item);

    if (foundIndex == -1){return false;}

    else {found_item = collection[foundIndex];}
    return true;

}


template<class DataType>
void ArrayADTList<DataType>::putItem(const DataType &item) {
    if(isFull()) throw FullError();
    for (int i = (size - 1); i >= 0; i--) {
        if(collection[i] < item) {
            collection[i + 1] = item;
            size++;
            return;
        }
        else {collection[i + 1] = collection[i];}
    }
    collection[0] = item;
    size++;
}
template<class DataType>
bool ArrayADTList<DataType>::getNextItem(DataType &item) {

    // int foundIndex = binarySearch(collection, 0, size, item);
    if (cursor == size) {
        return false;
    }

    item = collection[cursor];
    cursor++;
    return true;
}


template<class DataType>
int ArrayADTList<DataType>::binarySearch(DataType list[], int lower, int higher, DataType target) {
    int mid = (lower + higher) / 2;

    if (list[mid] == target) { return mid;}

    if (lower >= higher ) { return -1; }

    if (list[mid] > target) { return binarySearch(list, lower, (mid - 1), target); }

    else { return binarySearch(list, mid + 1, higher, target);}
}


template<class DataType>
bool ArrayADTList<DataType>::deleteItem(const DataType &item) {
    int foundIndex = binarySearch(collection, 0, size, item);
    if (foundIndex == -1) {return false;}

    for (int i = foundIndex; i < size; i++) {
        collection[i] = collection[i + 1];
    }
    size--;
    cursor = 0;
    return true;
}
