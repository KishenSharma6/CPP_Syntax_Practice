#include <iostream>
#include <list>
using namespace std;

class Youtube_Channel{
public:
    string Channel_Name;
    string Owner;
    int Subscriber_Count;
    list<string> Public_Videos;
public:
    Youtube_Channel(string channel, string owner, int subs, list<string> videos = {}){
        Channel_Name = channel;
        Owner = owner;
        Subscriber_Count = subs;
        Public_Videos= videos;
    }
    void about_channel(){
        cout <<"\nHi, my name is " << Owner << " and I am the owner of " << Channel_Name << "." << endl;
        cout << "I currently have " << Subscriber_Count << " subscribers on my channel." << endl;
        cout << "My most popular videos are:" <<endl;
        for (string video:Public_Videos){
            cout << video << endl;
        }
    }
    void add_subscriber(int num_subscribers){
        Subscriber_Count += num_subscribers;

    }
    void add_videos(list<string> vids){
        Public_Videos.merge(vids);
    }

};

class New_Channel:public Youtube_Channel{
    public:
    New_Channel(string channel, string owner,int subs, list<string> videos = {}):Youtube_Channel(channel, owner, subs, videos){
       
    }

};

int main(){
    Youtube_Channel channel1("Peter McKinnon", "Peter", 50, {"The Mountains Will Remember Me"});
    Youtube_Channel channel2("Joe Rogan Experience", "Joe", 40, {"Fight Companion", "Ep. 666: Duncan Trussel"});
    channel1.add_videos({"Angels and Airways Documentary"});
    channel1.add_subscriber(100);
    channel1.about_channel();
    channel2.about_channel();  

    New_Channel channel3("JomaTech", "Joma", 4000, {"Every Tech CEO Ever", "Why I left Data Science"});     
    channel3.about_channel();
    return 0;
}