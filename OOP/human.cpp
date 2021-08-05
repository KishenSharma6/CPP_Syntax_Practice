#include <iostream>
#include <list>
using namespace std;

class Human {
 public: //Be sure to set permissions to access this class   
    // Member attributes
    string Name;
    string Occupation;
    string Company;
    list <string> ProgrammingLanguages;   

    // Member functions
    void IntroduceSelf(){
        cout << "Hello, my name is " << Name << "." << endl;
        cout << "I am a " << Occupation << " at " << Company << endl;
        cout << "The programming languages I use are:" << endl;}
        
    Human(string name, string occupation, string company, list <string> languages){ //build constructor
        Name= name;
        Occupation= occupation;
        Company= company;
        ProgrammingLanguages= languages;

    }
};

int main() {
    Human person1("Adam", "Manager", "Google", {"Python", "SQL", "C++"});
    Human person2("Michelle", "SWE", "Apple", {"Java", "C++",  "Swift"});

    person1.IntroduceSelf();
    for (string language: person1.ProgrammingLanguages){
            cout << language << endl;
        }
    person2.IntroduceSelf();
    for (string language: person2.ProgrammingLanguages){
            cout << language << endl;
        }
    return 0;
}