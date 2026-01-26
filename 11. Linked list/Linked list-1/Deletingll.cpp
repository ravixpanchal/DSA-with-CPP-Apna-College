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

    ~Node(){
        cout<<"destructor of list\n";
        if(next!=NULL){
            delete next;
            next=NULL;
        }
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

    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }

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

    void insert(int val,int pos){
        Node* newNode=new Node(val);

        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Position is INVALID";
                return;
            }
            temp=temp->next;

        }

        //temp is now at pos-1 eg. prev/left
        newNode->next=temp->next;
        temp->next=newNode;

    }
    
   };

   int main (){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    // ll.printList();
    ll.push_back(4);
    ll.push_back(5);
    

    ll.insert(100,2);
    ll.printList();






    return 0;
   }    
