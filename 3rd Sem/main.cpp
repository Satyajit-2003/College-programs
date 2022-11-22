#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char ch;
    ifstream fin("a.txt");
    ofstream fout("b.txt");
    while (fin){
        fin.get(ch);
        fout<<ch;
    }
    fin.close();
    fout.close();

    return 0;
}