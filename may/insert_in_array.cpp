#include <iostream>

using namespace std;

void print_array(int *a, int size)
{
    for(int i = 0; i < size; i++)

    {
        cout << a[i] << ", ";
    }
    cout << endl;
}

int insert_pos(int *array,int size,int pos,int ele)
{
    if(pos>size)
    {
        return size;
    }

    for(int i=size-1;i>=pos;i--)
    {
        array[i+1]=array[i];
    }
    array[pos]=ele;
    size++;
    return size;
}


//insert element after first appearence of a given element in the array
//insert_after(array, size, given, new_ele)
int main()
{
    int a[100]={1,5,45,76,22,8,34};
    int size=7;
    print_array(a,size);
    size=insert_pos(a,size,5,3);
    print_array(a,size);


    return 0;
}
