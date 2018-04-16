#include<iostream>

using namespace std;

class Base
{
    int a,b;

    public:
        void get();
        void show();

};

class Derived
{
    int c,d;

    public:
        //void insert();
        //void display();

        void fun()
        {
            cout<<"jai mata di:"<<endl;
        }

    };

    void Base::get()
    {
        cout<<"Base get function called:"<<endl;
        cin>>a>>b;
    }


    void Base::show()
    {
        cout<<"Base show function called:"<<endl;
        cout<<a<<b;
    }


    // void Derived::insert()
    //  {
    //     cout<<"Derived insert function called:"<<endl;
    //     cin>>c>>d;
    //
    // }
    //
    //
    // void Derived::display()
    // {
    //     cout<<"Derived display function called:"<<endl;
    //     cout<<c<<d;
    //
    // }


int main()
{





return 0;
}
