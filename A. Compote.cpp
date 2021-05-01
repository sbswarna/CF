#include<bits/stdc++.h>
using namespace std;
int a,b,c;
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
	cin>>a>>b>>c;
	int pears=c/4;
	int apple=pears*2;
	int lemon=pears;
	if(a-lemon>=0&&b-apple>=0&&c-(pears*4)>=0)
	{
		pears=4*pears;
	}
	else
	{
		if(a-lemon<0)
		{
			lemon=a;
			apple=lemon*2;
			if(b-apple<0)
			{
				apple=b;
				if(apple%2==1)
					apple--;
				lemon=apple/2;
			}
			pears=lemon*4;
		}
		else if(b-apple<0)
		{
			apple=b;
			if(apple%2==1)
				apple--;
			lemon=apple/2;
			pears=lemon*4;
		}
	}
	cout<<pears+apple+lemon<<endl;
	return 0;
}