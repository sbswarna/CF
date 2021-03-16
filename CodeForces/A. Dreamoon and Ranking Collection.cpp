#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        vector<int>v;
        int freq[103]={0};
        int n,x,a[103];
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        for(int i=1;i<=100;i++)
        {
            if(freq[i]==0)
                v.push_back(i);
        }
        if(x>v.size())
        {
            x-=v.size();
            cout<<100+x<<endl;
        }
        else
        {
            int f=0;
            sort(a,a+n);
            for(int i=0;i<n;i++)
            {
                if(a[i]>v[x-1])
                {
                    f=1;
                    cout<<a[i]<<endl;
                    break;
                }
            }
            if(f==0)
                cout<<v[x-1]<<endl;
        }
    }
    return 0;
}
