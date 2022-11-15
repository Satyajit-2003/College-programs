#include<iostream>
#include<string.h>
using namespace std;

/*Implementing staring class*/

class String{
    char data[20];
    public:
    String(char dat[]){
        strcpy(this->data, dat);
    }String(){}
    void friend operator<<(ostream &o1, String &s1){
        o1<<s1.data<<endl;
    }
    String operator+(String &s1){
        String temp;
        strcpy(temp.data, this->data);
        strcat(temp.data, s1.data);
        return temp;
    }
    void operator=(String &s1){
        strcpy(data, s1.data);
    }
    int operator+=(String &s1){
        return strcmp(data, s1.data);
    }
    void length(){
        cout<<"Length: "<<strlen(data)<<endl;
    }
};

int main(){
    String s1("Hello "), s2("World");
    String s3 = s1 + s2;
    cout<<s3;
    s1 = s3;
    cout<<s1;
    int res = s1+=s2;
    cout<<res<<endl;
    s2.length();
    
}