#include <bits/stdc++.h>
using namespace std;

void add()
{
    int a, b;
    cout << "enter the first number :";
    cin >> a;
    cout << "enter the second number :";
    cin >> b;

    cout << "the answer is " << a + b << endl;
}

void sub()
{
    int a, b;
    cout << "enter the first number :";
    cin >> a;
    cout << "enter the second number :";
    cin >> b;

    cout << "the answer is " << a - b << endl;
}

void mul()
{
    int a, b;
    cout << "enter the first number :";
    cin >> a;
    cout << "enter the second number :";
    cin >> b;

    cout << "the answer is " << a * b << endl;
}

void divide()
{
    int a, b;
    cout << "enter the first number :";
    cin >> a;
    cout << "enter the second number :";
    cin >> b;

    while (b == 0)
    {
        cout << "enter a valid number, denominator can't be 0!!!!" << endl;
        cin >> b;
    }

    cout << "the answer is " << (double)a / b << endl;
}

int main()
{
    int operation = 0;
    while (operation != 5)
    {
        cout << "========== calculator ==========" << endl;
        cout << "enter 1 for adding two number : " << endl;
        cout << "enter 2 for subtracting two number : " << endl;
        cout << "enter 3 for multiplying two number : " << endl;
        cout << "enter 4 for dividing two number : " << endl;
        cout << "enter 5 for exit the calculator : " << endl;
        cout << "================================" << endl;

        cin >> operation;
        if (operation == 1)
            add();
        else if (operation == 2)
            sub();
        else if (operation == 3)
            mul();
        else if (operation == 4)
            divide();
        else if (operation == 5)
            continue;
        else
            cout << "enter a number between 1 to 5!!!" << endl;
    }
    return 0;
}