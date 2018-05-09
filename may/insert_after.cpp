#include <iostream>

using namespace std;

insert_after(int *array,int size,int given,int ele)
{
    for(int i=0;i<size;i++)
    {
        if(array[i]==given)
        {
            int pos=i+1;
            break;
        }
    }
    int insert_pos(int *array,int size,int pos,int ele)
    {
        if(pos>size)
        {
            return size;
        }

        for(int j=size-1;j>=pos;j--)
        {
            array[i+1]=array[i];
        }
        array[pos]=ele;
        size++;
        return size;
    }

}
int main()
{

    return 0;
}
