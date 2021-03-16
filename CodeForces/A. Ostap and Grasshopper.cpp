#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
int main()
{
    cin>>n>>k;
    cin>>s;
    int f=0,start,insect;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='G')
        {
            start=i;
        }
        if(s[i]=='T')
        {
            insect=i;
        }
    }
    //cout<<insect<<" "<<start<<endl;
    int i;
    if(insect<start)
    {
        for(i=start;i>=insect;i=i-k)
        {
            if(s[i]=='#')
            {
                f=1;
                break;
            }
        }
        //cout<<i+k<<endl;
        if(i+k==insect)
        {
            if(f==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else
    {
        for(i=start;i<=insect;i=i+k)
        {
            if(s[i]=='#')
            {
                f=1;
                break;
            }
        }
        //cout<<i-k<<endl;
        if(i-k==insect)
        {
            if(f==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
