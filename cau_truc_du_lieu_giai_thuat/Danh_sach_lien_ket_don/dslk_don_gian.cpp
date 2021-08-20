#include<iostream>
#include<string>

using namespace std;

struct Node{
	int data;
	Node *next;
};

int main(){
	
	Node *head=new Node;
	head->data=1;
	head->next=NULL;
	
	Node *second=new Node;
	second->data=2;
	second->next=NULL;
	
	Node *third=new Node;
	third->data=3;
	third->next=NULL;
	
	// tao lien ket giua cac node:
	head->next=second;
	second->next=third;
	
	// truy cap tung node:
	int data=head->data;
	cout<<data<<endl;
	
	Node *p=head;
	while(p!=NULL){
		int data=p->data;
		p=p->next;
		cout<<data<<" ->";
	}
	cout<<endl;
	
	return 0;
}
