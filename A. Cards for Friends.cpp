#include<bits/stdc++.h>
using namespace std;
long long w,h,n,tst;
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
		cin>>w>>h>>n;
		int f=0;
		if(w%2==1&&h%2==1)
		{
			if(n==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			long long cnt=1;
			while(w>1&&w%2==0)
			{
				w=w/2;
				cnt=(cnt*2);
			}
			while(h>1&&h%2==0)
			{
				h=h/2;
				cnt=(cnt*2);
			}
			if(cnt>=n)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}