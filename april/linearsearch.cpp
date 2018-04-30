#include<iostream>

using namespace std;

int linearSearch(int *array,int n,int e)
{
    for(int i=0;i<n;i++)
    {
        if (array[i]==e)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int a[] = {4, 6, 5, 7, 8, 2, 1, 3, 2, 4, 6, 8, 4};

    cout << linearSearch(a, 13, 2) << endl;


}
