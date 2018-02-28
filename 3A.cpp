#include<bits/stdc++.h>
using namespace std;
#define chk(r,c) ((r>=0&&r<=7) && (c>=0&&c<=7))

struct node
{
    int x;
    int y;
};

int rx[8]={1,1,1,0,0,-1,-1,-1};
int cy[8]={0,1,-1,1,-1,0,1,-1};
string step[8]={"U","RU","LU","R","L","D","RD","LD"};

int sx,sy,tx,ty;
bool visit[8][8];
int dist[8][8];
node parent[8][8];
int parentStep[8][8];
queue<node>que;
stack<int> stk;

void BFS()
{
//        cout<<sx<<" "<<sy<<endl;
//                cout<<tx<<" "<<ty<<endl;


    visit[sx][sy]=1;
    node a;
    a.x=sx; a.y=sy;

    que.push(a);

    while(!que.empty())
    {
        node f=que.front();
        que.pop();

        for(int i=0;i<=7;i++)
        {
            int childx=f.x+rx[i];
            int childy=f.y+cy[i];

            if(visit[childx][childy]==0)
            {
                if(chk(childx,childy))
                {
                    visit[childx][childy]=1;
                    dist[childx][childy]=dist[f.x][f.y]+1;
                    node tmp,tmpchild;
                    
                    parent[childx][childy]=f;

                    tmpchild.x=childx; tmpchild.y=childy;
                    que.push(tmpchild);
                    parentStep[childx][childy]=i;

                    //cout<<childx<<childy<<"-"<<step[i]<<endl;

                }
            }
        }
    }

    cout<<dist[tx][ty]<<endl;


    int len=dist[tx][ty];

//    for(int i=len;i>0;i--)
//    {
//        stk.push(parentStep[tx][ty]);
//        tx=parent[tx][ty].x;
//        ty=parent[tx][ty].y;
//    }


    for(int i=1;i<=len;i++)
    {
        stk.push(parentStep[tx][ty]);
        tx=parent[tx][ty].x;
        ty=parent[tx][ty].y;
    }

    while(!stk.empty())
    {
        cout<<step[stk.top()]<<endl;
        stk.pop();
    }




}



int main()
{
    char ssx,ssy,ttx,tty;
    cin>>ssx>>ssy>>ttx>>tty;

    sy=ssx-'a';
    sx=ssy-'1';
    ty=ttx-'a';
    tx=tty-'1';

    BFS();




}
