/*
Ibrahim Maash
CS1233
*/

#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    
    if (argc==2)
    {
        
        for (int i = 0; i < stoi(argv[1]); i++) 
        {
            for (int j = 0; j <= i; j++)
            {
                cout << '*';
            } 
            cout << '\n';
        }
    }
    else
    {
        for (int i = 0; i < 8; i++) 
        {
            for (int j = 0; j <= i; j++)
            {
                cout << '*';
            } 
            cout << '\n';
        }
    }
    
    
}