#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a[109],b[109],i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
        cin>>m;
    for(i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    //cout<<a[0]<<" "<<b[0];
    long long cnt=0,l,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            //cout<<a[i]<<" "<<b[j]<<endl;
            if(b[j]!=0&&a[i]!=0)
            {
                l=abs(a[i]-b[j]);
                //cout<<l<<endl;
                if(l==0||l==1)
                {
                    cnt++;
                    b[j]=0;
                    a[i]=0;
                }
            }
        }
    }
    cout<<cnt<<endl;
    main();
    return 0;
}
