
#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operand;

    cin >> num1 >> num2;
    cin >> operand;

    switch (operand) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        default:
            cout << "enter operand is not correct";
            break;
    }

    return 0;
}
