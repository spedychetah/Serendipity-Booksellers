#define _CRT_SECURE_NO_WARNINGS
#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int day, int month, int year);
	void setDate(int dy, int mon, int yr)
	{
		day = dy;
		month = mon;
		year = yr;
	}
	bool Date::operator > (const Date &dateobj)
	{
		bool status;
		if (year < dateobj.year)
			status = true;
		else if (year > dateobj.year)
			status = false;
		else if (year == dateobj.year)
		{
			if (month < dateobj.month)
				status = true;
			else if (month > dateobj.month)
				status = false;
			else if (month == dateobj.month)
			{
				if (day < dateobj.day)
					status = true;
				else if (day >= dateobj.day)
					status = false;
			}
		}
		return status;
	}

	bool Date::operator ==(const Date &dateobj)
	{
		bool status;
		if (year == dateobj.year && month == dateobj.month && day == dateobj.day)
			status = true;
		else
			status = false;
		return status;
	}

	bool Date::operator <(const Date &dateobj)
	{
		bool status;
		if (year > dateobj.year)
			status = true;
		else if (year < dateobj.year)
			status = false;
		else if (year == dateobj.year)
		{
			if (month > dateobj.month)
				status = true;
			else if (month < dateobj.month)
				status = false;
			else if (month == dateobj.month)
			{
				if (day > dateobj.day)
					status = true;
				else if (day <= dateobj.day)
					status = false;
			}
		}
		return status;
	}


};
