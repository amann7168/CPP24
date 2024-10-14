#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* back;

     node(int data1, node* next1, node* back1)
        : data(data1), next(next1), back(back1) {}

     node(int data1)
        : data(data1), next(nullptr), back(nullptr) {}
};

 node* converttoDLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    node* head = new node(arr[0], nullptr, nullptr);
    node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

 void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

 node* deletehead(node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    node* newHead = head->next;
    if (newHead != nullptr) {
        newHead->back = nullptr;
    }
    delete head;
    return newHead;
}

 node* deletetail(node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    node* newTail = tail->back;
    newTail->next = nullptr;
    delete tail;

    return head;
}

  
  
  node *removekthelement(node *head,int k){
  	if(head==nullptr){
  		return nullptr;
  		 
  	}
  	
  	int cnt =0;
  	 node *temp =head;
  	 while(temp!=nullptr){
  	 	cnt ++;
  	 	if(cnt == k) break;
  	 	 temp=temp->next; 
  	 }
  	 
  	 node * prev=temp->back;
  	 node *front=temp->next;
  	  
  	 if (prev==nullptr && front==nullptr){
  	 	return NULL; 
  	 }
  	 
  	 else if (prev==nullptr){
  	 	return deletehead(head);
  	 }
  	 else if (front==nullptr){
  	 	return deletetail(head);
  	 }
  	 
  	 prev->next=front;
  	 front ->back=prev;
  	 
  	 temp->next=nullptr;
  	 temp->back=nullptr;
  	 
  	 delete temp;
  	 
  	 return head;
  	  
  	     
  }
  
  
  void deletenode (node *temp ){
  	node * prev=temp->back;
  	node *front =temp->next;
  	
  	if(front==nullptr){
  		prev->next=nullptr;
  		temp->back=nullptr;
  		delete temp;
  		return;
  	}
  	
  	
  	prev->next=front;
  	front->back=prev;
  	temp->next=temp->back=nullptr;
  	
  	delete temp;
  	
  	
  }      
  
  node* insertbeforehead(node *head,int val){
  	node *newhead= new node(val,head,nullptr);
  	head->back=newhead;
  	
  	return newhead;
  	
  	  }
  	  
  	  
  	  
  node * insertbeforetail(node *head , int val){
  	if(head->next==nullptr){
  		return insertbeforehead(head,val); 
  	}
  	node * tail=head;
  	while(tail->next!=nullptr){
  		tail=tail->next;
  	}
  	node *prev=tail->back; 
  	node *newtail=new node (val,tail,prev);
  	
  	prev->next=newtail;
  	
  	tail->back=newtail;
  	
  	return head;
   	
  	 
  	
  }
  
  node * insertbeforekthelement(node *head,int val,int k){
  	if (k==1){
  		return insertbeforehead(head,val);
  	}
  	int cnt=0;
  	node * temp=head;
  	while(temp!=nullptr){
  		cnt ++;
  		if(cnt==k) break;
  		temp=temp->next;
  	}
  	
  	node * prev= temp->back;
  	node * newnode=new node (val,temp,prev);
  	prev->next=newnode;
  	temp->back=newnode;
  	return head;
  	
  }
  
  
  

int main() {
    vector<int> arr = {213, 5, 4, 7, 8};

    node* head = converttoDLL(arr);
    print(head);

    // head = removekthelement(head,1);
    // print(head);
    
    
   // deletenode(head->next);
    head=insertbeforekthelement(head,999,1);
    print(head);
    

    return 0;
}
