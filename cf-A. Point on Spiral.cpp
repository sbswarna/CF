#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,ans;
	while(scanf("%lld%lld",&x,&y)==2)
	{
		if(x==0&&y==1)
		{
			printf("2\n");
		}
		else
		{
			if(x>=0&&y<0)
			{
				ans=4*abs(y-0);
			}
			else if(x<0&&y<0)
			{
				ans=(4*abs(y-0))-1;
			}
			else if(x<0&&y>=0)
			{
				ans=(4*abs(y-0))-2;
			}
			else if(x>=0&&y>=0)
			{
				ans=(4*(abs(y-0)))-3;
			}
			if(ans<0)
			{
				ans=0;
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}
