#include <iostream>
using namespace std;
class calendar
{
public:
   int day, month, year;
   calendar()
   {
   }
   calendar(int day, int month, int year)
   {
      this->day = day;
      this->month = month;
      this->year = year;
   }
   void nhap(calendar &a)
   {
      cout << "Nhap ngay: ";
      cin >> day;
      '\n';
      cout << "Nhap thang: ";
      cin >> month;
      '\n';
      cout << "Nhap nam: ";
      cin >> year;
      '\n';
   }
   void display()
   {
      if (month == 2)
      {
         if (year % 4 == 0)
         {
            if (day == 28)
            {
               month++;
               day = 0;
            }
         }
         else
         {
            if (day == 29)
            {
               month++;
               day = 0;
            }
         }
      }
      else if (month == 12)
      {
         if (day == 31)
         {
            year++;
            day = 0;
            month = 1;
         }
      }
      day++;
      cout << day << "/" << month << "/" << year;
   }
};
int main() {
   calendar c;
   c.nhap(c);
   cout<<"Ngay tiep theo la: ";
   c.display();
}