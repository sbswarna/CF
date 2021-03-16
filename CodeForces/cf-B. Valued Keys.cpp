#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,l;
    char s[102],t[102],u[102],v[102];
    cin.getline(s,102);
    cin.getline(t,102);
    memset(u,'\0',sizeof(u));
    memset(v,'\0',sizeof(v));
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]<t[i])
        {
            u[i]=s[i];
        }
        else if(s[i]>t[i])
        {
            u[i]=t[i];
        }
        else
        {
            u[i]='z';
        }
    }
    for(i=0; i<l; i++)
    {
        if(u[i]<s[i])
        {
            v[i]=u[i];
        }
        else if(u[i]>s[i])
        {
            v[i]=s[i];
        }
        else
        {
            v[i]=u[i];
        }
    }
    //cout<<u<<endl;
    //cout<<v<<endl;
    if(strcmp(v,t)==0)
    {
        cout<<u<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    main();
    return 0;
}
