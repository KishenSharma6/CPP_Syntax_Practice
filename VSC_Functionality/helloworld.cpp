#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector <string> msg {"Hello", "there!", "Isn't", "this", "a", "fun", "Hello", "World", "variation?"};
    for(string word:msg){
        cout << word <<" ";
    }
    cout << endl;
    return 0;

}