#include<iostream>

using namespace std;

void print_array(int *a, int size)
{
    for(int i = 0; i < size; i++)

    {
        cout << a[i] << ", ";
    }
    cout << endl;
}

int delete_pos(int *array,int size,int pos)
{
    for(int i=pos; i<size; i++)
    {
        array[i]=array[i+1];
    }
    return --size;
}

int delete_ele(int *array,int size,int e)
{
    int pos;
    for(int i=0;i<size;i++)
    {
        if(array[i]==e)
        {
            size = delete_pos(array, size, i);
        }
    }
        return size;
}

int main()
{
    int a[]={2,5,6,7,23,5};
    int size = 6;
    print_array(a, size);
    size = delete_ele(a,6,5);
    print_array(a, size);
    return 0;
}
