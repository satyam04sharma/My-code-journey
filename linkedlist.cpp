#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* link;
};
Node* A;
void insert(int c)
{
	Node* temp=new Node;
	temp->data=c;
	temp->link=NULL;
	if(A==NULL)
	A=temp;
	else
	{
		Node* temp1=A;
		while(temp1->link!=NULL)
		temp1=temp1->link;
		temp1->link=temp;
	}
}
int main()
{
	int n,x;
	cin>>n;
	A=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
	}
	Node* temp=A;
	while(temp->link!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<temp->data;
}
