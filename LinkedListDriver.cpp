// Use this driver to try out your code, print to cout and so on
#include <iostream>
#include <fstream>

#include "LinkedADTList.h"
#include "Customer.h"

using namespace std;

int main() {


    LinkedADTList<int> list;
    int const size = 10;



    std::cout << "We created an integer of list. The integers should be in order. They are: " << std::endl;

    //integer algorithm

    for (int i = 0; i < size; i++) {
        list.putItem(i);
    }


    Node<int>* temp = list.head;
    for (int i =0; i < size; i++) {

        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
    std::cout << std::endl;









    //customer algorithm

    LinkedADTList<Customer>* customerList = new LinkedADTList<Customer>;

    std::ifstream file("customer_data/Customer.txt"); //

    if (!file.is_open()) {
        throw std::runtime_error("File could not be opened");

    }

    std::string line;

    std::getline(file, line);


    for (int i = 0; i < 10; i++) {

        std::getline(file, line);

        Customer::setCompareWith(FullName);
        Customer* customer = new Customer(line);


        customerList->putItem(*customer);

    }



    std::cout << "Ordered customers have been created as well: " << std::endl;
    Customer test = Customer();


    customerList->resetList();
    while (customerList->getNextItem(test)) {

        std::cout << test.toString() << std::endl;

    }












    // std::fstream myFile();

































    cout << "Fill in Main with your driver code." << endl;
    return 0;
}