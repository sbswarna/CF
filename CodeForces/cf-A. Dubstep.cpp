#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,l,p,c;
    char s[220];
    cin.getline(s,220);
    l=strlen(s);
    c=0;
    for(i=0;i<l;i=i+p)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(i!=0&&c==0&&i+2!=l-1)
            printf(" ");
            p=3;
            c++;
        }
        else
        {
            printf("%c",s[i]);
            p=1;
            c=0;
        }
    }
    printf("\n");
    return 0;
}
