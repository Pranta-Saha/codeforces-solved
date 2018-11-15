#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,sum=0,j,mid,arr[200005],indx,lftsum=0,r8sum;
    stack<long long>stklft,stkr8;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    mid=sum/2;

    for(i=0;i<n;i++)
    {
        lftsum+=arr[i];
        if(lftsum>mid)
        {
            lftsum-=arr[i];
            break;
        }
        else
            stklft.push(arr[i]);
    }
    for(j=n-1;j>=i;j--)
        stkr8.push(arr[j]);

    r8sum=sum-lftsum;

    while(lftsum!=r8sum)
    {
        if(lftsum>r8sum)
        {
            lftsum-=stklft.top();
            stklft.pop();
        } else
        {
            r8sum-=stkr8.top();
            stkr8.pop();
        }

    }

    cout<<lftsum<<endl;
	return 0;
}



//int main()
//{
////freopen("in.txt","r",stdin);
//    ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	cerr.tie(nullptr);
//
//
//    long long n,i,j=0,ans=INT_MIN;
//    set<long long > st;
//
//    cin>>n;
//    vector<long long >vec(n);
//
//
//    for(i=0;i<n;i++)
//    {
//        cin>>vec[i];
//        j+=vec[i];
//        st.insert(j);
//    }
//
//    long long tmp=0;
//
//    for(i=n-1;i>=0;i--)
//    {
//        st.erase(j);
//        tmp+=vec[i];
//        j-=vec[i];
//        if(st.find(tmp)!=st.end())
//        {
//            ans=max(ans,tmp);
//        }
//    }
//
//    cout<<ans;
//
//	return 0;
//}



