#include <fstream>
#include<iostream>

using namespace std;

int main()
{
    // char s[50];
    // cin.getline(s,50);
    // ofstream fout;
    // fout.open("test2.txt",ios::out);
    // fout<<s;
    // fout.close();
    ifstream fin;
    fin.open("test2.txt",ios::in);
    char out[50];
    fin.getline(out,50);
    cout<<out;
    fin.close();

    return 0;
}
