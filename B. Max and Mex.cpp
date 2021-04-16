#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100005],tst;
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
		cin>>n>>k;
		set<long long>st;
		long long mex=-1,mx=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mx=max(mx,a[i]);
			st.insert(a[i]);
		}
		set<long long>:: iterator it;
		long long x=*st.begin();
		for(it=st.begin();it!=st.end();it++)
		{
			long long y=*it;
			if(y-x>1)
			{
				mex=x+1;
				break;
			}
			x=y;
		}
		if(mex==-1)
			mex=mx+1;
		if(st.find(0)==st.end())
			mex=0;
		if(k==0)
			cout<<st.size()<<endl;
		else
		{
			long long p=mx+mex;
			//cout<<endl<<p<<endl;
			if(p%2==0)
				p=p/2;
			else
				p=(p/2)+1;
			//cout<<mex<<endl;
			//cout<<mx<<endl;
			if(p<mx)
			{
				if(st.find(p)==st.end())
					cout<<st.size()+1<<endl;
				else
					cout<<st.size()<<endl;
			}
			else
			{
				//cout<<p<<endl;
				if(st.find(p)!=st.end())
					cout<<st.size()<<endl;
				else
				{
					cout<<st.size()+k<<endl;
				}
			}
		}
	}
	return 0;
}