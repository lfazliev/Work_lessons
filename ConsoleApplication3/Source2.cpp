/*#include <iostream>
#include <string>
class date
{
	int day, month, year;
public:
	date() :day{ 3 }, month{ 12 }, year{ 1000 }{};
	date(int day_p) :date()
	{
		day = day_p;
	}
	date(int day_p, int month_p) :date(day_p)
	{
		month = month_p;
	}
	date(int day_p, int month_p, int year_p) :date(day_p, month_p)
	{
		year = year_p;
	}
	void print()
	{
		std::cout << day << "." << month << "." << year << "\n";
	}
	date operator++(int)
	{
		date dt;
		dt.day = this->day;
		this->day++;
		return dt;
	}
	friend date operator+(const date& left_date, const date& right_date);
	friend date operator-(const date& left_date, const date& right_date);
	friend date operator*(const date& left_date, const date& right_date);
	friend date operator/(const date& left_date, const date& right_date);
	
};
	date operator+(const date& left_date, const date& right_date)
	{
		date date_r;
		date_r.day = left_date.day + right_date.day;
		date_r.month = left_date.month + right_date.month;
		date_r.year = left_date.year + right_date.year;
		return date_r;
	}
	date operator-(const date& left_date, const date& right_date)
	{
		date date_r;
		date_r.day = left_date.day - right_date.day;
		date_r.month = left_date.month - right_date.month;
		date_r.year = left_date.year - right_date.year;
		return date_r;
	}
	date operator*(const date& left_date, const date& right_date)
	{
		date date_r;
		date_r.day = left_date.day * right_date.day;
		date_r.month = left_date.month * right_date.month;
		date_r.year = left_date.year * right_date.year;
		return date_r;
	}
	date operator/(const date& left_date, const date& right_date)
	{
		date date_r;
		date_r.day = left_date.day / right_date.day;
		date_r.month = left_date.month / right_date.month;
		date_r.year = left_date.year / right_date.year;
		return date_r;
	}
	

	
	

int main()
{
	date data1;
	date data2(12);
	date data3(5,3);
	date data4(13,8,1999);
	data1.print();
	data2.print();
	data3.print();
	data4.print();
	(data2++).print();
	

}*/