#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l,n;
    char s[100],t[100];
    cin>>l;
    getchar();
    for(i=0; i<l*2; i++)
    {
        gets(t);
    }
    cin>>n;
    getchar();
    for(i=1; i<=n; i++)
    {
        gets(s);
        if(s[0]=='k')
            cout<<"tui rajakar tui rajakar"<<endl;
        else if(s[1]=='u')
            cout<<"garo chakma bangali"<<endl;
        else if(s[1]=='o')
            cout<<"padma meghna jomuna"<<endl;
        else if(s[0]=='j')
            cout<<"agun jalo"<<endl;
    }
    return 0;
}
