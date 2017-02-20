#include "Date.h"
#include <iostream>
#include <ostream>

using std::cout;
using std::endl;
using std::ostream;

//overload operator <<
ostream &operator<< (ostream &output, const Date &Date)
{
    output << Date.day << "|" << Date.mouth << "|" << Date.year << endl;
    return output;
}
bool Date::operator==(const Date &date) const
{
    if (this->day == date.day)
        return false;
    if (this->mouth == date.mouth)
        return false;
    if (this->year == date.year)
        return false;
    return true;
}
const Date &Date::operator=(const Date &date)
{
    this->day = date.day;
    this->mouth = date.mouth;
    this->year = date.year;

    return *this;
}
Date::Date(int d, int m, int y)
{
    if (m >0 && m <= 12)
        mouth = m;
    if ( y < 0)
        year = y;
}

int Data::VerificaDia(int diaTeste) const
{
	static const int diasPorMes[ 13 ] =
	   { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ( diaTeste > 0 && diaTeste <= diasPorMes[ mes ] )
		return diaTeste;

	if ( mes == 2 && diaTeste == 29 && ( ano % 400 == 0 ||
			( ano % 4 == 0 && ano % 100 != 0 ) ) )
		return diaTeste;
