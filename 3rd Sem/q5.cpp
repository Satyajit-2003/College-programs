#include <iostream>
#include<fstream>
#include<cctype>
using namespace std;

void show_reverse(ifstream &fin){
	if (! fin)
		return;
	char out[30];
	fin>>out;
	show_reverse(fin);
	cout<<out<<endl;	
}

int main(){
	int chars = 0, words = 1, lines = 1;
	int upper = 0, lower = 0, special = 0;
	ifstream fin("a.txt");
	char c;

	while (fin){
		fin.get(c);

		if (isupper(c)){
			chars ++;
			upper++;
		}else if(islower(c)){
			chars ++;
			lower++;
		}else if (c == ' '){
			words ++;
		}else if((int)c == 10){
			lines ++;
			words++;
		}else{
			special ++;
		}
	}

	cout<<"Characters: "<<chars<<endl;
	cout<<"Words: "<<words<<endl;
	cout<<"Lines: "<<lines<<endl;
	cout<<"Uppercase: "<<upper<<endl;
	cout<<"Lowercase: "<<lower<<endl;
	cout<<"Special characters: "<<special<<endl;

	
	return 0;
}