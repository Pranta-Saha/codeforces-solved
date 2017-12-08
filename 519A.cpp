#include<bits/stdc++.h>
using namespace std;
#define Q 9
#define R 5
#define B 3
#define N 3
#define P 1

#define q 9
#define r 5
#define b 3
#define n 3
#define p 1

int main(){
    int white=0,black=0;
    char tmp;
    for(int i=0;i<64;i++){
        cin>>tmp;

        if(tmp=='Q') white+= Q;
        else if(tmp=='R') white+= R;
        else if(tmp=='B') white+= B;
        else if(tmp=='N') white+= N;
        else if(tmp=='P') white+= P;

        else if(tmp=='q') black+= q;
        else if(tmp=='r') black+= r;
        else if(tmp=='b') black+= b;
        else if(tmp=='n') black+= n;
        else if(tmp=='p') black+= p;

    }


    if(white>black) cout<<"White";
    else if(white<black) cout<<"Black";
    else cout<<"Draw";
}
