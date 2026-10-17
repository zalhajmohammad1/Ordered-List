#include "LinkedADTList.h"

#include "Customer.h"


template <class DataType>LinkedADTList<DataType>::LinkedADTList() {
    this->head = nullptr;
    size = 0;
    this->cursor = head;
}

template <class DataType>
void LinkedADTList<DataType>::copy(const LinkedADTList<DataType> &other) {
    Node<DataType> *current = other.head;
    while(current != nullptr) {
        putItem(current->value);
        current = current->next;

    }
}

template<class DataType>
LinkedADTList<DataType>::LinkedADTList(const LinkedADTList<DataType> &object) {
    head = nullptr;
    size = 0;
    this->copy(object);
    cursor = head;
}


template<class DataType>
void LinkedADTList<DataType>::makeEmpty() {
    Node<DataType>* temp = this->head;
    while (temp != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
        resetList();
    }
    size = 0;
}


template<class DataType>
LinkedADTList<DataType>::~LinkedADTList() {
    makeEmpty();
}



template<class DataType>
int LinkedADTList<DataType>::getLength() {
    return size;
}

template<class DataType>
bool LinkedADTList<DataType>::isFull() {
    return false;

}




template<class DataType>
void LinkedADTList<DataType>::putItem(const DataType &item) {
    Node<DataType>* temp = new Node<DataType>;
    temp->value = item;
    temp->next = nullptr;

    if (head == nullptr) {
        head = temp;
        size++;
        cursor = head;
        return;
    }
    if (head->value > item ) {
        temp->next = head;
        head = temp;
        size++;
        cursor = head;
        return;
    }
    Node<DataType>* prev = head;
    Node<DataType>* current = head->next;
    while (current != nullptr) {
        if (current->value > item) {
            temp->next = current;
            prev->next = temp;
            size++;
            cursor = current;
            return;

        }
        else {
            prev = current;
            current = current->next;
        }
    }
    prev->next = temp;
    size++;
    cursor = head;
    return;
}



template<class DataType>
bool LinkedADTList<DataType>::getItem(const DataType &item, DataType &found_item) {

    Node<DataType>* current = head;

    while (current != nullptr) {
        if (current->value == item) {
            found_item = current->value;
            return true;

        }
        current = current->next;

    }
    return false;
}



template<class DataType>
bool LinkedADTList<DataType>::deleteItem(const DataType &item) {
    Node<DataType>* temp = head;
    Node<DataType>* prev = nullptr;

    while (temp != nullptr) {
        if (temp->value == item) {
            if (prev == nullptr) {
                head = head->next;
                delete temp;
                size--;
                return true;

            }

            else {
                prev->next = temp->next;

                delete temp;
                resetList();
                size--;
                return true;
            }
        }
        else {
            prev = temp;
            temp = temp->next;
        }
    }
    return false;
}





template<class DataType>
bool LinkedADTList<DataType>::getNextItem(DataType &item) {
    if (cursor == nullptr) {
        return false;
    }else {
        item = cursor->value;
        cursor = cursor->next;
        return true;
    }
}



template<class DataType>
void LinkedADTList<DataType>::resetList() {
    this->cursor = head;
}





template<class DataType>
LinkedADTList<DataType> LinkedADTList<DataType>::operator=(const LinkedADTList<DataType> &rhs) {

    this->makeEmpty();
    this->copy(rhs);
    cursor = this->head;
    return *this;
}









