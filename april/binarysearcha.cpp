#include <iostream>

using namespace std;

int BinarySearch(int *a,int n,int e)
{
    int mid;
    int high,low;
    high=n - 1;low=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==e)
        return mid;
        else if(a[mid]>e)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}

int main()
{
    int b[] = {1,4,5,6,7,8,9,32,123,784};
    cout<<BinarySearch(b, 10, 32)<<endl;
    return 0;
}
