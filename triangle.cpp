/*
Ibrahim Maashi
CS1233
*/

#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int num=8;
    if (argc>1)
    {
        num=stoi(argv[1]);
    }
    for (int i = 0; i < num; i++) 
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        } 
        cout << '\n';
    }
}
