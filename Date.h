// #ifndef DATE_H
// #define DATE_H
// #include <string>
// #include <iostream>
//
// class Date {
//
// };
//
//
//
// #endif //DATE_H

#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>

/**
 * @class Date
 * @brief represents a date
 */
class Date {



private:

    int day;
    int month;
    int year;
    int daysOfMonth(int month);




/**
 *
 *
 *public methods
 */
public:

    /**
     *
     *
     *default constructor
     */
    Date();


    /**
     * parameterized constructor
     * @param year // the year part of the date
     * @param month // the month part of the date
     * @param day // the day part of the date
     */
    Date(int year, int month, int day);

    /**
     * parameterized copy constructor
     * @param rhs // right hand side object from the driver that copied into the left hand side object
     */
    Date(const Date &rhs);


    /**
     * setter mutator method that sets the date of an object
     * @param year //year part of the date
     * @param month // month part of the date
     * @param day // day part of the date
     */
    void setDate(int year, int month, int day);


    /**
     * setter mutator method that sets the day part of the date
     * @param day // the date's day
     */
    void setDay(int day);

    /**
     * setter mutator method that sets the month part of the date
     * @param month // the date's month
     */
    void setMonth(int month);

    /**
     * setter mutator method that sets the year of the date
     * @param year // the date's year
     */
    void setYear(int year);

    /**
     * getter accessor method that returns the day of the date
     * @return // returns the day
     */
    int getDay() const;

    /**
     * getter accessor method that returns the month of the date
     * @return // returns the month
     */
    int getMonth() const;

    /**
     * getter accessor method that returns the year of the date
     * @return // returns the year
     */
    int getYear() const ;

    /**
     * toString method that accesses the properties of the date object
     * @return // returns the properties of a date object in a string format
     */
    std::string toString() const;

    /**
     * parameterized constructor
     * @param formattedDate // takes a string as the argument and turns it into an integer, then constructs the object with it
     */
    Date(const std::string formattedDate);


    /**
     * overloaded == operator that checks if two date objects are equal to one another
     * @param rhs // the rigth hand side object that is compared to the left hand side object
     * @return // returns true or false
     */
    bool operator==(const Date &rhs) const;

    /**
     * overloaded != operator that checks if two date objects are not equal to one another
     * @param rhs // the right hand side object that is compared with the left hand side object
     * @return // returns true or false
     */
    bool operator!=(const Date &rhs) const;

    /**
     * overloaded < operator that checks if the right hand side object is greater than the left hand side object
     * @param rhs // the right hand side object that is compared with the left hand side object
     * @return // returns true or false
     */
    bool operator<(const Date &rhs) const;

    /**
     * overloaded > operator that checks if the right hand side object is less than the left hand side object
     * @param rhs // the right hand side object that is compared with the left hand side object
     * @return // returns true or false
     */
    bool operator>(const Date &rhs) const;

    /**
     * overloaded <= operator that checks if the right hand side is equal to or greater than the left hand side object
     * @param rhs // the right hand side object that is compared with the left hand side object
     * @return // returns true or false
     */
    bool operator<=(const Date &rhs) const;

    /**
     * overloaed <= operator that checks if the right hand side object is equal to is less than the left hand side obejct
     * @param rhs // the right hand side object that is compared with the left hand side object
     * @return // return true or false
     */
    bool operator>=(const Date &rhs) const;

    /**
     * overloaded assignment operator that assigns the left hand side object to the right hand side object
     * @param rhs // the right hand side object that is assigned to the left hand side object
     * @return // returns a Date object
     */
    Date& operator=(const Date &rhs);








};

/**
 * overloaded << operator that is used with the toString method to store the information of an object in a string format then output it
 * @param out // the ostream variable that stores the right hand side object's properties
 * @param rhs // the right hand side object that is used with string stream to access its properties in a string format
 * @return
 */
std::ostream& operator<< (std::ostream &out, const Date &rhs);

#endif //DATE_H


