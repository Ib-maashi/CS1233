/*
Ibrahim Maashi
CS1233
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[])
{
    int row=stoi(argv[1]);
    int col=stoi(argv[2]);
    for (int i=0;i<=row;i++)
    {
        if (i==0)
        {
            cout << " X|";
            for (int j=1;j<=col;j++)
            {
                cout << setw(4)<<right<<j;
            }
            cout<<"\n";
            for (int j=0;j<=col*5+3;j++)
            {
                cout <<"-";
            }
            cout<<"\n";
            continue;
        }
        cout << setw(2)<<right<<i<<"|";
        for (int j=1;j<=col;j++)
        {
            cout << setw(4)<<right<<i*j;
        }
        cout<<"\n";
            
    }
}