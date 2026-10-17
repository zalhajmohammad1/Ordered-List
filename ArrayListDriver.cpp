// Use this driver to try out your code, print to cout and so on
#include <iostream>
#include <fstream>

#include "ArrayADTList.h"
#include "Customer.h"

using namespace std;

int main() {


    std::cout << "A list of ordered intigers has been created, they should be in order: " << std::endl;
    std::cout << std::endl;

    ArrayADTList<int> list;
    ArrayADTList<Customer>* customers = new ArrayADTList<Customer>;
    int const size = 10;
    int unorderedInts[size] = {15, 56, 41, 85, 99, 5, 14, 71, 17, 0};


    for (int i = 0; i <size; ++i) {
        list.putItem(unorderedInts[i]);
    }

    int temp = 0;

   while (list.getNextItem(temp)) {
       std::cout << temp << std::endl;
   }




    std::ifstream file("customer_data/Customer.txt"); //

    if (!file.is_open()) {
        throw std::runtime_error("File could not be opened");

    }

    std::string line;

    std::getline(file, line);

    //Customer::setCompareWith(FullName);

    for (int i = 0; i < 10; i++) {

        std::getline(file, line);

        Customer::setCompareWith(FullName);
        Customer* customer = new Customer(line);


        customers->putItem(*customer);

    }


    std::cout << "Orderded customers have been created as well: " << std::endl;
    Customer* temp2 = new Customer();

    while (customers->getNextItem(*temp2)) {
        Customer::setCompareWith(FullName);
        std::cout << *temp2 << std::endl;
    }

























// list = customers;






    cout << "Fill in main with your driver code." << endl;
    return 0;
}