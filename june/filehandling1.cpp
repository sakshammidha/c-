#include <fstream>
#include<iostream>

using namespace std;

int main()
{
    int s;
    cin>>s;
    ofstream fout;
    fout.open("test.txt",ios::out);
    fout<<s;
    fout.close();
    ifstream fin;
    fin.open("test.txt",ios::in);
    int out;
    fin>>out;
    cout<<out;
    fin.close();

    return 0;
}
