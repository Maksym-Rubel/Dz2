#include "FileName.h"
#include <string>
using std::string;
using std::to_string;
using std::cin;
using std::cout;






//Date& Date::operator+=(int daytoad)
//{
//    while (daytoad > 0) {
//        int dayinmonth = daysInMonth(month, year);
//        int ostalos = dayinmonth - day;
//
//        if (daytoad <= ostalos)
//        {
//            day += daytoad;
//            break;
//        }
//        else
//        {
//            daytoad -= (ostalos + 1);
//            day = 1;
//            month++;
//            if (month > 12)
//            {
//                month = 1;
//                year++;
//            }
//        }
//        
//    }
//    return *this;
//}
//bool Date::isLeapYear(int y) const
//{
//    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
//}
//int Date::operator-(const Date& other) const
//{
//    return this->totalDays() - other.totalDays();
//}
//inline int Date::daysInMonth(int m, int y) const
//{
//    switch (m) {
//    case 2: return isLeapYear(y) ? 29 : 28; 
//    case 4: case 6: case 9: case 11: return 30; 
//    default: return 31;
//    }
//}
//
//int Date::totalDays() const
//{
//    int total = 0;
//    for (size_t i = 1; i < year; i++)
//    {
//        total += isLeapYear(i) ? 366 : 365;
//    }
//    for (size_t i = 1; i < month; i++)
//    {
//        total += daysInMonth(i, year);
//    }
//
//    total += day;
//
//    return total;
//}


int String::counter = 0;
string String::print() const
{
    return this->str;
}
String::String()
{
    
    str = new char[size];
    str[size] = '\0';
    counter++;


}
String::String(const size_t size)
{
    this->size = size;
    str = new char[size];
    str[size] = '\0';
    counter++;
}

String::String(const char* inp)
{
    size = strlen(inp) + 1;
    this->str = new char[size];
    strcpy_s(str, size, inp);
    counter++;

}
String::~String() {
    delete[] str;
    counter--;
}

void String::input(size_t size1)
{
    char* inp = new char[size1 + 1];
    cout << "Enter text --> ";
    cin.getline(inp, size1 + 1);
   
    size = strlen(inp) + 1;
    str = new char[size];
    strcpy_s(str, size, inp);
   
    delete[] inp;



}





  
