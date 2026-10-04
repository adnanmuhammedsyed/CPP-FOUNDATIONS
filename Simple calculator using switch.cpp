#include <iostream>
using namespace std;
int main() 
    {
    double a,b;
    char op;
    cout << "Enter first num, operator, second num: ";
    cin >> a >> op >> b;
    switch (op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        default:
            cout << "Invalid operator";
    }
    return 0;
}