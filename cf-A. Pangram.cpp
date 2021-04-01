#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[30],i,n,f;
    char s[110];
    memset(a,0,sizeof(a));
    cin>>n;
    getchar();
    cin.getline(s,110);
    f=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            a[s[i]-'A']++;
        }
        else
        {
            a[s[i]-'a']++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    main();
    return 0;
}
