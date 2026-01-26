#include<iostream>
#include<queue>
#include<string>
using namespace std;


int main ()
{
    priority_queue<string,vector<string>,greater<string>>pq;   //min heap creation [descending order]
    
    // priority_queue<string>pq;//max heap creation


    pq.push("Ravi");
    pq.push("Vikas");
    pq.push("Vishal");
    pq.push("Abhinav");
    pq.push("Ajitesh");
    pq.push("Gagan");

    
    while(!pq.empty())
    {
      cout<<pq.top()<<" ";
      pq.pop();
    }
    


    return 0;
}