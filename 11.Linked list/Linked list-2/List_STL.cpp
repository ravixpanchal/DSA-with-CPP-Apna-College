#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int>ll){
     list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;

}

int main(){

    list<int>ll;//just like vector

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    printList(ll);
    cout<<ll.size()<<endl;
    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;

    ll.pop_front();
    printList(ll);

    
    

  

    return 0;
}
 