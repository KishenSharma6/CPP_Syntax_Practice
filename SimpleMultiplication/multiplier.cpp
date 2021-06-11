#include <iostream>
using namespace std;

int main(){
    cout << "Hey there! This is a really simple calculator for me to start learning about C++ syntax! Try not to be too judgy ;)" << endl;
    
    cout << "Enter first number" << endl;
    int number1= 0;
    cin >>number1;

    cout << "Enter second number" << endl;
    int number2= 0;
    cin >> number2;

    int product= number1 * number2;

    cout << "Let's hope this works!" << number1 << "X" << number2;
    cout << "=" << product << endl;

    return 0;

}