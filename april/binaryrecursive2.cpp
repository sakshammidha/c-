#include<iostream>

using namespace std;

int BinarySearch(int *array,int start,int end,int e)
{
    int mid;

    mid=(start+end)/2;
    if(array[mid]==e)
    {
        return mid;
    }
    if(start>end)
    {
        return -1;
    }
     if(array[mid]>e)
    {
        return BinarySearch(array,start,mid-1,e);
    }
     if(array[mid]<e)

        return BinarySearch(array,mid+1,end,e);
    }


int main()
{
    int a[]={1,6,9,78,89,122,345};
        cout<<BinarySearch(a,0,6,7)<<endl;
        return 0;

}
