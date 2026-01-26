   #include<iostream>
   using namespace std;

   class Node{
        public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next=NULL;
    }
   
   };

    class List {//collection of nodes
    Node* head;
    Node* tail;

    public:
    List(){
        head=NULL;
        tail=NULL;
    }

    void push_back(int val){
        Node* newNode=new Node(val);//dynamic
        //Node * newNode(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data <<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";

    }
    
   };

   int main (){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.printList();
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();




    return 0;
   }    
