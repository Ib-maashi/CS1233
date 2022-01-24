/*
Ibrahim Maashi
CS1233
*/
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
   if (argc==1)
   {
       cout << "usage: bargraph integer-list\n";
   }
   else
   {
       for (int i=1;i<argc;i++)
       {
           cout <<setw(3)<< argv[i] << " |";
           for (int j=1;j<=stoi(argv[i]);j++)
           {
               cout <<"#";
           }
           cout <<"\n";
       }
   }
}
