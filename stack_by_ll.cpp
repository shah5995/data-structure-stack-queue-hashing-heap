#include<iostream>
using namespace std;
struct node 
{
	int data;
	node * next;
};
struct stack
{
	private:
		node *head;
		int s;
		public:
			stack()
			{
				head=NULL;
				s=0;
			}
			
			int size()
			{
				
				return s;
			}
			bool isEmpty()
			{
				if(head==NULL)
				{
					return 1;
				}
				return(0);
			}
			void push(int data)
			{
				s++;
				cout<<"data is pushed ";
				if(head==NULL)
				{
					node * temp=new node;
					temp->data=data;
					temp->next=NULL;
					head=temp;
					return;
				}
				node *temp=new node;
				temp->data=data;
					temp->next=head;
				head=temp;
				return;
			}
			void pop()
			{
				if(s==0)
				{
					cout<<"currently no element present"<<endl;
					return;
				}
				s--;
				node *temp=head;
				head=temp->next;
				cout<<"deleted element=="<<temp->data<<endl;
				delete(temp);
			}
			int top()
			{
				return(head->data);
			}
			print()
			{
				node *temp=head;
				while(temp!=NULL)
				{
				
					cout<<temp->data<<" ";
				temp=temp->next;
				}
				cout<<endl;
				
			}
};
int main()
{
	stack s;
	cout<<s.isEmpty()<<endl;
	if(s.isEmpty())
	{
		cout<<"stack is empty"<<endl;
	}
	s.push(10);
	s.print();
	cout<<"size of stack is"<<s.size()<<endl;
	s.push(20);
	s.print();
	s.push(30);
	s.print();
	s.push(40);
	s.print();
	if(!s.isEmpty())
	{
		cout<<"stack not empty";
	}
	cout<<s.size()<<endl;
s.pop();	
	s.print();
	cout<<"size of stack is"<<s.size()<<endl;
	s.pop();s.pop();s.pop();s.pop();
	s.pop();s.pop();
cout<<s.size()<<endl;
	
}
