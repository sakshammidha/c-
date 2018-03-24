#include<iostream>

using namespace std;

class Train
{
    int train number;
    char destination[20];
    float distance;
    float fuel;
    void calfuel();
    
public:
    void read();
    void display();

};

void Train::calfuel()
{
    if(dsistance<=1500)
    fuel=250;
    else if(distance>1500)&&(distance<=3000)
    fuel=1000;
    else
    fuel=2500;
}

void Train::read()
{
    cout<<"enter details"<<endl;
    cin>>train number;
    cin.getline(destination,20);
    cin>>distance;
    calfuel()

}

void Train::display()
{
    cout<<"the details are:"<<endl;
    cout<<"train number"<<endl;
    cout<<"destination"<<endl;
    cout<<"distance"<<endl;
    cout<<"fuel"<<endl;

}

void main()
{
    Train t;
    t.read();
    t.display();

return 0;
}
