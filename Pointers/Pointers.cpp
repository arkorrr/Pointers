#include <iostream>
using namespace std;

int main()
{
    //Task1 Используя только указатели и оператор разыменования, определить знак числа, введённого с клавиатуры. 
    int x;
    int* px = &x;
    cin >> *px;
    if (*px < 0)
    {
        cout << "Digit < 0, mark = '-' " << endl;
    }
    else if (*px > 0)
    {
        cout << "Digit > 0, mark = '+' " << endl;
    }
    //Task2 Написать примитивный калькулятор, пользуясь только указателями и оператором разыменования.
    int a, b;
    char mark;
    char* pmark = &mark;
    int* pa = &a;
    int* pb = &b;
    cout << "Enter two numbers " << endl;
    cin >> *pa;
    cin >> *pb;
    cout << "Enter mark '+' or '-'" << endl;
    cin >> *pmark;
    if (*pmark == '+')
    {
        cout << "Sum of numbers = " << *pa + *pb << endl;
    }
    if (*pmark == '-')
    {
        if (*pa > *pb)
        {
            cout << "Difference of numbers = " << *pa - *pb << endl;
        }
        else if (*pa < *pb)
        {
            cout << "Difference of numbers = " << *pb - *pa << endl;
        }
    }
    //Task3 Используя только указатели и оператор разыменования, обменять местами значения двух переменных.
    int a = 5;
    int b = 2;
    int* pa = &a;
    int* pb = &b;
    int c = *pa;
    *pa = *pb;
    *pb = c;
    cout << *pa << " " << *pb << endl;

}
