#include <iostream>

using namespace std;
//******************************calculater program***************************************

int main() {
    char operation;
    double x,y;

    cout << " Calculator" << endl;
    cout << "Enter two numbers= ";
    cin >> x >>y;

      
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << x + y << endl;
            break;
        case '-':
            cout << "Result: " <<x -y << endl;
            break;
        case '*':
            cout << "Result: " <<x * y << endl;
            break;
        case '/':
            if (y != 0) {
                cout << "Result: " << x /y << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}
