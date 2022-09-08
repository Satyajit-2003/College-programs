#include<iostream>
#include<string.h>
using namespace std;

//Adding 2 strings using dynamic constrctor

class xyz{
    char *str;
    int length;
    public:
    xyz(){
        length = 0;
    }
    xyz (char* ptr){
        length = strlen(ptr);
        str = new char[length +1];
        strcpy(str, ptr);
    }

    void concat(xyz &x1, xyz &x2){
        length = x1.length + x2.length;
        str = new char[length];
        strcpy(str, x1.str);
        strcat(str, " ");
        strcat(str, x2.str);
    }

    void display(){
        cout<<str;
    }
};

int main(){
    xyz res;
    char x[]="hello";
    char y[]="world";
    xyz x1(x);
    xyz x2(y);
    res.concat(x1,x2);
    res.display();
}