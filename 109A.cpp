#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

vector<int>vec;
bool brr[1000009];
int fun(int n)
{
        if(n==0) return 1;
        if(brr[n]) return -1;
        //cout<<n<<" ";
        if(n<4) {if(n>0) brr[n]=1; return -1;}
        int tmp=0;

        if(n>=7)
                tmp=fun(n-7);
        if(tmp==1)
        {
                vec.push_back(7);
                return 1;
        }
        tmp=fun(n-4);
        if(tmp==1)
        {
                vec.push_back(4);
                return 1;
        }
        if(n>0) brr[n]=1;
        return -1;
}

int main()
{

        int n,i,j;
        cin>>n;
        i=fun(n);
        sort(vec.begin(),vec.end());
        if(i==-1) cout<<i;
        else
        {
                j=vec.size();
                for(i=0;i<j;i++)
                        cout<<vec[i];
        }


	return 0;
}
