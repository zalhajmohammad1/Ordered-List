#ifndef NODE
#define NODE

/**
 * @struct Node
 * @brief templated struct that from it node objects are made to create the linked list 
 * @tparam DataType // a templated data type that allows the nodes to hold data of any time
 */
template <class DataType>
struct Node {
    DataType value;
    Node<DataType>* next;
};
#endif


#ifndef LINKEDADTLIST_H
#define LINKEDADTLIST_H


/**
 * @class LinkedADTList
 * @brief a linked list that can hold data of any type in an ordered sequence
 * @tparam DataType //  a templated data type that allows the linked list to hold data of any time
 */
template <class DataType>
class LinkedADTList {

public:

    Node<DataType>* head;
    Node<DataType>* cursor;
    int size;




public:
    /**
     * public copy method that initializes the rhs list to be whatever the lhs list that is passes into the parameter 'other' this method is called in the copy constructor
     * @param other // the lhs list to construct the new list with
     */
    void copy(const LinkedADTList<DataType> &other);

    /**
     * copy constructor that calls the copy method
     * @param object // object to construct the rhs list
     */
    LinkedADTList<DataType>(const LinkedADTList<DataType> &object);

    /**
     * default constructor
     */
    LinkedADTList();

    /**
     * destructor that deletes the list
     */
    ~LinkedADTList();

    /**
     * getter accessor method that returns the length of the list
     * @return returns size
     */
    int getLength();

    /**
     * public putItem method that inserts items in order in the linked list
     * @param item // item to be inserted
     */
    void putItem(const DataType& item);

    /**
     * public getItem method that gets an item from the list
     * @param Item // item to be found
     * @param found_item // stores the found item
     * @return 
     */
    bool getItem(const DataType& Item, DataType& found_item);

    /**
     * public isFull method that checks if the linked list is full
     * @return returns false
     */
    bool isFull();

    /**
     * public makeEmpty method that empties the linked list
     */
    void makeEmpty();

    /**
     * public deleteItem method that deletes a specific item in the list
     * @param item // item to be deleted
     * @return returns true or false
     */
    bool deleteItem(const DataType &item);

    /**
     * public getNextItem method that assigns whatever is passes in the parameter to have the next item in the linked list
     * @param Item // item to be set to the next item in the linked list
     * @return returns true or false
     */
    bool getNextItem(DataType& Item);

    /**
     * public resetList method that resets the cursor to its original place
     */
    void resetList();

    /**
     * overloaded assignment operator
     * @param rhs // the right object that the left hand side object is assigned with, a list in this case
     * @return returns the newly assigned list
     */
    LinkedADTList<DataType> operator =(const LinkedADTList<DataType> &rhs);


};



#include "LinkedADTList.cpp"
#endif //LINKEDADTLIST_H
