#include <iostream>

using namespace std;

int n = 0;
void climb(int a)
{
    /*==1)
    {
        n++;
        return;
    }*/
    int b=a-1,c=a-2;
    if(b==0)
        n++;
    else if(b>0)
        climb(b);
    if(c==0)
        n++;
    else if(c>0)
        climb(c);
}
int main()
{
    int cl=30;
    climb(cl);
    cout<<n;
    return 0;
}
