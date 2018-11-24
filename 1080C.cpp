
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

    unsigned long long n,i,j,k,x1,x2,y1,y2,tcell,whcell,blcell,t,m,rec1cell;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        tcell=m*n;

        if(tcell%2==1)
            whcell=tcell/2 +1;
        else whcell =tcell/2;

        blcell =tcell-whcell;



cin>>x1>>y1>>x2>>y2;

        rec1cell=(x2-x1+1)*(y2-y1+1);

        if(rec1cell%2==0)
        {
            whcell+=(rec1cell/2);
            blcell-=(rec1cell/2);
        }
        else
        {
            if((x1+y1)%2==0)
            {
                whcell+=(rec1cell/2);
                blcell-=(rec1cell/2);
            }
            else
            {
                whcell+=(rec1cell/2 + 1);
                blcell-=(rec1cell/2 + 1);
            }

        }
unsigned long long xx1=x1,xx2=x2,yy1=y1,yy2=y2;
cin>>x1>>y1>>x2>>y2;

        rec1cell=(x2-x1+1)*(y2-y1+1);

        if(rec1cell%2==0)
        {
            whcell-=(rec1cell/2);
            blcell+=(rec1cell/2);
        }
        else
        {
            if((x1+y1)%2==0)
            {
                whcell-=(rec1cell/2 +1);
                blcell+=(rec1cell/2 +1);
            }
            else
            {
                whcell-=(rec1cell/2);
                blcell+=(rec1cell/2);
            }

        }


   unsigned long long x=max(x1,xx1),y=max(y1,yy1),xx=min(x2,xx2),yy=min(y2,yy2);


        if( xx>=x && yy>=y )
        {
            tcell=(xx-x+1)*(yy-y+1);
            if(tcell%2==0) { whcell-=(tcell/2); blcell+=(tcell/2);
            }
            else
            {
                if((x+y)%2==1)
                   { whcell-=(tcell/2 +1); blcell+=(tcell/2 +1);
                   }
                else
                   { whcell-=(tcell/2); blcell+=(tcell/2);
                   }

            }

        }


cout<<whcell<<" "<<blcell<<endl;
    }

	return 0;
}

