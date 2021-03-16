#include<bits/stdc++.h>
using namespace std;
 long long a[10],i,l,sum=0;
    char s[100003];
int main()
{

    for(i=1;i<=4;i++)
    {
        cin>>a[i];
    }
        getchar();
    cin.getline(s,100003);
    l=strlen(s);
    sum=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
            sum=sum+a[1];
        else if(s[i]=='2')
            sum=sum+a[2];
        else if(s[i]=='3')
            sum=sum+a[3];
        else if(s[i]=='4')
            sum=sum+a[4];
    }
    cout<<sum<<endl;
    return 0;
}
