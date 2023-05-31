#include "CTimeSpan.cpp"
using namespace std;
class CTime
{
private:
    int hour, minute, second;

public:
    CTime(int hour = 0, int minute = 0, int second = 0)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    friend istream &operator>>(istream &is, CTime &ct)
    {
        cout << "Nhap gio: ";
        is >> ct.hour;
        cout << "Nhap phut: ";
        is >> ct.minute;
        cout << "Nhap giay: ";
        is >> ct.second;
        return is;
    }
    friend ostream &operator<<(ostream &os, CTime ct)
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
    CTime operator+(int seconds)
    {
        int s = second + seconds;
        second = s % 60;
        int m = minute + s / 60;
        minute = m % 60;
        int h = (hour + m / 60) % 24;
        return CTime(h, m, s);
    }
    CTime operator-(int seconds)
    {
        int s = second - seconds;
        if (s < 0)
        {
            s += 60;
            minute--;
        }
        second = s;
        if (minute < 0)
        {
            minute += 60;
            hour--;
        }
        int m = minute;
        if (hour < 0)
        {
            hour += 24;
        }
        int h = hour;
        return CTime(h, m, s);
    }
    void tang()
    {
        +1;
    }
    void giam()
    {
        -1;
    }
};