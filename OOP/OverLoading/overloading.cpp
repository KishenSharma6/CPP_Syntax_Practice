#include <iostream>
#include <list>
#include <math.h>
using namespace std;

class Person{
public:
    string Name; 
    list<string> Hobbies;

    void about_me() {
        cout << "My name is " << Name <<endl;
        cout << "My hobbies include:" <<endl;
        for (string hobby:Hobbies){
            cout<<hobby <<endl;
        }
    }
   
    void about_me(int age){
        cout << "My name is " << Name << " and I am " << age << endl;
        cout<< "My hobbies are:"<<endl;
        for(string hobby: Hobbies){
            cout<<hobby<<endl;
    }
    }
    void about_me(string bmi_class){
        cout << "My name is " << Name << " and I am " << bmi_class << endl;
    }

    void about_me(float kg, float meters){
        float bmi;
        bmi= kg/pow(meters, 2);
        if (bmi >= 30){
            about_me("obese");
        } else if (bmi <30 & bmi >= 25){
            about_me("overweight");
        } else if (bmi < 25 & bmi >= 18.5){
            about_me("healthy");
        } else{
            about_me("underweight");
        }
    }
 
    Person(string name, list<string> hobby) {
        Name= name;
        Hobbies= hobby;
    }

};

int main() {
    Person person1("Max", {"Running", "Swimming"});
    person1.about_me(23);
    person1.about_me(85, 2);


}
