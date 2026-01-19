#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter the a and b :" << endl;
    cin >> a >> b;
    cout << "Enter the op: " << endl;
    cin >> op;

 
    if (op== '+')
    {
        cout << "Sum : " << a + b << endl;
    }
    else if (op== '-')
    {
        cout << "Minus : " << a - b << endl;
    }
    else if (op== '*')
    {
        cout << "Multiply : " << a * b << endl;
    }
    else if (op== '/')
    {
        cout << "Divide : " << a / b << endl;
    }
    else
    {
        cout << "Wrong op" << endl;
    };
    return 0;
}