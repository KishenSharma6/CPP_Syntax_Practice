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




    person1.IntroduceSelf();
    return 0;
}