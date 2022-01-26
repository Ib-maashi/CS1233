
#include <iostream>

using namespace std;

int main()
{
    int x=20;
    int max=0;
    for (int i=100;i<=200;i++)
    {
        int curr_max=1;
        int num=i;
        while (num!=1)
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
        if (curr_max>=max)
        {
            max=curr_max;
        }
    
    }
    cout<<max;

    return 0;
}
