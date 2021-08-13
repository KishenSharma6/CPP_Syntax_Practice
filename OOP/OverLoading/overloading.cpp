#include <iostream>
#include <list>
#include <math.h>
using namespace std;

class Person{
public:
    string Name; 
    list<string> hobbies;

    void about_me() {
        cout << "My name is " << Name <<endl;
        cout << "My hobbies include:" <<endl;
        for (string hobby:hobbies){
            cout<<hobby <<endl;
        }
    }

    void about_me(int age){
        cout << "My name is " << Name << " and I am " << age << endl;
    }

    void about_me(float kg, float meters){
        float bmi;
        bmi= kg/pow(meters, 2);
        if (bmi >)
    }
 
    Person(string name, list<string> hobby) {
        Name= name;
        hobbies= hobby;
    }

};

int main() {
    Person person1("Max", {"Running", "Swimming"});
    person1.about_me(23);


}
