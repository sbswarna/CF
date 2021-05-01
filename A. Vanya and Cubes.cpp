#include<bits/stdc++.h>
using namespace std;
int n;
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
	cin>>n;
	int i=1,sum=0;
	while(true)
	{
		int p=((i*(i+1))/2);
		if(sum+p<=n)
		{
			sum+=p;
			i++;
		}
		else
		{
			i--;
			break;
		}
	}
	cout<<i<<endl;
	return 0;
}