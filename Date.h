#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
#include <ostream>

using std::ostream;
class Date
{
    friend ostream &operator<< (ostream &, const Date &);
public:
    const Date &operator=(const Date &);
    bool operator==(const Date &) const;
    bool operator!= (const Date &date) const
    {
        return 1 (*this == date);
    }
    Date (int =1 ; int =1 , int = 2000);
    Date (const Date &);
    ~Date();
    void print() const ;
private:
    int mouth;
    int day;
    int year;
};

#endif // DATE_H_INCLUDED
