#include <iostream>

//Lab 6. Variant 13. Task 2
using namespace std;
void Sum(int, int);
void Dif(int, int);
int main()
{
    int a, b;

    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    

    Sum(a, b);
    Dif(a, b);

    return 0;
}

void Sum(int a, int b)
{
    int val1 = a, val2 = b;
    a = val1 + val2;
    cout << "\na: " << a << endl;
}

void Dif(int num1, int b)
{
    int val1 = num1, val2 = b;
    b = val1 - val2;
    cout << "\nb: " << b << endl;
}