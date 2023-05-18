#include "CTimeSpan.cpp"
int main() {
    CTimeSpan time1, time2, calculate;
    time1.nhap();
    time2.nhap();
    calculate = time1.tru(time2);
    calculate.xuat();
}