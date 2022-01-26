/*
Ibrahim Maashi
CS1233
*/

#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
    int min=1;
    int max;
    int longest_seq=0;
    if (argc==1)
    {
        cout << "usage: collatz [min] max"; //no arguemnts message
        return 0;

    }
    else if (argc==2)//if no min was entred
    {
        max=stoi(argv[1]);
    }
    else //if both max and min were enterd
    {
        min=stoi(argv[1]);
        max=stoi(argv[2]);
    }
    for (int i=min;i<=max;i++)
    {
        int curr_max=1;
        int num=i;
        while (num!=1) //loop unitl the seq ends with a 1
        {
            if (num%2==0)
            {
                num = num / 2;
            }
            else
            {
                num=(3 * num)+ 1;
            }
            curr_max+=1;
        }
        if (curr_max>=longest_seq)//check if a longer seq was found
        {
            longest_seq=curr_max;
        }
    }
    cout<<"Maximum Collatz Sequence length between "<<min<< " and " << 20 <<" is "<<longest_seq<<".";
}
