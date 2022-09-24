#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "ENTER THE TWO NUMBER" << endl;
    cin >> num1 >> num2;
    cout << "BEFORE SWAPING NUMBER num1 is " << num1 << " and num2 is " << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "AFTER SWAPING NUMBER num1 is " << num1 << " and num2 is " << num2 << endl;

    return 0;
}