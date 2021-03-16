#include<bits/stdc++.h>
using namespace std;
int tst,n;
map<string,int>mp1,mp;
string s[100];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            mp[s[i]]++;
        }
        int cnt=0,x=0;
        string t[100];
        for(int i=0; i<n; i++)
        {
            if(mp1.find(s[i])==mp1.end())
            {
                t[x++]=s[i];
                mp1[s[i]]=1;
            }
            else
            {
                cnt++;
                string temp=s[i];
                int h=0,f=0;
                while(h<4)
                {
                    for(int k=0; k<=9; k++)
                    {
                        temp[h]=k+'0';
                        if(mp1.find(temp)==mp1.end()&&mp.find(temp)==mp.end())
                        {
                            t[x++]=temp;
                            mp1[temp]++;
                            mp[temp]++;
                            f=1;
                            break;
                        }
                    }
                    temp=s[i];
                    h++;
                    if(f==1)
                        break;
                }
            }
        }
        cout<<cnt<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<t[i]<<endl;
        }
        mp1.clear();
        mp.clear();
    }
    return 0;
}
