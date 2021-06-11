#include <iostream>
using namespace std;

int firstNumber= 0;
int secondNumber=0;
int product=0;

void calculation(){
    cout << "Input first number:" << endl;
    cin >> firstNumber;

    cout << "Input second number:" << endl;
    cin >> secondNumber;

    product= firstNumber * secondNumber;


}
int main(){
    cout << "Hey there! This is a really simple calculator for me to start learning about C++ syntax! Try not to be too judgy ;)" << endl;
    
    calculation();

    cout << "Let's hope this works!\n" << firstNumber << "X" << secondNumber;
    cout << "=" << product << endl;

    return 0;

}