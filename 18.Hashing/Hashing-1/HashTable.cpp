#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
    string key;
    int val;
    Node* next;

    Node(string key,int val)
    {
        this->key=key;
        this->val=val;
        next=NULL;
    }

};

class HashTable{
    int totalSize;
    int currSize;
    Node** table;

    public:
    HashTable(int size=5){
        totalSize=size;
        currSize=0;


        table=new Node*[totalSize];

        for(int i=0;i<totalSize;i++)
        {
            table[i]=NULL;
        }
    }

    int hashFunction(string key)
    {
        int idx=0;

        for(int i=0;i<key.size();i++)
        {
            idx=idx+(key[i]*key[i])%totalSize;
        }
        return idx;
    }

    void rehashing(){
        Node** oldTable=table;
        int oldSize=totalSize;

        totalSize=2*totalSize;
        table=new Node* [totalSize];
        for(int i=0;i<totalSize;i++)
        {
            table[i]=NULL;
        }
    }

    void insert(string key,int val){
         int idx=hashFunction(key);

         Node* newNode=new Node(key,val);
         Node* head=table[idx];

         newNode->next=head;
         head=newNode;

         currSize++;

         double lambda=currSize/totalSize;
         if(lambda>1)
         {
            rehashing();
         }
    }

    void remove(int key)
    {

    }

    void search(string key)
    {
         
    }
};

int main(){
HashTable ht;




    return 0;
}