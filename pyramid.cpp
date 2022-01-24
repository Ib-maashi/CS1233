/*
Ibrahim Maash
CS1233
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[])
{
    int num=5;
    if (argc > 1)
    {
        num=stoi(argv[1]);
    }
    for (int i=0;i<num;i++)
    {

        cout << setw(num-i)<< right; //adds the spaces without using a for loop
        for (int j=0;j<i*2+1;j++)
        {
            cout << "*";
        }
        cout << "\n";

        
    }   
}