#include <iostream>

using namespace std;

class Human{
public:
    string Name;
    int Age;
    int PocketMoney;

    void introduction(){
        cout<< "Howdy, my name is " << Name << " and I am "<< Age << " years old."<< endl;
    }

    void pocketChange(){
        cout<< "I presently have $" << PocketMoney << " on me." << endl;
    }

    void foundChange(float change){
        PocketMoney += change;
    }

    Human(){
        cout << "Human object created, don't forget to add attributes" << endl;
    }
    ~Human(){
        cout << "Object destroyed" << endl;
    }; // Destructor
};