#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n;
    string s;
    cin>>n;
    if(n%2==0)
    {
    for(i=1; i; i++)
    {
        if(i>n/2)
            break;
        else
        {
            if(i%2==1)
            {
                cout<<"aa";
            }
            else
            {
                cout<<"bb";
            }
        }
    }
    }
    else
    {
        int f;
        for(i=1;i<=(n-1)/2;i++)
        {
            if(i%2==1)
            {
                cout<<"aa";
                f=1;
            }
            else
            {
                cout<<"bb";
                f=2;
            }
        }
        if(f==1)
        {
            cout<<"b";
        }
        else
        {
            cout<<"a";
        }
    }
    cout<<endl;
    main();
    return 0;
}
