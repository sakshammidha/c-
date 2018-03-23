#include <iostream>

using namespace std;

class complex
{

int real;
int imaginary;

public:

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
     c.get(3,-57);
     c.display();

    return 0;
}
