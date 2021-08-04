#include <iostream>
using namespace std;

class Human {
 public: //Be sure to set permissions to access this class   
    // Member attributes
    string Name;
    string Occupation;
    string Company;
    double Age;   

    // Member functions
    void IntroduceSelf(){
        cout << "Hello, my name is " << Name << " and I am " << Age << " years old." << endl;
        cout << "I am a " << Occupation << " at " << Company << endl;


    };
};



int main() {
    Human person1;
    person1.Name = "Adam";
    person1.Occupation= "Manager";
    person1.Company = "Google";
    person1.Age= 35;

    Human person2;
    person2.Name = "Michelle";
    person2.Occupation= "Software Engineer";
    person2.Company = "Apple";
    person2.Age= 28;

    person1.IntroduceSelf();
    person2.IntroduceSelf();
    
    return 0;
}