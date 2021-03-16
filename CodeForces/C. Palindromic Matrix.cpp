#include<bits/stdc++.h>
using namespace std;
long long a[500],n,freq[1002],matrix[500];
void makematrix(long long frequ[],long long x)
{
    memset(matrix,0,sizeof(matrix));
    if(x%2==0)
    {
        int p=1,j=1,k=n;
        for(int i=0; i<=1001; i++)
        {
            if(frequ[i]>0)
            {
                while(frequ[i]>0)
                {
                    if(matrix[j]==0&&matrix[n-j+1]==0&&matrix[(n*n)-j+1]==0&&matrix[(n*n)-n+j]==0)
                    {
                        matrix[j]=i;
                        matrix[k]=i;

                        j++;
                        k--;
                    }
                    else
                    {
                        j++;
                        k--;
                    }
                }
            }
        }
        for(int i=1; i<=n*n; i++)
        {
            cout<<matrix[i]<<" ";
            if(i%n==0)
                cout<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    cin>>n;
    memset(freq,0,sizeof(freq));
    for(int i=0; i<n*n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<a[0]<<endl;
    }
    else if(n==2)
    {
        if(freq[a[0]]!=4)
            cout<<"NO"<<endl;
    }
    else
    {
        int f=0,cnt1=0,cnt2=0,cnt3=0;
        for(int i=0; i<=1001; i++)
        {
            if(freq[i]>0)
            {
                if(n%2==0)
                {
                    //cout<<freq[i]<<endl;
                    if(freq[i]%4!=0)
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(freq[i]==1)
                    {
                        cnt1++;
                    }
                    if(freq[i]%2==1)
                    {
                        cnt2++;
                    }
                }
            }
        }
        //cout<<f<<endl;
        int f1=0;
        if(f==1||cnt1>1||cnt2>1)
        {
            f1=1;
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        if(f==0)
        {
            makematrix(freq,n);
        }
    }
    return 0;
}
