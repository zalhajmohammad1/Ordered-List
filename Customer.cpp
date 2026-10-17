// #include "Customer.h"
#include "Customer.h"
#include <catch.hpp>




Customer::Customer(std::string customer_ID, std::string username, std::string first_name,
    std::string last_name, std::string street_address, std::string city, std::string state, std::string postal_code, std::string email_address, std::string gender,
    std::string company, std::string job_title, Date customer_since, std::string social_security_number,  Date date_of_birth,
    double household_income, int credit_score, double total_sales) : customer_ID(customer_ID), username(username), first_name(first_name), last_name(last_name), street_address(street_address),
    city(city), state(state), postal_code(postal_code), email_address(email_address), gender(gender), company(company), job_title(job_title), customer_since(customer_since), social_security_number(social_security_number),
    date_of_birth(date_of_birth), household_income(household_income), credit_score(credit_score), total_sales(total_sales){};


Customer::Customer() {

    Date initialDate = Date();
    Date dateOfBirth = Date();

    this->customer_ID = "";
    this->username = "";
    this->first_name = "";
    this->last_name = "";
    this->street_address = "";
    this->city = "";
    this->state = "";
    this->postal_code = "";
    this->email_address = "";
    this->gender = "";
    this->company = "";
    this->job_title = "";
    customer_since = initialDate;
    date_of_birth = dateOfBirth;
    this->social_security_number = "";
    this->household_income = 0;
    this->credit_score = 0;
    this->total_sales = 0;



}


Customer::Customer(std::string record) {


std::stringstream ss;
    ss << record;

    //string temp variables
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
    std::string customer_since;
    std::string date_of_birth;
    std::string household_income;
    std::string credit_score;
    std::string total_sales;



    std::getline(ss, customer_ID,'\t');
    std::getline(ss, username,'\t');
    std::getline(ss, first_name,'\t');
    std::getline(ss, last_name, '\t');
    std::getline(ss, street_address, '\t');
    std::getline(ss, city, '\t');
    std::getline(ss, state,'\t');
    std::getline(ss, postal_code,'\t');
    std::getline(ss, email_address,'\t');
    std::getline(ss, gender,'\t');
    std::getline(ss, company,'\t');
    std::getline(ss, job_title,'\t');
    std::getline(ss, customer_since,'\t');
    std::getline(ss, social_security_number,'\t');
    std::getline(ss, date_of_birth,'\t');
    std::getline(ss, household_income,'\t');
    std::getline(ss, credit_score,'\t');
    std::getline(ss, total_sales,'\t');


    setCustomerID(customer_ID);
    setUserName(username);
    setFirstName(first_name);
    setLastName(last_name);
    setStreetAddress(street_address);
    setCity(city);
    setState(state);
    setPostalCode(postal_code);
    setEmail(email_address);
    setGender(gender);
    setCompany(company);
    setJobTitle(job_title);
    setSocialSecurityNumber(social_security_number);


    //std::cout << customer_since;
    setCustomerSince(Date(customer_since));



    setDateOfBirth(Date(date_of_birth));
    setHouseholdIncome(std::stod(household_income));
    setCreditScore(std::stoi(credit_score));
    //setCustomerSince(customer_since);
    setTotalSales(std::stod(total_sales));


}



  CustomerCompareOptions Customer::compareOption = FullName;



void Customer::setCustomerID(std::string customer_ID) {
    this->customer_ID = customer_ID;

}

std::string Customer::getCustomerID() const {
    return customer_ID;
}

void Customer::setUserName(std::string username) {
    this->username = username;
}


std::string Customer::getUserName() const{
    return username;
}

void Customer::setFirstName(std::string first_name) {
    this->first_name = first_name;
}


std::string Customer::getFirstName() const{
    return first_name;
}


void Customer::setLastName(std::string last_name) {
    this->last_name = last_name;
}


std::string Customer::getLastName() const{
    return last_name;
}

void Customer::setStreetAddress(std::string street_address) {
    this->street_address = street_address;
}


void Customer::setCity(std::string city) {
    this->city = city;
}

std::string Customer::getCity() const {
    return city;
}


void Customer::setState(std::string state) {
    this->state = state;
}


std::string Customer::getState() const {
    return state;
}


void Customer::setEmail(std::string email_address) {
    this->email_address = email_address;
}


std::string Customer::getEmail() const {
    return email_address;
}


std::string Customer::getStreetAddress() const{
    return street_address;
}


void Customer::setPostalCode(std::string postal_code) {
    this->postal_code = postal_code;
}


std::string Customer::getPostalCode() const{
    return postal_code;
}

void Customer::setGender(std::string gender) {
    this->gender = gender;
}


std::string Customer::getGender() const{
    return gender;
}

void Customer::setCompany(std::string company) {
    this->company = company;
}

std::string Customer::getCompany() const{
    return company;
}

void Customer::setJobTitle(std::string job_title) {
    this->job_title = job_title;
}


std::string Customer::getJobTitle() const{
    return job_title;
}

void Customer::setSocialSecurityNumber(std::string social_security_number) {
    this->social_security_number = social_security_number;
}

std::string Customer::getSocialSecurityNumber() const {
    return social_security_number;
}

void Customer::setCustomerSince(Date customer_since) {
    this->customer_since = customer_since;
}

Date Customer::getCustomerSince() const{
    return customer_since;
}

void Customer::setDateOfBirth(Date date_of_birth) {
    this->date_of_birth = date_of_birth;
}

Date Customer::getDateOfBirth() const{
    return date_of_birth;
}

void Customer::setHouseholdIncome(int household_income) {
    this->household_income = household_income;
}

int Customer::getHouseholdIncome() const{
    return household_income;
}

void Customer::setCreditScore(int credit_score) {
    this->credit_score = credit_score;
}

int Customer::getCreditScore() const{
    return credit_score;
}

void Customer::setTotalSales(double total_sales) {
    this->total_sales = total_sales;
}

double Customer::getTotalSales() const{
    return total_sales;
}


CustomerCompareOptions Customer::getCompareWith() {

    return compareOption;

}

void Customer::setCompareWith(CustomerCompareOptions code){

    compareOption = code;


}





// std::string Customer::toString() {
//
//     std::stringstream ss;
//     ss << "Customer ID: " << customer_ID << "Customer username " << username << "customer first name " << first_name << "customer last name " << last_name << "customer street_address " << street_address << "customer "
// }


bool Customer::operator==(const Customer &rhs) const {


    if (compareOption == CustomerID) {
        if (this->getCustomerID() == rhs.getCustomerID() ) {
            return true;
        }
        else return false;
    }

    else if (compareOption == FullName) {
        if (this->getFirstName() == rhs.getFirstName() && this->last_name == rhs.getLastName()) {
            return true;
        }
        else return false;
    }


    else if (compareOption == CustomerSince) {
         if (this->getCustomerSince() == rhs.getCustomerSince()) {
            return true;
        }
        else return false;
    }


    else if (compareOption == DateOfBirth) {
         if (this->getDateOfBirth() == rhs.getDateOfBirth() ) {
            return true;
        }
        else return false;
    }


   else if (compareOption == HouseholdIncome) {
        if (this->getHouseholdIncome() == rhs.getHouseholdIncome() ) {
            return true;
        }
        else return false;
    }


   else if (compareOption == CreditScore) {
        if (this->getCreditScore() == rhs.getCreditScore() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == TotalSales) {
         if (this->getTotalSales() == rhs.getTotalSales() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == TotalSales) {
        if (this->getTotalSales() == rhs.getTotalSales() ) {
            return true;
        }
        else return false;
    }


else return false;

    }



bool Customer::operator>(const Customer &rhs) const {


    if (compareOption == CustomerID) {
        if (this->getCustomerID() > rhs.getCustomerID() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == FullName) {

        std::string name1;
        std::string name2;

        name1 = (this->last_name + " " + this->first_name);
        name2 = (rhs.last_name + " " + rhs.first_name);

        if (name1 > name2) {return true;} else return false;







        //  if (this->getLastName() > rhs.getLastName() ){
        //     return true;
        // }
        // else if(this->getLastName() == rhs.getLastName()) {
        //     return (this->first_name > rhs.getFirstName());
        // }
        // else {
        //     return false;
        // }
    }


    else if (compareOption == CustomerSince) {
         if (this->getCustomerSince() > rhs.getCustomerSince()) {
            return true;
        }
        else return false;
    }


    else if (compareOption == DateOfBirth) {
         if (this->getDateOfBirth() > rhs.getDateOfBirth() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == HouseholdIncome) {
         if (this->getHouseholdIncome() > rhs.getHouseholdIncome() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == CreditScore) {
         if (this->getCreditScore() > rhs.getCreditScore() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == TotalSales) {
         if (this->getTotalSales() > rhs.getTotalSales() ) {
            return true;
        }
        else return false;
    }


    else if (compareOption == TotalSales) {
         if (this->getTotalSales() > rhs.getTotalSales() ) {
            return true;
        }
        else return false;
    }


return false;

}




bool Customer::operator!=(const Customer &rhs) const {
    return !(*this == rhs);
}


bool Customer::operator<(const Customer &rhs) const {
    return !(*this == rhs || *this > rhs);
}


bool Customer::operator>=(const Customer &rhs) const {
    return !(*this < rhs);
}

bool Customer::operator<=(const Customer &rhs) const {
    return !(*this > rhs);
}



std::string Customer::toString() {
    std::stringstream ss;
    ss << first_name << " " << last_name << " " << "(" << customer_ID << ")";
    return ss.str();
}


std::ostream& operator<< (std::ostream &out, Customer &rhs) {


     out << rhs.toString();
    return out;

}













//FullName, UserName, CustomerSince, DateOfBirth, CreditScore, HouseholdIncome, TotalSales, CustomerID





