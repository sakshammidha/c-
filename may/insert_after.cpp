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
    if(pos>size || pos == -1)
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


insert_after(int *array,int size,int given,int ele)
{
    int pos = -1;
    for(int i=0;i<size;i++)
    {
        if(array[i]==given)
        {
            pos=i+1;
            break;
        }
    }
    size=insert_pos(array, size, pos, ele);
    return size;

}
int main()
{
    int a[100]={2,4,56,12,7,87};
    int size=6;
    print_array(a,size);
    size=insert_after(a,size,56,37);
    print_array(a,size);



    return 0;
}
