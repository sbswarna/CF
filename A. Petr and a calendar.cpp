#include<bits/stdc++.h>
using namespace std;
int m,d;
int main()
{
    cin>>m>>d;
    int month[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int x=month[m]/7;
    int y=month[m]%7;
    if(y!=0)
    {
    if(y-(7-d+1)<=0)
        cout<<x+1<<endl;
    else
        cout<<x+2<<endl;
    }
    else
    {
        if(d==1)
        cout<<x<<endl;
    else
        cout<<x+1<<endl;
    }
    //main();
    return 0;
}
