#include <bits/stdc++.h>
using namespace std;
void fix(int &day, int &month, int &year)
{
    while (day > 30)
    {
        if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
        {
            month++;
        }
        while (day > 31)
        {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                month++;
        }
        day -= 30;
    }
    if (day > 28)
    {
        if (month == 2)
        {
            if (year % 4 != 0)
            {
                day -= 28;
                month++;
            }
            else
            {
                if (day > 29)
                {
                    day -= 29;
                    month++;
                }
            }
        }
    }
    while (day <= 0)
    {
        month--;
        if (month == 2)
        {
            if (year % 4 == 0)
            {
                day += 28;
            }
            else
                day += 29;
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            day += 21;
        else
            day += 30;
    }
    while (month > 12)
    {
        year++;
        month -= 12;
    }
    while (month <= 0)
    {
        year--;
        month += 12;
    }
}
class CDate
{
private:
    int day, month, year;
    int since1()
    {
        int a = (14 - month) / 12;
        int y = year + 4800 - a;
        int m = month + 12 * a - 3;
        int jd = day + (153 * m + 2) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 32045;
        return jd;
    }

public:
    CDate(int day = 0, int month = 0, int year = 0)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    friend istream &operator>>(istream &is, CDate &cd)
    {
        cout << "Nhap ngay: ";
        is >> cd.day;
        cout << "Nhap thang: ";
        is >> cd.month;
        cout << "Nhap nam: ";
        is >> cd.year;
        return is;
    }
    friend ostream &operator<<(ostream &os, CDate cd)
    {
        os << cd.day << ":" << cd.month << ":" << cd.year << ":" << '\n';
        return os;
    }
    int GetDay()
    {
        return day;
    }
    int GetMonth()
    {
        return month;
    }
    int GetYear()
    {
        return year;
    }
    CDate operator+(int days)
    {
        int d = day + days;
        fix(d, month, year);
        return CDate(d, month, year);
    }
    CDate operator-(int days)
    {
        int d = day - days;
        fix(d, month, year);
        return CDate(d, month, year);
    }
    void tang()
    {
        +1;
    }
    void giam()
    {
        -1;
    }
    int khoangcach(CDate d1, CDate d2)
    {
        int d = abs(d1.since1() - d2.since1());
        return d;
    }
};
