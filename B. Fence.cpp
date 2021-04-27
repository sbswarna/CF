#include<bits/stdc++.h>
using namespace std;
int n,k,a[200005];
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main(int argc, char const *argv[])
{
	F();
	cin>>n>>k;
	int mnsum=0,cursum=0,s=0,e=k-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i<=k-1)
		{
			cursum+=a[i];
		}
	}
	mnsum=cursum;
	for(int i=k;i<n;i++)
  	{
   		cursum+=a[i]-a[i-k];
    	if(cursum<mnsum)
    	{
      		mnsum=cursum;
      		s=i-k+1; 
     		e=i; 
     	}
    } 
    cout<<s+1<<endl;
	return 0;
}