#include<iostream>
using namespace std;

class Product{
    char code[10], name[20];
    int price, quantity;
    public:
    void get_details(){
        cout<<"Enter code: ";
        cin>>code;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter price: ";
        cin>>price;        
        cout<<"Enter Quantity: ";
        cin>>quantity;
    }
    int get_price(){
        return price*quantity;
    }
    void display_details(int i){
        cout<<i<<"\t\t"<<code<<"\t\t"<<name<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t\t"<<get_price()<<endl;
    }
};

int main(){
    int n, sum = 0;
    cout<<"Enter number of products: ";
    cin>>n;
    Product prod[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter details for prouct "<<i+1<<endl;
        prod[i].get_details();
        cout<<endl;
    }

    cout<<"Sl no.\t\tCode\t\tName\t\tPrice\t\tQuantity\t\tTotal"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        prod[i].display_details(i+1);
        sum += prod[i].get_price();
    }
    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                           Total: "<<sum<<endl;

    
}