#include<iostream>

using namespace std;
struct workTime
{
    int arrivalTime;
    int departureTime;
};

class Employee
{
    int eno;
    char name[20];
    float salary;
    Time worktime;
public:
    void get_details();
    void show_details();
};

void promotedemployee(Employee *);

void Employee::get_details()
{
    cout<<"enter details"<<endl;
    cin>>eno;
    cin.ignore();
    cin.getline(name,20);
    cin>>salary;
    cin>>workTime.arrivalTime;
    cin>>workTime.departureTime;
}

void Employee::show_details()
{
    cout<<"employee no:"<<eno<<endl;
    cout<<"enter name:"<<name<<endl;
    cout<<"enter salary:"<<salary<<endl;
    cout<<"work time:"<<workTime.arrivalTime<<workTime.departureTime;

}

void promotedemployee(Employee *employee,int size)
{
    for(int i=0;i<size;i++)
    {
    if(salary[i]<100000)

}
