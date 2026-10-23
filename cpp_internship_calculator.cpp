#include <bits/stdc++.h>
using namespace std;

void add(double a, double b)
{
    cout << "the answer is " << a + b << endl;
}

void sub(double a, double b)
{
    cout << "the answer is " << a - b << endl;
}

void mul(double a, double b)
{
    cout << "the answer is " << a * b << endl;
}

void divide(double a, double b)
{
    while (b == 0)
    {
        cout << "denominator can't be 0!!!" << endl;
        while(!(cin >> b)){
            cout << "enter a valid number!!!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "The answer is " << a / b << endl;
}

int main()
{
    int operation = 0;
    while (operation != 5)
    {
        cout << "====================" << endl;
        cout << "enter 1 for adding two number: " << endl;
        cout << "enter 2 for subtracting two number: " << endl;
        cout << "enter 3 for multiplying two number: " << endl;
        cout << "enter 4 for dividing two number: " << endl;
        cout << "enter 5 to exit: " << endl;

        while (!(cin >> operation) || operation <= 0 || operation >= 6)
        {
            cout << "Enter a valid operation (1-5): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (operation == 5)
            break;

        double a, b;

        cout << "enter the first number: " << endl;
        while (!(cin >> a))
        {
            cout << "enter a valid number!!!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "enter the second number: " << endl;
        while (!(cin >> b))
        {
            cout << "enter a valid number!!!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (operation == 1)
            add(a, b);
        if (operation == 2)
            sub(a, b);
        if (operation == 3)
            mul(a, b);
        if (operation == 4)
            divide(a, b);
    }
    return 0;
}