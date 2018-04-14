#include<iostream>

using namespace std;

int divide(int a,int b)
{

    if(a%b==0)
    {
        return 1;
    }
    else
    return 0;
}

int divide(int a)
{

    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }

    return 1;

}

int main()
{
int x,y;
cout<<"enter two numbers"<<endl;
cin>>x>>y;
cout<<divide(x)<<endl;
cout<<divide (x,y)<<endl;

}
