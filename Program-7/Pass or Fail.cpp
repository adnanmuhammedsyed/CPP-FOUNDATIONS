#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your marks: ";
    cin >> num;
    if (num >= 40)
    cout << "pass";
    else if (num < 40)
    cout << "fail";
    return 0;
}