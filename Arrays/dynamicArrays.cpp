#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printArray(vector<int> const &a){
    cout<< "Array elements are: ";
    for(int i=0; i < a.size(); i++)
    cout << a.at(i) << " ";

}

int main(){
    vector<int> dynArray (3);
    dynArray[0]= 15;
    dynArray[1]= 12;
    dynArray[2]= 1;

    cout << "The number of integers in the array is " << dynArray.size() <<endl;
    cout << "Would you like to add an integer to the array? Answer Yes or No " << endl;
    
    //Variable to store user response
    string response;
    cin >> response;

    while (response != " ") {
        if (response == "Yes"){
            cout << "Input new value ";
            int newValue;
            cin >> newValue;
            dynArray.push_back(newValue);
            response= " ";
        } else if (response =="No"){
            response= " ";
        } else{
            cout << "Input correct response";
            cout << "Would you like to add an integer to the array? Answer Yes or No" << endl;
            cin >> response;
        }
    }
    
    printArray(dynArray);

    return 0;
    


}