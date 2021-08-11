#include <iostream>
#include <list>
using namespace std;

class Human {
private:
    int salary;
    int current_assets;

public:
    string name;
    string occupation;

    void introduce_self() {
        cout << "Hi there, my name is " << name << " and I am a "<< occupation << endl;
     }
    
    void get_salary() {
        if(salary > 100000){
            salary -= 20000; //lie about income
            cout << "I make a modest salary of $" << salary << endl;
        }
        else{ 
            cout << "I make a salary of $" << salary << endl;
        }
    


};

int main() {

    return 0;
}