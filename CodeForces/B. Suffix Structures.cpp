#include<bits/stdc++.h>
using namespace std;
string s,t;
int main()
{
    cin>>s>>t;
    int k=0,f=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==t[k])
        {
            k++;
        }
        if(k==t.size())
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"automaton"<<endl;
    }
    else
    {
        int freqs[30]= {0},freqt[30]= {0};
        for(int i=0; i<s.size(); i++)
        {
            freqs[s[i]-'a']++;
        }
        for(int i=0; i<t.size(); i++)
        {
            freqt[t[i]-'a']++;
        }
        f=0;
        int cntt=0,cnts=0;
        for(int i=0; i<26; i++)
        {
            if(freqt[i]>0)
            {
                if(freqs[i]<freqt[i])
                {
                    f=1;
                    break;
                }
            }
        }
        for(int i=0;i<26;i++)
        {
            if(freqs[i]>freqt[i])
            {
                cnts++;
            }
        }
        if(f==0)
        {
            if(cnts>0)
                cout<<"both"<<endl;
            else
                cout<<"array"<<endl;
        }
        else
            cout<<"need tree"<<endl;
    }
    return 0;
}
