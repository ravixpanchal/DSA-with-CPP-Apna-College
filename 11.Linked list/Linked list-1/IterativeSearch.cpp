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

    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return ;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    int searchKey(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;

        }
        return -1;
    }

    void reverse(){
        Node* curr=head;
        Node* prev=NULL;
        
        while(curr!=NULL){
           Node* next=curr->next;
           curr->next=prev;

              //updation for next itr
              prev=curr;
              curr=next;
        }
        head=prev;
    }
    
    int size(){
        int size=0;
        Node* temp=head;

        while(temp!=NULL){
            temp=temp->next;
            size++;

        }
        return size;
    }

    void removeNth(int n){
        int sizeOfLL=size();
        Node* prev=head;
        for(int i=1;i<(sizeOfLL-n);i++){
            prev=prev->next;

        }
        Node* todel=prev->next;
        cout<<"going to delete:"<<todel->data<<endl;
        prev->next=prev->next->next;


    }
    
   };

   int main (){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    // ll.reverse();
    ll.removeNth(3);
    ll.printList();

    // cout<<ll.searchKey(5)<<endl;
    

    // ll.insert(100,2);
    // ll.printList();






    return 0;
   }    
