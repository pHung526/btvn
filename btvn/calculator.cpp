#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cin >> num1;
    cin >> op;
    cin >> num2;

    switch (op) {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 / num2 << endl;
        else
            cout << "Invalid divisor!" << endl;
        break;
    case '%':
        if ((int)num1 == num1 && (int)num2 == num2) // Check for integers
            cout << (int)num1 % (int)num2 << endl;
        else
            cout << "Invalid divisor!" << endl;
        break;
    default:
        cout << " Invalid operator!" << endl;
    }

    return 0;
}
