#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::to_string;

//class Date {
//public:
//
//	void setDay(const int& day);
//	void setMonth(const int& month);
//	void setYear(const int& year);
//
//	const int& getDay() const;
//	const int& getMonth() const;
//	const int& getYear() const;
//
//	Date() = default;
//	explicit Date(const int& dt);
//	explicit Date(const int& dt, const int& mt);
//	explicit Date(const int& dt, const int& mt, const int& yr);
//
//	int operator-(const Date& other) const;
//	Date& operator+=(int daysToAdd);
//	bool isLeapYear(int y) const;
//	string print() const;
//	int daysInMonth(int m, int y) const;
//	int totalDays() const;
//private:
//	int day = 1;
//	int month = 1;
//	int year = 1;
//
//};
//inline void Date::setDay(const int& day)
//{
//	this->day = day;
//}
//inline void Date::setMonth(const int& month)
//{
//	this->month = month;
//
//}
//inline void Date::setYear(const int& year)
//{
//	this->year = year;
//
//}
//
//inline const int& Date::getDay() const
//{
//	return this->day;
//}
//
//inline const int& Date::getMonth() const
//{
//	return this->month;
//
//}
//inline const int& Date::getYear() const
//{
//	return this->year;
//}
//
//inline Date::Date(const int& dt)
//	:Date(dt, 0)
//{
//}
//inline Date::Date(const int& dt, const int& mt)
//	: Date(dt, mt, 0)
//{
//}
//inline Date::Date(const int& dt, const int& mt, const int& yr)
//	:day(dt), month(mt), year(yr)
//{
//}
//
//inline string Date::print() const {
//	return (day < 10 ? "0" : "") + to_string(day) + "." +
//		(month < 10 ? "0" : "") + to_string(month) + "." +
//		to_string(year);
//}



class String {
private:
	char* str;
	size_t size;
	static int counter;

public:
	String();
	String(const size_t size);
	String(const char* inp);
	~String();
	void input(size_t size1 = 80);

	const int& getCounter();
	string print() const;
};




inline const int& String::getCounter()
{
	return this->counter;
}
