#include<bits/stdc++.h>
using namespace std;
#define Max 100

int parent[Max];
int rankParent[Max];

int initialization(int n)
{

    for(int i = 0; i<n ; i++)
    {
        parent[i] = i;
        rankParent[i] = 0;
    }

}

int findParent(int x)
{
    if( x != parent[x])
    {
        return parent[x] = findParent(parent[x]);
    }
    else
    {
        return x;
    }
}

void makeSet(int x, int y)
{
    int px = findParent(x);
    int py = findParent(y);

    if(px == py)
        return;

    if(rankParent[px] < rankParent[py])
    {
        parent[px] = py;
    }
    else if(rankParent[px] > rankParent[py])
    {
        parent[py] = px;
    }
    else
    {
        parent[py] = px;
        rankParent[px]++;
    }
}

void Printset(int n){
    for(int i = 0; i<n; i++){
        cout<<"Node is: "<<i<<"parent is: "<<parent[i]<<" "<<"rank is: "<<rankParent[i]<<endl;
    }
    cout<<endl;
}

int main(){
   int n;

   cin>>n;
   initialization(n);
   makeSet(0,1);
   makeSet(4,2);
   makeSet(3,1);
   makeSet(0,3);

   //makeSet(0,4);
   Printset(n);
   return 0;

}
