#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
class LL
{
	public:
	node* head;
		void push(int data)
		{
			node* temp=new node;
			temp->data=data;
			temp->next=NULL;
			temp->next=head;
			head=temp;
		}
		void print()
		{
			node* temp=head;
			while(temp)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		void search(int data,node *u,node *l);
}ob;
void LL::search(int data,node* u,node* l)
{
	node* mid=l,* temp=l;
	int i=-1,flag=1;
	while(temp!=u) 
	{
		i++;
		temp=temp->next;
	}
	flag=i;
	while(i>0)
	{
		mid=mid->next;
		i-=2;		
	}
	if(mid->data==data) cout<<"\n\nYay!";
	else if(flag&&mid->data<data) search(data,mid,l);
	else if(flag) search(data,u,mid); 
}
int main()
{
	ob.push(1);
	ob.push(7);
	ob.push(20);
	ob.push(71);
	ob.push(72);
	ob.print();
	int data;
	cout<<"\n\n\nEnter number to search : ";
	cin>>data;
	ob.search(data,NULL,ob.head);
	return 1;
}
