#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char again;

    do {
        cout << "\n1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "6. Square root\n";
        cout << "7. Maximum\n";
        cout << "8. Minimum\n";
        cout << "9. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Division by zero is not possible.\n";
                }
                break;

            case 5:
                cout << "Enter base and power: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> num1;

                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "The number must be positive.\n";
                }
                break;

            case 7:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if (num1 > num2) {
                    cout << "Maximum: " << num1 << endl;
                } else if (num2 > num1) {
                    cout << "Maximum: " << num2 << endl;
                } else {
                    cout << "The numbers are equal.\n";
                }
                break;

            case 8:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if (num1 < num2) {
                    cout << "Minimum: " << num1 << endl;
                } else if (num2 < num1) {
                    cout << "Minimum: " << num2 << endl;
                } else {
                    cout << "The numbers are equal.\n";
                }
                break;

            case 9:
                cout << "Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }

        cout << "Continue? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
