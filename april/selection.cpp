#include<iostream>

using namespace std;

void selectionSort(int *, int);
void printArray(int *, int);
//calculate the median
float median(int *, int);

void selectionSort(int * array,int size)
{
    int min,temp;

    for(int i=0;i<size;i++)
    {
        printArray(array, size);
        cout << endl;
        min=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

void printArray(int *a, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << ", ";
    }

}

int main()
{

    int a[] = {5, 0, 7, 9, 8, 2, 4, 1};

    cout << "Median of the data is : " << median(a, 8) << endl;

    return 0;
}

float median(int * array, int size)
{
    //your code
    selectionSort(array,size);
    if(size%2==0)
    {
        size--;
        return (array[size/2]+array[(size/2)+1]) / 2.0;
    }
    else
    return (float)(array[(size)/2]);

}
