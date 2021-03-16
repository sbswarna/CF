#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,p,r,ans,i;

cin>>n;
p=log(n)/log(2);
printf("%lld\n",p);
if(pow(2,p)==n)
{
	printf("1\n");
}
else
{
	ans=pow(2,p+1)-n;
	printf("%lld\n",1+p);
}
main();
	return 0;

}
