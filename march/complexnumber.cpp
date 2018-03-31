#include <iostream>

using namespace std;

class complex
{

int real;
int imaginary;

public:

    complex()
    {
     real=40;
     imaginary=100;
}

    //parameterised constructors
    complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    //copy constructors
    void get(int r,int i)
{    real=r;
    imaginary=i;
}
    void display()
    {
        cout<<real<<"+i("<<imaginary<<")";
    }


};



 int main()
 {
     complex c;
     complex e,f(45,100);
     c.get(3,-57);
     c.display();
     f.display();
     e.display();

    return 0;
}
