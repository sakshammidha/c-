#include<iostream>

using namespace std;

class Person
{

    int age;
    char name[20];

public:
    void get();
    void show();

};

class Student:public Person
{

    int rollno;
    float average;

public:
    void insert();
    void display();

};

class Gradstudent:public Student
{

    char subject[20];
    char working;

public:
    void enter();
    void displayDetails();

};

//function definitions
void Person::get()
{
    cout<<"enter details:"<<endl;
    cin.ignore();
    cout<<"enter name:";
    cin.getline(name,20);
    cout<<"enter age:";
    cin>>age;

}

void Person::show()
{

    cout<<" details are:"<<endl;
    cout<<"name:"<<name<<endl<<endl;
    cout<<"age:"<<age;

}

void Student::insert()
{
    cout<<"enter details:"<<endl;
    cout<<"enter rollno:";
    cin>>rollno;
    cout<<"enter average:"<<endl;
    cin>>average;

}

void Student::display()
{
cout<<"details are:"<<endl;
cout<<"rollno:"<<rollno<<endl;
cout<<"average:"<<average<<endl;

}

void Gradstudent::insert()
{

cin.ignore();
cout<<"enter details:"<<endl;
cout<<"enter subject:";
cin.getline(subject,20);
cout<<"enter working status:";
cin>>working;

}

void Gradstudent::displayDetails()
{
    cout<<"details are:"<<endl;
    cout<<"subject:"<<subject<<endl;
    cout<<"working:"<<working<<endl;

}



int main()
{



    return 0;

}
