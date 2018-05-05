#include<iostream>

using namespace std;

void printArray(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;
}

void bubbleSort(int *a,int n)
{
    int temp;
    for(int pass=1;pass<=n-1;pass++)
    {
        for(int j=0;j<n-pass;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[]={0,2,6,8,2,8,7};
    bubbleSort(a,7);
    printArray(a, 7);
    cout<<endl;

    return 0;
}
