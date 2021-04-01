#include<stdio.h>
#include<string.h>
int main()
{
    long long c=0,a[27],i,l;
    char s[107];
    scanf("%s",s);
    for(i=0;i<27;i++)
        a[i]=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            c++;
        }
    }
    if(c%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
