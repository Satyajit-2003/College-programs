#include<iostream>
using namespace std;

class player{
    int num, score;
    char name[20];
    public:
    friend void operator>>(istream &in, player &p1){
        cout<<"Enter player number: ";
        in>>p1.num;
        cout<<"Enter player name: ";
        in>>p1.name;
        cout<<"Enter player score: ";
        in>>p1.score;
    }
    friend void operator<<(ostream &out, player &p1){
        out<<"Player number: "<<p1.num<<endl;
        out<<"Player name: "<<p1.name<<endl;
        out<<"Score: "<<p1.score<<endl;
    }
};

int main(){
    player p;
    cin>>p;
    cout<<p;

    return 0;
}