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
    void nhap()
    {
        cout << "Nhap gio: ";
        cin >> hour;
        cout << "Nhap phut: ";
        cin >> minute;
        cout << "Nhap giay: ";
        cin >> second;
    }
    void xuat()
    {
        cout << hour << ":" << minute << ":" << second << "\n";
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
    CTimeSpan cong(const CTimeSpan calculate)
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
    CTimeSpan tru(const CTimeSpan calculate)
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