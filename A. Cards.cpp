#include<bits/stdc++.h>
using namespace std;
int freq[30],n;
string s;
int main()
{
    memset(freq,0,sizeof(freq));
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
       freq[s[i]-'a']++;
    }
    int one=min(freq['o'-'a'],min(freq['n'-'a'],freq['e'-'a']));
    freq['o'-'a']=freq['o'-'a']-one;
    freq['n'-'a']=freq['n'-'a']-one;
    freq['n'-'a']=freq['n'-'a']-one;
    int zero=min(min(freq['z'-'a'],freq['e'-'a']),min(freq['r'-'a'],freq['o'-'a']));
    for(int i=1;i<=one;i++)
    {
        cout<<1;
        if(i!=one)
            cout<<" ";
        else
        {
            if(zero>0)
                cout<<" ";
            else
                cout<<endl;
        }
    }
    for(int i=1;i<=zero;i++)
    {
        cout<<0;
        if(i!=zero)
            cout<<" ";
        else
            cout<<endl;
    }
    return 0;
}
