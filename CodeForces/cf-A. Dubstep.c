#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,l,p;
    char s[1000];
    cin.getline(s,1000);
    l=strlen(s);
    for(i=0;i<l;i=i+p)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            p=3;
            s[i]='w';
            s[i+1]='w';
            s[i+2]='w';
        }
        else
        {
            p=1;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    main();
    return 0;
}
