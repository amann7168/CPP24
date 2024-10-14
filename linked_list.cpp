#include <iostream>     // For input/output
#include <vector>       // For using vectors
#include <algorithm>    // For algorithms like sort()
#include <string>       // For string operations
#include <map>          // For map (dictionary) usage
#include <set>          // For set usage
using namespace std;

class  node 
{
public:
	int data ;
 	node * next;
	  
	  
	  
	node (int data1,node *next1){
		data=data1;
		next=next1;
	}
	
	node (int data1){
		data=data1;
		next=nullptr;
	}

	
	
};

	
	node * convert2ll(vector<int> &arr){ 
		node * head=new node(arr[0]);
		
		node * mover=head;
		
		for(int i=1;i<arr.size();i++){
			node *temp=new node(arr[i]);
			mover->next=temp;
			mover=temp;
		}
		return head;
	}
	
	
	int lengthofll(node *head){
		int c=0;
		node *temp=head;
		while(temp){
			temp=temp->next;
			c++;
		}
		return c;
	}
	
	void print(node *head){
		while(head!=NULL){
			cout<<head->data<<" ";
			head=head->next;
			
		}
		cout <<endl;
	}
	
	node* removehead(node *head){
		if(head==NULL) return head;
		node* temp=head;
		head=head->next;
		delete temp;
		return head;
		
	}
	
	
	
	node * removetail(node *head){
		if (head==nullptr || head->next== nullptr){
			return nullptr;
		}
		 node *temp=head;
		 while(temp ->next->next!=nullptr){
		 	temp=temp->next;
		 }
		 
		 delete temp->next;
		 temp->next=nullptr;
		 
		   return head;
		 
	}
	
	node * deleteK(node*head ,int k){
		if(head==NULL){
			return head;
		}
		
		if(k==1){
			node *temp=head;
			head=head->next;
			delete temp;
			return head;
		}
		int cnt=0;
		node *temp =head;
		node*prev=nullptr;
		  
		while(temp!=nullptr){
			cnt++;
			if(cnt==k){
				prev->next=prev->next->next;
				break;
				
			}
			
			prev=temp;
			temp=temp->next;
			
		}
		return head;
	}
	
	
	
		node * deleteelement(node*head ,int element){
		if(head==NULL){
			return head;
		}
		
		if(head->data==element){
			node *temp=head;
			head=head->next;
			delete temp;
			return head;
		}
 
		node *temp =head;
		node*prev=nullptr;
		  
		while(temp!=nullptr){
	 
			if(temp->data== element){
				prev->next=prev->next->next;
				break;
				
			}
			 
			prev=temp;
			temp=temp->next;
			
		}
		return head;
	}
	
	
	node *insert2head(node *head,int val){
		node*temp=new node (val,head);
		return temp;
		
	}
	
	node *insert2tail(node *head,int val){
		if(head==NULL){
			return new node (val);
			
		}
		
		node *temp=head;
		while(temp->next!=nullptr){
			temp=temp->next;
		}
		node *newnode =new node (val);
		temp->next=newnode;
		return head;
		
	}
	
	
	
	node *insertatpostion(node *head, int element, int k){
		if(head==NULL){
			if(k==1 ) return new node(element);
			else return nullptr;
			
		}
		
		if(k==1){
			node * temp=new node(element,head);
			return temp;
		}
		
		int cnt =0;
		node * temp=head;
		while(temp!=nullptr){
			cnt ++;
			if(cnt =k-1){
				node *n =new node (element);
				n->next=temp->next ;
				temp->next=n;
				break;
			}
			temp=temp->next;
			
		}
		return head;
	}



	node *insertbeforevalue(node *head, int element, int val){
		if(head==NULL){
			return nullptr;
			
		}
		
		if(head->data==val){
			node * temp=new node(element,head);
			return temp;
		}
		
 		node * temp=head;
		while(temp->next!=nullptr){
 			if(temp->next->data =val ){
				node *n =new node (element,temp->next);
 				temp->next=n;
				break;
			}
			temp=temp->next;
			
		}
		return head;
	}
 



int main(){
	
	vector<int >arr={2,3,5,4,7,8};
	
	// node *y=  new node(arr[0],nullptr);
	// int *add=&arr[0];
	
	// cout<<y->data<<endl;
	
	// cout<<*add<<endl;
	
	node *head=convert2ll(arr);
	
	//cout<<head->data;

	
	// node *temp=head;  
	// 	cout<<temp->data<<" ";
	// 	temp=temp->next<<endl;
	// }
	
	//cout<<lengthofll(head)<<endl;
	
	
	print(head);
	// head=removehead(head);
 	
	// print(head);
	
	// head=removetail(head);
	
	//print (head);
	// head=deleteK(head,9);
	// print (head);
	
	// head= deleteelement(head,5);
	// print(head);
	
	// head=insert2head(head,200);
	// print(head);
	
	
	head=insertbeforevalue(head,999,5);
	print(head);
	
	
	
	
	
 }  