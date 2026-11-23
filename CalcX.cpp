#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to display the calculator menu
void showMenu() {
    cout << "\n====================================\n";
    cout << "          SCIENTIFIC CALCULATOR\n";
    cout << "====================================\n";
    cout << "1.  Addition\n";
    cout << "2.  Subtraction\n";
    cout << "3.  Multiplication\n";
    cout << "4.  Division\n";
    cout << "5.  Modulus\n";
    cout << "6.  Power\n";
    cout << "7.  Square Root\n";
    cout << "8.  Percentage\n";
    cout << "9.  Sine\n";
    cout << "10. Cosine\n";
    cout << "11. Tangent\n";
    cout << "12. Logarithm (base 10)\n";
    cout << "13. Natural Logarithm\n";
    cout << "14. Factorial\n";
    cout << "0.  Exit\n";
    cout << "====================================\n";
}

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {

    int choice;
    double num1, num2, result;

    cout << fixed << setprecision(4);

    cout << "====================================\n";
    cout << "       WELCOME TO CALCULATOR\n";
    cout << "====================================\n";

    while (true) {

        showMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "\nThank you for using the calculator!\n";
            break;
        }

        switch (choice) {

            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                result = num1 + num2;

                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                result = num1 - num2;

                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                result = num1 * num2;

                cout << "Result = " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                break;

            case 5: {
                int a, b;

                cout << "Enter two integers: ";
                cin >> a >> b;

                if (b == 0) {
                    cout << "Error: Modulus by zero is not allowed.\n";
                } else {
                    cout << "Result = " << a % b << endl;
                }

                break;
            }

            case 6:
                cout << "Enter base: ";
                cin >> num1;

                cout << "Enter exponent: ";
                cin >> num2;

                result = pow(num1, num2);

                cout << "Result = " << result << endl;
                break;

            case 7:
                cout << "Enter number: ";
                cin >> num1;

                if (num1 < 0) {
                    cout << "Error: Cannot calculate square root of a negative number.\n";
                } else {
                    result = sqrt(num1);
                    cout << "Result = " << result << endl;
                }
                break;

            case 8:
                cout << "Enter the number: ";
                cin >> num1;

                cout << "Enter percentage: ";
                cin >> num2;

                result = (num1 * num2) / 100;

                cout << num2 << "% of " << num1
                     << " = " << result << endl;
                break;

            case 9:
                cout << "Enter angle in degrees: ";
                cin >> num1;

                result = sin(num1 * M_PI / 180);

                cout << "sin(" << num1 << ") = " << result << endl;
                break;

            case 10:
                cout << "Enter angle in degrees: ";
                cin >> num1;

                result = cos(num1 * M_PI / 180);

                cout << "cos(" << num1 << ") = " << result << endl;
                break;

            case 11:
                cout << "Enter angle in degrees: ";
                cin >> num1;

                result = tan(num1 * M_PI / 180);

                cout << "tan(" << num1 << ") = " << result << endl;
                break;

            case 12:
                cout << "Enter number: ";
                cin >> num1;

                if (num1 <= 0) {
                    cout << "Error: Logarithm is defined only for positive numbers.\n";
                } else {
                    result = log10(num1);
                    cout << "log10(" << num1 << ") = " << result << endl;
                }
                break;

            case 13:
                cout << "Enter number: ";
                cin >> num1;

                if (num1 <= 0) {
                    cout << "Error: Natural logarithm is defined only for positive numbers.\n";
                } else {
                    result = log(num1);
                    cout << "ln(" << num1 << ") = " << result << endl;
                }
                break;

            case 14: {
                int n;

                cout << "Enter a non-negative integer: ";
                cin >> n;

                if (n < 0) {
                    cout << "Error: Factorial is not defined for negative numbers.\n";
                } else if (n > 20) {
                    cout << "Error: Enter a number between 0 and 20.\n";
                } else {
                    cout << n << "! = " << factorial(n) << endl;
                }

                break;
            }

            default:
                cout << "Invalid choice. Please select an option from 0 to 14.\n";
        }
    }

    return 0;
}
