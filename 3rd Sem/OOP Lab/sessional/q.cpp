#include<iostream>
#include<string.h>
using namespace std;

//Overloding == += and > operator in strings without using string.h

class String{
    char data[20];
    public:
    String(char dat[]){
        int i=0;
        while(dat[i]!='\0'){
            data[i]=dat[i];
            i++;
        }
        data[i]='\0';
    }
    void operator+=(String &st){
        int index = 0, index2 = 0;
        char concatString[20];
        while(data[index] != '\0') {
             concatString[index] = data[index];
             index++;
        }
        index --;
        while(st.data[index2] != '\0') {
              index++;
              concatString[index] = st.data[index2];
              index2++;
        }
        for(int i = 0; i < index+1; i++) {
            data[i] = concatString[i];
        }
    }
    int operator==(String &st){
        int index = 0;
        while(data[index] != '\0') {
             if(data[index] != st.data[index])
                 return 0;
             index++;
        } return 1;
    }
    int operator>(String &st){
        int index = 0;
        while(data[index] != '\0') {
             if(data[index] > st.data[index])
                 return 1;
             index++;
        } return 0;
    }
    void display(){
        cout<<data<<endl;
    }
};

int main(){
    String str1("Hello ");
    String str2("World");
    String str3("World");
    str1 += str2;
    str1.display();

    int dat = (str2 == str3);
    cout<<dat<<endl;
    dat = (str1 == str2);
    cout<<dat<<endl;
    dat = (str1 > str2);
    cout<<dat<<endl;

    return 0;
}