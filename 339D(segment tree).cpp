#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int arr[200005];
vector<int>tree(800005,0);

void build(int at,int L, int R, bool job)
{
    if(L==R) { tree[at]=arr[L]; return;}

    int mid=(L+R)/2;

    build(at*2,L,mid,job^1);
    build(at*2+1,mid+1,R,job^1);

    if(job==0) tree[at]=tree[at*2]|tree[at*2+1];
    else tree[at]=tree[at*2]^tree[at*2+1];
    //cout<<at<<endl;
}

void update(int at,int L,int R,int pos,int valu, int job)
{
    if(pos<L||R<pos) return;
    if(L==R) {tree[at]=valu; return ;}

    int mid=(L+R)/2;
    update(at*2,L,mid,pos,valu,job^1);
    update(at*2+1,mid+1,R,pos,valu,job^1);

    if(job==0) tree[at]=tree[at*2]|tree[(at*2)+1];
    else tree[at]=tree[at*2]^tree[(at*2)+1];

}


int main()
{
    int n,i,j,m,p,b;
    cin>>n>>m;
    int len=pow(2,n);
    for(i=1;i<=len;i++) cin>>arr[i];

    build(1,1,len,(n%2==0));


    while(m--)
    {
        cin>>p>>b;
        update(1,1,len,p,b,(n%2==0));
        cout<<tree[1]<<endl;
    }
	return 0;
}
