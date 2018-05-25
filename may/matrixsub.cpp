#include <iostream>

using namespace std;
void matrix_sub(int a[10][10],int b[10][10],int c[10][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        c[i][j]=a[i][j]-b[i][j];
        }
    }
}
int main()
{

    return 0;
}
