#ifndef ARRAYADTLIST_H
#define ARRAYADTLIST_H


static const int MAX_SIZE = 100;

/**
 * @class ArrayADTList
 * @brief represents an array list
 * @tparam DataType // a templated data type that allows the array list to hold data of any time
 */
template <class DataType>
class ArrayADTList {

private:


    int cursor;
    int size;
    DataType collection[MAX_SIZE];





public:
    /**
     * @class FullError
     * @brief nested class that is called if the array list is full
     */
    class FullError {
    public:
     /**
      * method called when the array list is full
      * @return // returns "List is full."
      */
     char const *message() { return "List is full."; }
    };

    /**
     * default constructor
     */
    ArrayADTList();

    /**
     * destructor that deletes the array list by overwriting the array values
     */
    ~ArrayADTList();

    /**
     * acessor getter method that returns the length of the list
     * @return returns size
     */
    int getLength();

    /**
     * binary search algorithm method
     * @param list // the array list you want to apply the algorithm on
     * @param lower // the lower index of the array
     * @param higher // the higher index of the array
     * @param target //the item you are trying to find
     * @return returns the index of where the item was found
     */
    int binarySearch(DataType list[], int lower, int higher, DataType target);

    /**
     * public method putItem that inserts items in order in an array list
     * @param item // the item to be inserted
     */
    void putItem(const DataType &item);

    /**
     * public method getItem that checks for if an item is found in the list or not
     * @param item // item to be found
     * @param found_item // where the found item is stored
     * @return returns true or false
     */
    bool getItem(const DataType &item, DataType &found_item);

    /**
     * public isFull method that checks for whether the array list is full or not
     * @return returns true or false
     */
    bool isFull();

    /**
     * public makeEmpty method that empties the list
     */
    void makeEmpty();

    /**
     * public deleteItem method that deletes an item in the list by calling the binary search algorithm
     * @param item // item to be deleted
     * @return returns true or false
     */
    bool deleteItem(const DataType &item);

    /**
     * public getNextItem method that assigns its parameter to the next item in the list
     * @param item // item to be assigned the next item in the list
     * @return returns true or false
     */
    bool getNextItem(DataType &item);

    /**
     * public method resetList that resets the cursor to its original place
     */
    void resetList();

};


#include "ArrayADTList.cpp"
#endif //ARRAYADTLIST_H
