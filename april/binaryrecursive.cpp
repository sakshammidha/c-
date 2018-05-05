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

     if(array[mid]<e)
    {
        return BinarySearch(array,start,mid-1,e);
    }
     if(array[mid]>e)
    {
        return BinarySearch(array,mid+1,end,e);
    }
}

int main()
{
    int a[]={1,3,5,7,9,11,13,15,17};
        cout<<BinarySearch(a,1,17,6)<<endl;
        return 0;

}
