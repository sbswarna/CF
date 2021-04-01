#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int w=a.size()-2;
    int x=b.size()-2;
    int y=c.size()-2;
    int z=d.size()-2;
    int f=0;
    char ans;
    if(w<=x/2&&w<=y/2&&w<=z/2)
    {
        f++;
        ans='A';
    }
    if(x<=w/2&&x<=y/2&&x<=z/2)
    {
        f++;
        ans='B';
    }
    if(y<=w/2&&y<=x/2&&y<=z/2)
    {
        f++;
        ans='C';
    }
    if(z<=w/2&&z<=y/2&&z<=x/2)
    {
        f++;
        ans='D';
    }
    if(f==1)
    {
        if(w>=x*2&&w>=y*2&&w>=z*2)
        {
            f++;
            ans='A';
        }
        else if(x>=w*2&&x>=y*2&&x>=z*2)
        {
            f++;
            ans='B';
        }
        else if(y>=w*2&&y>=x*2&&y>=z*2)
        {
            f++;
            ans='C';
        }
        else if(z>=w*2&&z>=y*2&&z>=x*2)
        {
            f++;
            ans='D';
        }
        if(f==1)
        cout<<ans<<endl;
        else
            cout<<"C"<<endl;
    }
    else if(f==0)
    {
        if(w>=x*2&&w>=y*2&&w>=z*2)
        {
            f++;
            ans='A';
        }
        else if(x>=w*2&&x>=y*2&&x>=z*2)
        {
            f++;
            ans='B';
        }
        else if(y>=w*2&&y>=x*2&&y>=z*2)
        {
            f++;
            ans='C';
        }
        else if(z>=w*2&&z>=y*2&&z>=x*2)
        {
            f++;
            ans='D';
        }
        if(f==1)
        cout<<ans<<endl;
        else
            cout<<"C"<<endl;
    }
    else
        cout<<"C"<<endl;
    //main();
    return 0;
}
