#include <iostream>
using namespace std;
class String
{
private:
    char *s;

public:
    String();
    String(char *);
    ~String();
    int length();
    char *strcpy(char *, const char *);
    int strlen(const char *);
    char *strcat(char *, const char *);
    String dao();
    String noi(String);
    String to_upper();
    String to_lower();
    friend istream &operator>>(istream &, String &);
    friend ostream &operator<<(ostream &, const String &);
};
String::String()
{
    s = new char[1];
    s[0] = '\0';
}
String::String(char *str)
{
    s = new char[strlen(str) + 1];
    s = str;
}
String::~String()
{
    delete[] s;
}
int String::length()
{
    return strlen(s);
}
char *String::strcpy(char *dich, const char *nguon)
{
    int i = 0;
    while (nguon[i] != '\0')
        dich[i] = nguon[i++];
    dich[i] = '\0';
    return dich;
}
int String::strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}
char *String::strcat(char *dich, const char *nguon)
{
    int i = 0, j = 0;
    while (dich[i] != '\0')
        i++;
    while (nguon[j] != '\0')
        dich[i++] = nguon[j++];
    dich[i] = '\0';
    return dich;
}
String String::dao()
{
    char *newStr = new char[length() + 1];
    for (int i = 0, j = length() - 1; i < length(); i++, j--)
    {
        newStr[i] = s[j];
    }
    newStr[length()] = '\0';
    String result = String(newStr);
    delete[] newStr;
    return result;
}

istream &operator>>(istream &is, String &str)
{
    char buffer[1000];
    is >> buffer;
    str = String(buffer);
    return is;
}
ostream &operator<<(ostream &os, const String &str)
{
    os << str.s;
    return os;
}
int main()
{
    String s;
    cout << ".";
    cin >> s;
    s = s.dao();
    cout << s;
}