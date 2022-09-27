#include <iostream>
using namespace std;

class Test{
	int * p;
	public:
	Test(int *k){
		p = new int(*k);
	}
	Test(){
		p = new int(1);
	}

	void Show(){
		cout<<*p;
	}
};

int main(){
	static int i;
	Test t1, t2(&i);
	t1.Show();
	t2.Show();
	
	return 0;
}
