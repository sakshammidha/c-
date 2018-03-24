#include<iostream>

using namespace std;

class Train
{
    int trainnumber;
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


    if(distance<=1500)
    {
    cout<<"fuel required is:"<<250<<endl;
}
    else if
        ((distance>1500)&&(distance<=3000))
    {
    cout<<"fuel required is:"<<1000<<endl;
}
    else
    cout<<"fuel  required is:"<<1500<<endl;
}


void Train::read()
{
    cout<<"enter details:"<<endl;
    cout<<"enter train number:"<<endl;
    cin>>trainnumber;
    cin.ignore();
    cout<<"enter destination:"<<endl;
    cin.getline(destination,20);
    cout<<"enter distance:"<<endl;
    cin>>distance;
    calfuel();

}

void Train::display()
{
    cout<<"the details are:"<<endl;
    cout<<"train number is:"<<trainnumber<<endl;
    cout<<"destination is:"<<destination<<endl;
    cout<<"distance to be travelled is:"<<distance<<endl;
    calfuel();

}

int main()
{
    Train t;
    t.read();
    t.display();

return 0;
}
