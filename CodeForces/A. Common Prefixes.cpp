#include<bits/stdc++.h>
using namespace std;
int tst,a[105],mx,p,n;
string s,t,x;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        mx=-1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        p=0;
        for(int i=0; i<mx; i++)
        {
            if(p>25)
                p=0;
            s.push_back(p+'a');
            p++;
        }
        if(mx==0)
        {
            p=0;
            for(int i=0; i<198; i++)
            {
                if(p>25)
                    p=0;
                s.push_back(p+'a');
                p++;
            }
        }
        cout<<s<<endl;
        x=s;
        p=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]>0)
            {
                for(int j=0; j<a[i]; j++)
                {
                    t.push_back(x[j]);
                }
                if(i<n-1)
                {
                    if(a[i+1]>a[i])
                    {
                        for(int j=a[i]; j<a[i+1]; j++)
                        {
                            int y=0;
                            if(j<x.size())
                                y=x[j]-'a'+1;
                            else
                                y=y+1;
                            if(y>25)
                            {
                                y=0;
                            }
                            t.push_back(y+'a');
                        }
                    }
                }
            }
            else
            {
                if(p>25)
                    p=p-25;
                t.push_back(p+'a');
                t+=s;
                p++;
            }
            cout<<t<<endl;
            x=t;
            t.clear();
        }
        s.clear();
    }
    return 0;
}
