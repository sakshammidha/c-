#include<iostream>
#include<string.h>

using namespace std;

class RESORT
{

    int Rno;
    char name[20];
    float charges;
    int days;

    float COMPUTE();

public:
    RESORT();
    RESORT(int,char *,float,int);
    RESORT(RESORT &);
    void Getinfo();
    void Dispinfo();

};






void RESORT::Getinfo()
{

    cout<<"enter details:"<<endl;
    cout<<"enter room no:";
    cin>>Rno;
    cout<<"enter name:";
    cin.ignore();
    cin.getline(name,20);
    cout<<"enter charges:";
    cin>>charges;
    cout<<"enter days:";
    cin>>days;
}

void RESORT::Dispinfo()
{

    cout<<"details are:"<<endl;
    cout<<"room no is:";
    cout<<Rno<<endl;
    cout<<"name is:";
    cout<<name<<endl;
    cout<<"charges are:";
    cout<<charges<<endl;
    cout<<"days are:";
    cout<<days<<endl;
    cout<<"Amount is:"<<COMPUTE()<<endl;

}

float RESORT::COMPUTE()
{

    float Amount=charges*days;
    if(Amount>11000)
    {
        Amount=1.02*charges*days;
        return(Amount);
    }
}

RESORT::RESORT()
{

Rno=0;
strcpy(name,"undefined");
charges=0.0;
days=0;

}

RESORT::RESORT(int rollno,char * naam,float paise,int din)
{

    Rno=rollno;
    strcpy(name,naam);
    charges=paise;
    days=din;
}

RESORT::RESORT(RESORT &resort)
{
Rno=resort.Rno;
strcpy(name,resort.name);
charges=resort.charges;
days=resort.days;

}

int main()

{
    RESORT r,s;
    r.Getinfo();
    r.Dispinfo();
    s.Dispinfo();

}
