#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
	int priority;
	int value;
	struct node *next;
}*start=NULL;
class priority
{
	public:
		node *create(int,int);
		void insert();
		void display();
};
int main()
{
	int c;
	priority s;
	while(1)
	{
		cout<<"Enter your choice\n"<<"1.insert\n"<<"2.diplay\n";
		cin>>c;
		switch(c)
		{
			case 1:
				s.insert();break;
			case 2:
				s.display();break;
			default:
				exit(1);
		}
	}
}
node *priority::create(int x,int y)
{
	struct node *temp,*p;
	temp=new(struct node);
	temp->value=x;
	temp->priority=y;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		return temp;
	}
	else
	{
		p = start;
        start = temp;
        start->next = p;
        return temp;
	}
}
void priority::insert()
{
	struct node *temp,*p;
	int value,priority;
	cout<<"Enter the value and priority";
	cin>>value>>priority; 
	temp=create(value,priority);
	
}
void priority::display()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		cout<<"Value->"<<temp->value<<" ";
		cout<<"priority->"<<temp->priority<<endl;
		temp=temp->next;
	}
}
