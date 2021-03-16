#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,p,q,i,c;
	cin>>a>>b;
	c=0;
	for(i=1;i;i++)
	{
		p=a%b;
		q=a/b;
		c=c+q;
		a=b;
		b=p;
		if(p==0)
		{
			break;
		}
	}
	cout<<c<<endl;
	return 0;
}
