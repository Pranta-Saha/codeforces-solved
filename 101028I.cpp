#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{
        //ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


        int n,i,j,t,mid;
        cin>>t;
        while(t--)
        {
                int k;
                vector<int>vec;
                vector<int>::iterator it;
                cin>>n>>k;
                for(i=0;i<n;i++)
                {
                        cin>>j;
                        vec.push_back(j);
                }
                int lo=1,hi=ceil((double)j/(double)k),lastmid=5;

                while(lo<=hi)
                {
                        mid=(lo+hi+1)/2;
                        int kk=k;
                        it=vec.begin();
                        while(it!=vec.end())
                        {
                                kk--;
                                int tmp= *it + mid - 1;
                                it=upper_bound(it,vec.end(),tmp);
                                if(kk==0) break;
                        }
                        //it==vec.end() yes;

                        if(it!=vec.end()) lo=mid+1;
                        else
                        {
                                hi=mid-1;
                                lastmid=mid;
                        }

                }
                cout<<lastmid<<endl;

        }



	return 0;
}
