#include <iostream>
#include <list>
using namespace std;

class Youtube_Channel{
public:
    string Channel_Name;
    string Owner;
    int Subscriber_Count;

    void about_channel(){
        cout <<"Hi, my name is " << Owner << " and I am the owner of " << Channel_Name << "." << endl;
        cout << "I currently have " << Subscriber_Count << " subscribers on my channel.";
    }

    Youtube_Channel(string channel, string owner, int subs){
        Channel_Name = channel;
        Owner = owner;
        Subscriber_Count = subs;
    }

}

int main(){
    
    return 0;
}