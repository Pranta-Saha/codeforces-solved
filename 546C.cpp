#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,tmp;

    cin>>n;

    queue<int>player1, player2;

    int k1;
    cin>>k1;

    while(k1--)
    {
        cin>>tmp;
        player1.push(tmp);
    }
    int k2;
    cin>>k2;

    while(k2--)
    {
        cin>>tmp;
        player2.push(tmp);
    }

    int frightcnt=0;

    while(!player1.empty() && !player2.empty() )
    {
        frightcnt++;

        if(player1.front()<player2.front())
        {
            player2.push(player1.front());
            player1.pop();

            player2.push(player2.front());
            player2.pop();
        }
        else
        {
            player1.push(player2.front());
            player2.pop();

            player1.push(player1.front());
            player1.pop();
        }


        if(frightcnt>100000)
        {
            cout<<-1;
            return 0;
        }

    }

    cout<<frightcnt<<" ";

    if(player1.empty())
        cout<<2;
    else
        cout<<1;

    return 0;
}
