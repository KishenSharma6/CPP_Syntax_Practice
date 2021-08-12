#include <iostream>
#include <list>
using namespace std;

class Human {
private:
    int Salary;
    int Current_assets;

public:
    string Name;
    string Occupation;

    void introduce_self() {
        cout << "Hi there, my name is " << Name << " and I am a "<< Occupation << endl;
     }   
    void share_salary() {
        if(Salary > 100000){
            Salary -= 20000; //lie about income
            cout << "I make a modest salary of $" << Salary << endl;
        }
        else{ 
            cout << "I make a salary of $" << Salary << endl;
        }
    }
    void annual_raise(float percent_raise) {
        Salary += (Salary * percent_raise);
        cout << "I received a " << percent_raise * 100 << "% raise"<<endl;
        cout << "My new salary is $" << Salary << endl;
    }
    
    Human(string name, string job, int salary, int savings){
         Name= name;
         Occupation= job;
         Salary = salary;
         Current_assets= savings;

     }
};
class Xmen:public Human{
public:
    Xmen(string name, string job, int salary, int savings):Human(name, job, salary, savings){};
    

};    



int main(){
    Human person1("Henry", "Mechanical Engineer", 50000, 150000);
    Human person2("David", "SWE", 120000, 10000000);
    
    person1.introduce_self();
    person1.share_salary();
    person1.annual_raise(2.00);
    person1.share_salary();
    person2.introduce_self();
    person2.share_salary();
    // give person 1 a raise

    Xmen wolverine("Logan", "Hard Carry", 0, 0);
    wolverine.introduce_self();
    

    return 0;
}