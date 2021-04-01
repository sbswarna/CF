#include<bits/stdc++.h>
using namespace std;
int tst,n,a[4000005];
int freq[4000005];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        memset(freq,0,sizeof(freq));
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int total=0;
        int gold=freq[a[0]],silver=0,bronze=0,z,y,f;
        for(int i=1; i<n/2; i++)
        {
            if(a[i]==a[i+1])
            {
                silver++;
            }
            else
            {
                silver++;
                f=i;
                break;
            }
        }
        for(int i=f; i<n/2; i++)
        {
            if(a[i]==a[i+1])
            {
                bronze++;
            }
            else
            {
                bronze++;
                break;
            }
        }
        if(gold>0&&silver>0&&bronze>0)
            cout<<gold<<" "<<silver<<" "<<bronze<<endl;
        else
            cout<<"0 0 0"<<endl;
    }
    return 0;
}
