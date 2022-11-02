#include<iostream>
#include<string.h>
using namespace std;

/*Implementing staring class*/

class String{
    char data[20];
    public:
    String(char dat[]){
        data = dat;
    }String(){
        //Noting
    }
    String operator+(String &s1){
        String temp;
        // temp.data = data + s1.data;
        temp.data[0] = strcat(data, s1.data);
        return temp;
    }
    // friend void operator<<()
};

int main(){
    String s1("Hello "), s2("World");
    String s3 = s1 + s2;
    
}