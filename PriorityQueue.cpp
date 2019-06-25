#include<bits/stdc++.h>
#include<queue>

using namespace std;

//sorting descending order queue
void showpq(priority_queue <int> pq)
{
    priority_queue <int> p = pq;

    while(!p.empty()){
        cout<<'\t'<<p.top();
        p.pop();
    }
    cout<<'\n';
}

int main(){
   priority_queue <int> pq;

   pq.push(10);
   pq.push(30);
   pq.push(20);
   pq.push(5);
   pq.push(1);

   cout<<"The priority Queue pq is: ";
   showpq(pq);
   cout<<endl;
   cout<<"size of queue: "<<pq.size()<<endl;
   cout<<"top element: "<<pq.top()<<endl;
   cout<<"delete top element: ";
   pq.pop();
   showpq(pq);

   return 0;
}
