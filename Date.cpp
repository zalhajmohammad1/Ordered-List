#include "Date.h"
#include "Customer.h"


Date::Date() {

    this->year = 1970;
    this->month = 1;
    this->day = 1;

}

Date::Date(int year, int month, int day) {

    this->setDay(day);
    this->setMonth(month);
    this->setYear(year);
}



Date::Date(const Date &rhs) {

    this->setYear(rhs.getYear());
    this->setMonth(rhs.getMonth());
    this->setDay(rhs.getDay());

}


Date::Date(const std::string formattedDate) {

    //create stringstream ss with formatted date as its value

    std::stringstream ss;
    ss << formattedDate;

    //string temp variables
    std::string month_str;
    std::string day_str;
    std::string year_str;

    //pipe in the month, day, and year split by '/'
    std::getline(ss, month_str, '/');
    std::getline(ss, day_str, '/');
    std::getline(ss, year_str);

    //convert those strings to integers then store them via setters
    setMonth(std::stoi(month_str));
    setDay(std::stoi(day_str));
    setYear(std::stoi(year_str));



}



void Date::setDate(int year, int month, int day) {

    setYear(year);
    setMonth(month);
    setDay(day);




}





int Date::daysOfMonth(int month) {

    int days = 0;

    switch (month) {
        case 4:
    case 6:
    case 9:
    case 11:
    days = 30;
        break;

        case 1:
            case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        days = 31;
        break;

        case 2:
            if(year % 400 == 0) {days = 29;}
            else if(year % 100 ==0) {days = 28;}
            else if (year % 4 == 0) {days = 30;}
            else {days = 28;}
    }
return days;
}




void Date::setYear(int year) {
    this->year = year;

}

void Date::setMonth(int month) {

    if(month > 0 && month <= 12) {
        this->month = month;
    }

    else {
        throw std::out_of_range("Out of Range");
    }

}

void Date::setDay(int day) {

    if(day < 0 && day >= daysOfMonth(this->getMonth() )) {
        throw std::out_of_range("Out of Range");
    }


    this->day = day;



}


int Date::getYear() const {

    return year;
}

int Date::getMonth() const {

    return month;

}


int Date::getDay() const {

    return day;
}

std::string Date::toString() const {

    std::stringstream ss;
    ss << month << "/" << day << "/" << year;
    return ss.str();

}


bool Date::operator==(const Date &rhs) const {
    if (this->getMonth() == rhs.getMonth() && this->getDay()== rhs.getDay() && this->getYear() == rhs.getYear()) {
        return true;
    }
        else return false;
}



bool Date::operator!=(const Date &rhs) const {
    return !(*this == rhs);
}

bool Date::operator<(const Date &rhs) const {
    if ( this->getYear() < rhs.getYear() ) {

        return true;
    }

    else if ( this->getYear() > rhs.getYear() ) {
        return false;
    }

    if(this->getMonth() < rhs.getMonth()) {
        return true;

    }
    else if (this->getMonth() > rhs.getMonth()) {
        return false;
    }

    if (this->getDay() < rhs.getDay()) {
        return true;
    }
    else if (this->getDay() > rhs.getDay()) {
        return false;

    }
    return false;

}





    bool Date::operator>(const Date &rhs) const {
        return !(*this <= rhs);
    }



    bool Date::operator<=(const Date &rhs) const {
        return (*this < rhs || *this == rhs);

    }


    bool Date::operator>=(const Date &rhs) const {

        return !(*this < rhs);

    }


std::ostream& operator << (std::ostream &out, const Date &rhs) {
    out << rhs.toString();
    return out;
}


Date& Date::operator=(const Date &rhs) {

    this->setYear(rhs.getYear());
    this->setMonth(rhs.getMonth());
    this->setDay(rhs.getDay());
    return *this;

}










