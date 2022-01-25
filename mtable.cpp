/*
Ibrahim Maashi
CS1233
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[])
{
    char op='x';
    if (argc>3)
    {
        op=argv[3][0];
    }
    int row=stoi(argv[1]);
    int col=stoi(argv[2]);
    cout <<" "<<op<<"|";
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
    for (int i=1;i<=row;i++)
    {
        cout << setw(2)<<right<<i<<"|";
        for (int j=1;j<=col;j++)
        {
            switch (op)
            {
            case 'x':
                cout << setw(4)<<right<<(i * j);
                break;
            
            case '-':

                cout << setw(4)<<right<<(i - j);
                break;
            
            case '+':
            
                cout << setw(4)<<right<<(i + j);
                break;
            
            case '/':
            
                cout << setw(4)<<right<< (i / j);
                break;
            
            case '%':
            
                cout << setw(4)<<right<<(i % j);
                break;
            
            case '|':
            
                cout << setw(4)<<right<<(i | j);
                break;
            
            case '^':
            
                cout << setw(4)<<right<<(i ^ j);
                break;
            
            case '&':
            
                cout << setw(4)<<right<<(i & j);
                break;
            }
            
        }
        cout<<"\n";
            
    }
}