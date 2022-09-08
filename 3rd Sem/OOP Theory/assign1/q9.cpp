#include<iostream>
#include<string.h>
#define QUAN 5
using namespace std;

class Book{
    char title[20];
    char author[20];
    int price;
    int quantity;
    public:
    friend int buy_book(int, int);
    friend int check_if_available(char*);
    friend void calc_bill(int*, int*, int);
    friend void change_price(int, int);
    friend void change_quan(int, int);
    friend void show_details(Book);
};
Book book_list[QUAN];

int check_if_available(char* name){
    for (int i = 0; i < QUAN; i++){
        if  (! strcmp(name, book_list[i].title)){
            return i;
        }
    }
    return -1;
}

void show_details(Book b){
    cout<<"Name :" <<b.title<<endl;
    cout<<"Author: "<<b.author<<endl;
    cout<<"Quantity: "<<b.quantity<<endl;
    cout<<"Price: "<<b.quantity<<endl;
}

int buy_book(int index, int quantity){
    if (book_list[index].quantity < quantity)
        return 0;
    book_list[index].quantity -= quantity;
    return 1;
}

void calc_bill(int* book_index, int* quan_list, int buy_quan){
    int sub_total, total;
    cout<<endl<<"Sl no.\t\tName\t\tAuthor\t\tPrice\t\tQuantity\t\tTotal"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    for (int i = 0; i < buy_quan; i++)
    {
        if (quan_list[i]){
            sub_total = book_list[book_index[i]].price * quan_list[i];
            cout<<i+1<<"\t\t"<<book_list[book_index[i]].title<<"\t\t"<<book_list[book_index[i]].author<<"\t\t"<<book_list[book_index[i]].price<<"\t\t"<<quan_list[i]<<"\t\t\t"<<sub_total<<endl;
            total += sub_total;
        }
    }
    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                           Total: "<<total<<endl;

}

void change_price(int index, int new_price){
    book_list[index].price = new_price;
}

void change_quan(int index, int new_quan){
    book_list[index].quantity = new_quan;
}

int main(){
    int res;    
    while (1){
        cout<<"Enter your choice.\n1 : Create Bll\n2 : Update Quantity\n3 : Update Price"<<endl;
        cin>>res;
        switch (res)
        {
        case 1:
            char ans[20];
            int book_index[10], quan_list[10], buy_quan = 0, temp_index, temp_quan, temp_buy;
            while (1){
                cout<<"Enter Book Name: ";
                cin>>ans;
                temp_index = check_if_available(ans);
                if (temp_index != -1){
                    show_details(book_list[temp_index]);
                    cout<<"Enter Quantity: ";
                    cin>>temp_quan;
                    temp_buy = buy_book(temp_index, temp_quan);
                    if (! temp_buy){
                        cout<<"Stocks not available";
                        continue;
                    }
                    book_index[buy_quan] = temp_index;
                    quan_list[buy_quan] = temp_quan;
                    buy_quan++;
                }
                else
                    cout<<"No Matching book available"<<endl;

                cout<<"Wanna add more book: ";
                cin>>temp_quan;
                if (! temp_quan){
                    calc_bill(book_index, quan_list, buy_quan);
                    break;
                }

            }
            break;
        }
    }

    return 0;
}