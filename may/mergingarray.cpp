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


void merge(int *a, int a_size, int *b, int b_size, int *c, int c_size)
{
  int i;  //array a index
  int j;  //array b index
  int k;  //array c index

  i = j = k = 0;  //chain initialisation

  //compare elements from a and b
  //assign required value
  //change the index of the respective array

  while(i < a_size && j < b_size)
  {
    if(a[i] <= b[j])
    {
      c[k] = a[i];
      i++;
    }
    else
    {
      c[k] = b[j];
      j++;
    }
    k++;
  }

  //when array b is finished
  //insert all elements of a
  while(j >= b_size && i < a_size)
  {
    c[k] = a[i];
    i++;
    k++;
  }

  //when array a is finished
  //insert all elements of b
  while(j < b_size && i >= a_size)
  {
    c[k] = b[j];
    j++;
    k++;
  }
}


int main()
{
    int a[]={1,45,67,76,89,99};
    int b[]={12,42,67,78,98,99};
    int c[12];

    int a_size=6;
    int b_size=6;
    int c_size=a_size+b_size;

    merge(a,a_size,b,b_size,c,c_size);

    print_array(a,a_size);
    print_array(b,b_size);
    print_array(c,c_size);


     return 0;
}
