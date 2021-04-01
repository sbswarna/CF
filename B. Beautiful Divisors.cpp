#include<bits/stdc++.h>
using namespace std;
priority_queue<int>divisor[100005];
int n;
void div()
{
    for(int i=1; i<=100000; i++)
    {
        for(int j=1; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                if(i/j==j)
                    divisor[i].push(j);
                else
                    divisor[i].push(j),divisor[i].push(i/j);
            }
        }
    }
}
int main()
{
    div();
    cin>>n;
    vector<int>v;
    while(!divisor[n].empty())
    {
        int x=divisor[n].top();
        int ans=x;
        divisor[n].pop();
        v.clear();
        int cnt=0,cnt0=0,cnt1=0;
        while(x>0)
        {
            int p=x%2;
            x=x/2;
            v.push_back(p);
        }
        if(v.size()>3)
        {
            for(int i=0; i<v.size()-1; i++)
            {
                if(v[i]==1)
                {
                    if(v[i+1]==1)
                        cnt1++;
                    else
                    {
                        cnt1++;
                        break;
                    }
                }
            }
            for(int i=0; i<v.size()-1; i++)
            {
                if(v[i]==0)
                {
                    if(v[i+1]==0)
                        cnt0++;
                    else
                    {
                        cnt0++;
                        break;
                    }
                }
            }
            if(v[v.size()-1]==0&&v[v.size()-2]==0)
                cnt0++;
            else if(v[v.size()-1]==1&&v[v.size()-2]==1)
                cnt1++;
            if(cnt0+cnt1==v.size())
            {
                if(cnt1-1==cnt0)
                {
                    cout<<ans<<endl;
                    break;
                }
            }
        }
        else
        {
            if(v.size()==1)
            {
                if(v[0]==1)
                {
                    cout<<ans<<endl;
                    break;
                }
            }
            else if(v.size()==3)
            {
                if(v[0]==1&&v[1]==1&&v[2]==0)
                {
                    cout<<ans<<endl;
                    break;
                }
                else if(v[0]==0&&v[1]==1&&v[2]==1)
                {
                    cout<<ans<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
