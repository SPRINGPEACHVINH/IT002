#include <iostream>

using namespace std;

class A
{
private:
public:
    A()
    {
        cout << "Entering the Hello program saying..."<<'\n';
    }

    ~A()
    {
        cout << "Then exiting...";
    }
};

A HELLO;

main()
{
    cout << "Hello, world.\n";
}