#include<bits/stdc++.h>
using namespace std;
int tst,n,a[105];
int main()
{
    cin>>tst;
    while(tst--)
    {
        int freq[105]={0},mx=-1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           freq[a[i]]++;
           mx=max(freq[a[i]],mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
