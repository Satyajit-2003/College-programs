#include<iostream>
using namespace std;

class Student{
    int mark;
    char name[20];
    public:
    void get(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Mark: ";
        cin>>mark;
    }
    friend float average(Student *, int);
    friend int above_average(Student *,int, float);
    friend int below_average(Student *,int, float);
    friend void sort(Student *, int );
    friend void highest_name(Student *, int);
    friend void lowest_roll(Student *, int);
};

float average(Student* st_list, int n){
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += (st_list+i)->mark;
    return sum / n;
}

int above_average(Student* st_list, int n, float avg){
    int count = 0;
    for (int i = 0; i < n; i++){
        if ((st_list + i)->mark > avg)
            count ++;
    }
    return count;
}

int below_average(Student* st_list, int n, float avg){
    int count = 0;
    for (int i = 0; i < n; i++){
        if ((st_list + i)->mark < avg)
            count ++;
    }
    return count;
}

void sort(Student* st_list, int n){
    Student temp;
    for (int i = 0; i < n; i++){
        for (int j = 0;j < n-i-1; j++){
            if (st_list[j].mark > st_list[j+1].mark){
                temp = st_list[j];
                st_list[j] = st_list[j+1];
                st_list[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout<<st_list[i].name<<' '<<st_list[i].mark<<endl;
    cout<<"Highest scorer: "<<st_list[n-1].name<<endl;
    cout<<"Lowest mark: "<<st_list->mark<<endl;
}

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student st[n];
    for (int i = 0; i < n; i++)
        st[i].get();
    float avg = average(st, n);
    cout<<"Average Mark: "<<avg<<endl;
    cout<<"Num of students above average: "<<above_average(st, n, avg)<<endl;
    cout<<"Num of students below average: "<<below_average(st, n, avg)<<endl;
    sort(st, n);

    return 0;   

}