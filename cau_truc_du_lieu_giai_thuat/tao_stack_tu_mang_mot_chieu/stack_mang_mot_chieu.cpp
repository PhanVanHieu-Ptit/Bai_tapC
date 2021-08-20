#include<iostream>

using namespace std;

int curren_size=-1;
const int MAX_size=100;
int stack[MAX_size];

bool isEmpty(){// kiem tra mang rong
	return (curren_size==-1);
}

bool isFull(){// kiem tra mang day
	return (curren_size==MAX_size);
}

void push(int data){// them phan tu
	if(!isFull()){
		curren_size++;
		stack[curren_size]=data;
	}
	else{
		cout<<" Tack full";
	}
}

int top(){//=peek(): lay phan tu top nhung khong xoa
	if(!isEmpty()){
		int data=stack[curren_size];
		return data;
	}
	else
	 cout<<" Stack is empty !";
}

int pop(){// lay phan tu top va xoa khoi stack
	if(!isEmpty()){
		int data=stack[curren_size];
		curren_size--;
		return data;
	}
	else
	 cout<<" Stack is empty !";
}

