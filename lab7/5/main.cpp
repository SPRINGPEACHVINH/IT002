#include "Trapezoid.cpp"
#include "Parallelogram.cpp"
#include "Rectangle.cpp"
#include "Square.cpp"

int main()
{
    int choice;
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Chon 1 hinh:"<<'\n';
    cout << "1. Hinh thang"<<'\n';
    cout << "2. Hinh binh hanh"<<'\n';
    cout << "3. Hinh chu nhat"<<'\n';
    cout << "4. Hinh vuong"<<'\n';
    cout << "Nhap lua chon: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Nhap 4 toa do (x,y) theo thu tu cua hinh thang: ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        {
            Trapezoid trapezoid(x1, y1, x2, y2, x3, y3, x4, y4);

            if (!trapezoid.isParallelToXAxis())
            {
                cout << "Hinh thang khong co day song song truc hoanh." << endl;
            }
            else
            {
                cout << "Dien tich: " << trapezoid.getArea() << endl;
                cout << "Chu vi: " << trapezoid.getPerimeter() << endl;
            }
        }
        break;

    case 2:
        cout << "Nhap 4 toa do (x,y) theo thu tu cua hinh binh hanh: ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        {
            Parallelogram parallelogram(x1, y1, x2, y2, x3, y3, x4, y4);

            if (!parallelogram.isParallelToXAxis())
            {
                cout << "Hinh binh hanh khong co day song song truc hoanh." << endl;
            }
            else
            {
                cout << "Dien tich: " << parallelogram.getArea() << endl;
                cout << "Chu vi: " << parallelogram.getPerimeter() << endl;
            }
        }
        break;

    case 3:
        cout << "Nhap 4 toa do (x,y) theo thu tu cua hinh chu nhat: ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        {
            Rectangle rectangle(x1, y1, x2, y2, x3, y3, x4, y4);

            if (!rectangle.isParallelToXAxis())
            {
                cout << "Hinh chu nhat khong co day song song truc hoanh." << endl;
            }
            else
            {
                cout << "Dien tich: " << rectangle.getArea() << endl;
                cout << "Chu vi: " << rectangle.getPerimeter() << endl;
            }
        }
        break;

    case 4:
        cout << "Nhap 4 toa do (x,y) theo thu tu cua hinh vuong: ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        {
            Square square(x1, y1, x2, y2, x3, y3, x4, y4);

            if (!square.isParallelToXAxis())
            {
                cout << "Hinh vuong khong co day song song truc hoanh." << endl;
            }
            else
            {
                cout << "Dien tich: " << square.getArea() << endl;
                cout << "Chu vi: " << square.getPerimeter() << endl;
            }
        }
        break;

    default:
        cout << "Lua chon khong hop le." << endl;
        break;
    }

    return 0;
}