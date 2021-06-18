#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printArray(vector<int> const &a){
    cout<< "Array elements are: ";
    for(int i=0; i < )
https://www.tutorialspoint.com/how-to-print-out-the-contents-of-a-vector-in-cplusplus
}

int main(){
    vector<int> dynArray (3);
    dynArray[0]= 15;
    dynArray[1]= 12;
    dynArray[2]= 1;

    cout << "The number of integers in the array is " << dynArray.size() <<endl;
    cout << "Would you like to make modifications? Answer Yes or No" << endl;
    
    //Variable to store user response
    string response;
    cin >> response;

    if (response == 'Yes')
    
    return 0;
    


}