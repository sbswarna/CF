#include<bits/stdc++.h>
using namespace std;
string s;
int l;
int main()
{
    cin>>l;
    cin>>s;
    string t=s;
    string r=s;
    int cntt=0,cntr=0,cnt=0;
    for(int i=0;i<s.size()-1;i+=2)
    {
        if(s[i]=='a')
            cntt++;
        else
            cntr++;
        if(s[i+1]=='a')
            cntt++;
        else
            cntr++;
        if(cntt!=cntr)
        {
            if(cntt>cntr)
                s[i]='b';
            else
                s[i]='a';
            cnt++;
        }
    }
    cout<<cnt<<endl;
    cout<<s<<endl;
       // main();
    return 0;
}
