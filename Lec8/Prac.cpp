#include<iostream>
using namespace std;

int main() {
    int a , b ;
    char op;

    cout << "enter The first number :" << endl;
    cin >> a;
    cout << "enter The second number :" << endl;
    cin >> b;
    cout << "enter The operator :" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "sum of " << a << " and " << b << " is: " << (a+b);
        break;
    case '-':
        cout << "substraction of " << a << " and " << b << " is: " << (a-b);
        break;
    case '*':
        cout << "Multiplication of " << a << " and " << b << " is: " << (a*b);
        break;
    default:
        break;
    }
}