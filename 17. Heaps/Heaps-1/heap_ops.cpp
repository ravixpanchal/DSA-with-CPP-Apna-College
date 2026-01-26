#include<iostream>
#include<vector>
using namespace std;

class Heap
{

vector<int>vec;
public:

  //void push

  void push(int val)
  {
     //step1 : insert the val
     vec.push_back(val);

     //step2 : fix heap
    
     int x=vec.size()-1;//child index
     int parI=(x-1)/2;


     while(parI>=0 && vec[x]>vec[parI])  //T.C: log(n)
     {
        swap(vec[x],vec[parI]);
        x=parI; //update the child Index
        parI=(x-1)/2;
     }

  }


  //heapify function


  void heapify(int i)  // i=parI
  {
    if(i>=vec.size())
    {
        return;
    }

    int l=2*i+1;
    int r=2*i+2;

   int maxIdx= i;

   if(l<vec.size() && vec[l]>vec[maxIdx]){
    maxIdx=l;
   }

   if(r<vec.size() && vec[r]>vec[maxIdx]){
    maxIdx=r;
   }

   swap(vec[i],vec[maxIdx]);

   if(maxIdx!=i)
   {
    heapify(maxIdx);
   }

  }

  //void pop

  void pop()
  {
   //step1: swaping
   swap(vec[0],vec[vec.size()-1]);

   //step2 : delete this last index elemenet
   vec.pop_back();

   //step 3: heapify function
   heapify(0);  //O(logn)
  }

  //void top


  int top()
  {
     return vec[0]; //highest priority element
  }

  bool empty()
  {
    return vec.size()==0;
  }

};

int main ()
{

Heap heap;
heap.push(50);
heap.push(10);
heap.push(100);
heap.push(200);

cout<<"Top: "<<heap.top()<<endl;
heap.pop();
cout<<"Top: "<<heap.top()<<endl;


    return 0;
}