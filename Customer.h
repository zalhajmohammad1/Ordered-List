// #ifndef CUSTOMER_H
// #define CUSTOMER_H
// #include <string>
// #include <ostream>
// #include "Date.h"
//
// using std::string;
// enum CustomerCompareOptions {FullName, UserName, CustomerSince, DateOfBirth, CreditScore, HouseholdIncome,
//         TotalSales, CustomerID};
//
// class Customer {
//
// };
//
// #endif //CUSTOMER_H

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <ostream>
#include "Date.h"
using std::string;

  enum CustomerCompareOptions {FullName, UserName, CustomerSince, DateOfBirth, CreditScore, HouseholdIncome, TotalSales, CustomerID};


/**
 *@class Customer
 *@brief represents a customer with personal information such as full name, username, customer ID,  when the customer joined, date of birth, credit score,
 *household income, and total sales
 *
 *
 */
class Customer {

//
//
//
// public:
//
//    // enum CustomerCompareOptions {FullName, UserName, CustomerSince, DateOfBirth, CreditScore, HouseholdIncome, TotalSales, CustomerID};

private:
/**
 * a static 'compareOption' variable of type 'CustomerCompare' type that can store any value from the 'CustomerCompareOtions' list of type enum
 * which is then used for specific operator overload comparisons.
 */
static CustomerCompareOptions compareOption;


/**
 * properties of each customer
 */
std::string customer_ID;
    std::string username;
    std::string first_name;
    std::string last_name;
    std::string street_address;
    std::string city;
    std::string state;
    std::string postal_code;
    std::string email_address;
    std::string gender;
    std::string company;
    std::string job_title;
    std::string social_security_number;
    Date customer_since;
    Date date_of_birth;
    double household_income;
    int credit_score;
    double total_sales;

public:
/**
 * default constructor
 */
Customer();

/**
 * parametarized constructor
 * @param customer_ID // the customer's ID
 * @param username // the customer's username
 * @param first_name // the customer's first name
 * @param last_name // the customer's last name
 * @param street_address //the customer's street address
 * @param city // the customer's city
 * @param state // the customer's state
 * @param postal_code // the customer's postal code
 * @param email_address // the customer's email address
 * @param gender // the customer's gender
 * @param company // the customer's company
 * @param job_title // the customer's job title
 * @param customer_since // the date since the customer became a customer
 * @param social_security_number // the customer's social security number
 * @param date_of_birth // the customer's date of birth
 * @param household_income // the customer's household income
 * @param credit_score // the customer's credit score
 * @param total_sales // the customer's total sales
 */
Customer(std::string customer_ID, std::string username, std::string first_name, std::string last_name, std::string street_address, std::string city, std::string state, std::string postal_code, std::string email_address,
         std::string gender, std::string company, std::string job_title, Date customer_since, std::string social_security_number, Date date_of_birth, double household_income, int credit_score, double total_sales);


/**
 * parametarized constructor that takes in a string as the parameter
 * @param record // a line of date containing information about each customer from the 'Customer.txt' file from the 'customer_data' directory.
 */
Customer(std::string record);


/**
 * setter mutator method that sets the customer's ID
 * @param customer_ID // takes in the customer's ID
 */
void setCustomerID(std::string customer_ID);


/**
 * getter accessor method that returns the customer's ID
 * @return returns the customer's ID
 */
std::string getCustomerID() const;


/**
 * setter accessor method that sets the customer's username
 * @param username // takes in the customer's username
 */
void setUserName(std::string username);

/**
 * getter accessor method that returns the customer's username
 * @return returns the customer's username
 */
std::string getUserName() const;

/**
 * setter mutator method that sets the customer's first name
 * @param first_name // takes in customer's first name
 */
void setFirstName(std::string first_name);

/**
 * getter accessor method that returns the customer's first name
 * @return returns customer's first name
 */
std::string getFirstName() const;

/**
 * setter mutator method that sets the customer's last name
 * @param last_name returns customer's last name
 */
void setLastName(std::string last_name);

/**
 * getter accessor method that returns the customer's last name
 * @return returns customer's last name
 */
std::string getLastName() const;


/**
 * setter mutator method that sets the customer's street address
 * @param street_address // takes in customer's street address
 */
void setStreetAddress(std::string street_address);

/**
 * getter accessor method that returns the customer's street address
 * @return returns the customer's street address
 */
std::string getStreetAddress() const;

/**
 * setter mutator method that sets the customer's city
 * @param city // takes in the customer's city
 */
void setCity(std::string city) ;

/**
 * getter accessor method that returns the customer's city
 * @return returns the customer's city
 */
std::string getCity() const;

/**
 * setter mutator method that sets the customer's state
 * @param state // takes in the customer's state
 */
void setState(std::string state);

/**
 *  getter accessor method that returns the customer's state
 * @return returns the customer's state
 */
std::string getState() const;

/**
 * setter mutator method that sets the customer's email address
 * @param email_address // takes in the customer's email address
 */
void setEmail(std::string email_address);

/**
 *  getter accessor method that returns the customer's email address
 * @return returns the customer's email address
 */
std::string getEmail() const;

/**
 * setter mutator method that sets the customer's postal code
 * @param postal_code takes in the customer's postal code
 */
void setPostalCode(std::string postal_code);

/**
 *  getter accessor method that returns the customer's postal code
 * @return returns the customer's postal code
 */
std::string getPostalCode() const;

/**
 * setter mutator method that sets the customer's gender
 * @param gender // takes in the customer's gender
 */
void setGender(std::string gender);

/**
 *  getter accessor method that returns the customer's gender
 * @return returns the customer's gender
 */
std::string getGender() const;

/**
 * setter mutator method that sets the customer's company
 * @param company // takes in the customer's company
 */
void setCompany(std::string company);

/**
 *  getter accessor method that returns the customer's company
 * @return returns the customer's company
 */
std::string getCompany() const;

/**
 * setter mutator method that sets the customer's job title
 * @param job_title // takes in the customer's job title
 */
void setJobTitle(std::string job_title);

/**
 *  getter accessor method that returns the customer's job title
 * @return returns the customer's job title
 */
std::string getJobTitle() const;

/**
 * setter mutator method that sets the customer's social security number
 * @param social_security_number // takes in the customer's social security number
 *
 */
void setSocialSecurityNumber(std::string social_security_number);

/**
 *  getter accessor method that returns the customer's social security number
 * @return returns the customer's social security number
 */
std::string getSocialSecurityNumber() const;

/**
 * setter mutator method that sets when the customer first began being a customer
 * @param customer_since // takes in the value for when the customer became a customer
 */
void setCustomerSince(Date customer_since);

/**
 *  getter accessor method that returns the date since the customer became a customer
 * @return returns the customer's date since being a customer
 */
Date getCustomerSince() const;

/**
 * setter mutator method that sets the customer's date of bitth
 * @param date_of_birth // takes in the customer's date of birth
 */
void setDateOfBirth(Date date_of_birth);

/**
 *  getter accessor method that returns the customer's date of birth
 * @return returns the customer's date of birth
 */
Date getDateOfBirth() const;

/**
 * setter mutator method that sets the customer's household income
 * @param household_income // takes in the customer's household income
 */
void setHouseholdIncome(int household_income);

/**
 *  getter accessor method that returns the customer's household income
 * @return returns the customer's household income
 */
int getHouseholdIncome() const;

/**
 * setter mutator method that sets the customer's credit score
 * @param credit_score // takes in the customer's credit scorre
 */
void setCreditScore(int credit_score);

/**
 *  getter accessor method that returns the customer's credit score
 * @return returns the customer's credit score
 */
int getCreditScore() const;

/**
 * setter mutator method that sets the customer's total sales
 * @param total_sales // takes in the customer's total sales
 */
void setTotalSales(double total_sales);

/**
 *  getter accessor method that returns the customer's total sales
 * @return returns the customer's total sales
 */
double getTotalSales() const;

/**
 *  getter accessor toString method that returns the first name, last name, and customer ID
 * @return returns the first name, last name, and customer ID as a line of string
 */
std::string toString();

/**
 *  static getter accessor method that returns the compareOption variable with the particular CustomerCompareOptions value set to it
 * @return returns the compareOption variable
 */
static CustomerCompareOptions getCompareWith() ;

/**
 * static setter mutator method that sets the compareOption variable to a value from the CustomerCompareOption from the enum list
 * @param code // takes in a value from the enum list as a parameter
 */
static void setCompareWith(CustomerCompareOptions code);



    //operator overloading

/**
 * operator overloading method that overloads the == operator to compare 2 objects for whether they are equal or not
 * @param rhs // takes in the right hand side object from int main() to be compared to the left hand side object
 * @return returns true or false
 */
bool operator==(const Customer &rhs) const;

/**
 * operator overloading method that overloads the != operator that compares two objects for whether the left hand side object is equal to the right hand side object
 * @param rhs takes in the right hand side object from int main() to be compared to the left hand side object
 * @return returns true or false
 */
bool operator!=(const Customer &rhs ) const;

/**
 * operator overloading method that overloads the < method to compare two objects for whether the left hand side object is less than the right hand side object
 * @param rhs // takes in the right hand side object from int main() to be compared to the left hand side object
 * @return returns true or false
 */
bool operator<(const Customer &rhs) const;

/**
 * operator overloading method that overloads the > operator to compare two objects for whether the left hand side object is greatewr than the right hand side object
 * @param rhs // takes in the right hand side object from int main() to be compared to the left hand side object
 * @return returns true or false
 */
bool operator>(const Customer &rhs ) const;

/**
 * operator overloading method that overloads the <= operator to compare two objects for whether the left hand side object is either less than or equal to the right hand side object
 * @param rhs // takes in the right hand side object from int main() to be compared to the left hand side object
 * @return returns true or false
 */
bool operator<=(const Customer &rhs ) const;

/**
 * operator overloading method that overloads the >= operator to compare two objects for whether the left hand side object is either greater than or equal to the right hand side object
 * @param rhs // takes in the right hand side object from int main() to be compared to the left hand side object
 * @return returns true or false
 */
bool operator>=(const Customer &rhs) const;





};

/**
 * operator overloading method that overloads the << operator to output information about the right hand side object using the toString method defined from before. This line of string is then stored inside the left hand side object of type ostream
 * @param out // takes in the right hand side object from int main() that is scoped to its toString method to receive its information
 * @param rhs // rhs object of a declared ostream type variable from the parameter is used to store the received information from the rhs object through its toString method
 * @return
 */
std::ostream& operator<< (std::ostream &out, Customer &rhs);


#endif //CUSTOMER_H
