#include<iostream>

using namespace std;

int delete_ele(int *array,int size,int pos)
{
    for(int i=pos; i<size; i++)
    {
        array[i]=array[i+1];
    }
    return --size;
}

int main()
{
    int a[]={2,4,6,76,89};
    cout<<delete_ele(a,5,3)<<endl;

    return 0;
}
