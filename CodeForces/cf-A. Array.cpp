#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[310],neg,pos,i,zro;
    cin>>n;
    neg=0;
    pos=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
            neg++;
        else if(a[i]>0)
            pos++;
    }
    zro=n-neg-pos;
    printf("neg=%lld\n",neg);
    printf("pos=%lld\n",pos);
    main();
    return 0;
}
