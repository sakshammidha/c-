#include<iostream>

using namespace std;

class Book
{

    int bookno;
    char booktitle[20];
    float price;

    float Totalcost(int);

public:
    void input();
    void purchase();
};

float Book::Totalcost(int N)
{

    float x;
    x=price*N;
    return x;

}

void Book::input()
{

    cout<<"enter book no"<<endl;
    cin>>bookno;
    cin.ignore();
    cout<<"enter book title"<<endl;
    cin.getline(booktitle,20);
    cout<<"enter price"<<endl;
    cin>>price;

}

void Book::purchase()
{

    nt y;
    float g;
    cout<<"enter the no of copies"<<endl;
    cin>>y;
    g=Totalcost(y);
    cout<<"cost of copies is"<<g<<endl;

}

int main()
{

    Book b;

    b.input();
    b.purchase();

    return(0);
}
