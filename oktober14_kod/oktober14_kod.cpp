#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void _kalk(string a, float b)
{
    cout << a << " " << b << endl;
}
float _Sum(float a, float b)
{
    return a + b; 
}
float Kvadr(float a)
{
    return a * a;
}
float _Del(float a, float b)
{
    if (b != 0)
    { 
        return a / b;
    }
    else
    {
        return false;
    }
}

int main()
{
    _kalk("Vesh_chislo", 2.6);
    _kalk("Summa = ", _Sum(2.0, 3.0));
    _kalk("Kvadr = ", Kvadr(9.0));
    float a = 9.0, b = 12.0;

    cout << "Summa = " << a << " and " << b << " = " << _Sum(a, b) << endl;
    cout << " Del = " << a << " and " <<  b << " = " << _Del(a, b) << endl;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
