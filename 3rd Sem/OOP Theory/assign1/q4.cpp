#include<iostream>
using namespace std;

class Date{
    int day, month, year;
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int no_of_days(){
        int days = 0;
        days += year*365;
        days += day;
        for (int i = 0; i < month; i++){
            days += month_days[i];
        }
        int leap = (year/4) - (year/100) + (year/400);
        days += leap;

        return days;
    }
    public:
    friend Date subtract(Date, Date);
    void get(){
        cout<<"Day: ";
        cin>>day;
        cout<<"Month: ";
        cin>>month;
        cout<<"Year: ";
        cin>>year;
    }

    void display(){
        cout<<year<<"Years, "<<month<<" Months, "<<day<<" Days";
    }
};

Date subtract(Date d1, Date d2){
    int sub_date = d1.no_of_days() - d2.no_of_days();
    if (sub_date < 0)
        sub_date = -sub_date;
    d1.year = sub_date / 365;
    sub_date %= 365;
    d1.month = sub_date / 30;
    sub_date %= 30;
    d1.day = sub_date;
    return d1;
}

int main(){
    Date d1, d2;
    cout<<"Enter your birsth date"<<endl;
    d1.get();
    cout<<"Enter any other date"<<endl;
    d2.get();
    cout<<"Difference is: ";
    subtract(d1, d2).display();

    return 0;
}
