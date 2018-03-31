#include<iostream>

using namespace std;

class student
{

    int rollno;
    char name[20];
    float marks[5];

    char grade();


public:
    void get_data();
    void show_data();
};

char student::grade()
{
float sum = 0.0,average;

    for(int i=0;i<5;i++)
    {
     sum+=marks[i];
     average=sum/5.0;


    }
    if(average<=30)
    {
        return 'F';
    }
    else if(average<=50)
    {
        return 'E';
    }
    else if(average<=60)
    {
        return 'D';
    }
    else if(average<=70)
    {
        return 'C';
    }
    else if(average<=80)
    {
        return 'B';
    }
    else if(average<=90)
    {
        return 'A';
    }
    else if(average<=100)
    {
        return 'O';
    }
    else
    return '0';

}

void student::get_data()
{

    cout<<"enter details :\n";
cin>>rollno;
cin.ignore();
cin.getline(name,20);
cout<<"enter marks of 5 subjects\n";
for(int i=0;i<5;i++)
{
cin>>marks[i];
}
}

void student::show_data()
{

    cout<<"enter all details\n ";
    cout<<rollno<<endl;
    cout<<name<<endl;
    cout<<"enter marks of 5 subjects\n";
    for(int i=0;i<5;i++)
    {
    cout<<marks[i]<<endl;
    }
    cout<<grade()<<endl;
}

int main()
{
    student s;
    s.get_data();
    s.show_data();
}
