#include<bits/stdc++.h>
using namespace std;
long long n,i,c=0,c1=0,c2=0,c3=0,c4=0,a[100004];
int main()
{
    c1=0;
    c2=0;
    c3=0;
    c4=0;
    c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            c1++;
        }
        else if(a[i]==2)
        {
            c2++;
        }
        else if(a[i]==4)
        {
            c4++;
        }
        else
        {
            c3++;
        }
    }
    //cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
    c=c4;
    c2=c2*2;
    c3=c3*3;
    if(c2>0)
    {
    if(c2%4==0)
    {
        c=c+(c2/4);
    }
    else if(c2%4==2)
    {
        c=c+1+(c2/4);
        c1=c1-2;
    }
    }
    if(c3>0)
    {
        long long p=c3/3;
        //cout<<p<<endl;
    c3=c3+p;
    //cout<<c3<<endl;
    c1=c1-p;
    if(c3%4==0)
    {
        c=c+(c3/4);
    }
    else
    {
        c=c+1+(c3/4);
    }
    }
    if(c1>0)
    {
        if(c1%4==0)
        {
            c=c+(c1/4);
        }
        else
        {
            c=c+1+(c1/4);
        }
    }
    //cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
    cout<<c<<endl;
    main();
    return 0;
}
