#include<iostream>
##include <string>

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
//default constructor
 Employee()
{

    eno=0;
    strcpy(name,"undefined");
    salary=0.0;
    workTime.arrivalTime=0;
    workTime.departureTime=0;

}
//parameterised constructor
Employee(int num,char * naam,float sal,int arrival,int departure )
{

    eno=num;
    strcpy(name,naam);
    salary=sal;
    workTime.arrivalTime=arrival;
    workTime.departureTime=departure;


}
//copy constructor
Employee(Employee &employee)
{

    eno=employee.eno;
    strcpy(name,employee.name)
    salary=employee.salary;
    workTime.arrivalTime=employee.workTime.arrivalTime;
    workTime.departureTime=employee.workTime.departureTime;

}
//destructor
~Employee()
{

    cout<<"destructor for employee"<<eno<<"called:"<<endl;
}

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
