#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,a;
    vector<long long>v;
    v.push_back(0);
    for(i=1;i<pow(10,9);i++)
    {
        n=log10(i)+1;
        v.push_back(n+v[i-1]);
    }
    cin>>a;
    cout<<v[a]<<endl;
    main();
    return 0;
}
