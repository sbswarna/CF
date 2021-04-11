#include<bits/stdc++.h>
using namespace std;
int tst,n,a[105];
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
	cin>>tst;

	while(tst--)
	{
		int in;
		int freq[105]={0};
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			freq[a[i]]++;
		}
		for(int i=0;i<=100;i++)
		{
			if(freq[i]==1)
			{
				in=i;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==in)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}