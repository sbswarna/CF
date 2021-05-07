#include<bits/stdc++.h>
using namespace std;
int tst,n,a[105][105];
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
		cin>>n;
		if(n<=4)
		{
			if(n==1)
				cout<<1<<endl;
			else if(n==2)
				cout<<-1<<endl;
			else if(n==3)
			{

				cout<<"2 9 7\n4 6 3\n1 8 5\n";
			}
			else
			{
				cout<<"1 5 8 15\n10 2 6 9\n13 11 3 7\n16 14 12 4\n";
			}
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
				a[i][i]=i;
			}
			int cnt=n,p=n+1,k=2,i=1,j=2;
			while(cnt<=(n*n)-2-n)
			{
				//cout<<i<<" "<<j<<endl;
				if(j<=n)
				{
					a[i][j]=p;
					p=p+1;
					i++,j++;
				}
				else
				{
					i=1,j=k+1;
					k++;
				}
				cnt++;
			}
			a[1][n]=(n*n)-1;
			cnt=n,k=2,i=2,j=1,p--;
			while(cnt<=(n*n)-2-n)
			{
				//cout<<i<<" "<<j<<endl;
				if(i<=n)
				{
					a[i][j]=p++;
					i++,j++;
				}
				else
				{
					j=1,i=k+1;
					k++;
				}
				cnt++;
			}
			a[n][1]=(n*n);
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
}