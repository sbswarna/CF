#include<bits/stdc++.h>
#define mx 10000001
#define ll long long
using namespace std;
long long n,q,k,l,r;
map<long long,long long>arr;
struct info {
    ll prop, sum;
} tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].sum = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = max(tree[Left].sum,tree[Right].sum);
}

void update(int node, int b, int e, int i, int j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum +=x;
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = max(tree[Left].sum+tree[node].prop,tree[Right].sum+tree[node].prop);
}

ll query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum;

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);

    return max(p1,p2);
}

int main()
{
    cin>>n>>q;
    for(long long i=0;i<n;i++)
        arr[i]=0;
    init(1,1,n);
    for(int i=1;i<=q;i++)
    {
        cin>>l>>r>>k;
        update(1,1,n,l,r,k);
    }
    cout<<query(1,1,n,1,n)<<endl;
    return 0;
}
