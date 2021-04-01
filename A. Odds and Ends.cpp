#include<bits/stdc++.h>
using namespace std;
long long n,i,a[105];
vector<long long>pos;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            pos.push_back(i);
        }
    }
    if(a[0]%2==0||a[n-1]%2==0)
        cout<<"NO"<<endl;
    else
    {

    }
    pos.clear();
    main();
    return 0;
}
