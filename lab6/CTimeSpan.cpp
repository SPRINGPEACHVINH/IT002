#include <bits/stdc++.h>
using namespace std;
class CTimeSpan
{
private:
    int hour, minute, second;

public:
    CTimeSpan(int hour = 0, int minute = 0, int second = 0)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    friend istream &operator>>(istream &is, CTimeSpan &ct)
    {
        cout << "Nhap gio: ";
        is >> ct.hour;
        cout << "Nhap phut: ";
        is >> ct.minute;
        cout << "Nhap giay: ";
        is >> ct.second;
        return is;
    }
    friend ostream &operator<<(ostream &os, CTimeSpan &ct)
    {
        os << ct.hour << ":" << ct.minute << ":" << ct.second << "\n";
        return os;
    }
    int GetMinute() const
    {
        return minute;
    }
    int GetHour() const
    {
        return hour;
    }
    int GetSecond() const
    {
        return second;
    }
    void SetMinute(int minute)
    {
        this->minute = minute;
    }
    void SetHour(int hour)
    {
        this->hour = hour;
    }
    void SetSecond(int second)
    {
        this->second = second;
    }
    CTimeSpan operator+(const CTimeSpan &calculate)
    {
        int h = hour + calculate.hour;
        int m = minute + calculate.minute;
        int s = second + calculate.second;
        if (s >= 60)
        {
            s -= 60;
            m += 1;
        }
        if (m >= 60)
        {
            m -= 60;
            h += 1;
        }
        return CTimeSpan(h, m, s);
    }
    CTimeSpan operator-(const CTimeSpan& calculate)
    {
        int h = hour - calculate.hour;
        int m = minute - calculate.minute;
        int s = second - calculate.second;
        if (s < 0)
        {
            s += 60;
            m -= 1;
        }
        if (m < 0)
        {
            m += 60;
            h -= 1;
        }
        return CTimeSpan(h, m, s);
    }
    bool bang(const CTimeSpan calculate) const
    {
        return (hour == calculate.hour && minute == calculate.minute && second == calculate.second);
    }
    bool khac(const CTimeSpan calculate) const
    {
        return !bang(calculate);
    }
    bool lon_hon(const CTimeSpan calculate)
    {
        if (hour > calculate.hour)
            return true;
        else if (hour < calculate.hour)
            return false;
        if (minute > calculate.minute)
            return true;
        else if (minute < calculate.minute)
            return false;
        if (second > calculate.second)
            return true;
        else if (second < calculate.second)
            return false;
        return false;
    }
    bool nho_hon(const CTimeSpan calculate)
    {
        return !lon_hon_bang(calculate);
    }
    bool lon_hon_bang(const CTimeSpan calculate)
    {
        if (lon_hon(calculate))
            return true;
        else if (bang(calculate))
            return true;
        else
            return false;
    }
    bool nho_hon_bang(CTimeSpan calculate)
    {
        if (nho_hon(calculate))
            return true;
        else if (bang(calculate))
            return true;
        else
            return false;
    }
};