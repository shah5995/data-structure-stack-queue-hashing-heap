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
				cout<<endl<<"deleted element=="<<temp->data<<endl;
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
int n;
cout<<"enter the no of element you wANT in stack";
cin>>n;
for(int i=0;i<n;i++)
{
	int a;
	
	cin>>a;
	s.push(a);
	}
	s.print();
	cout<<"top of stack"<<s.top()<<endl;
	int q=0;	
	stack p;
	for(int i=0;i<n;i++)
	{
		int pn=s.top();
		s.pop();
		for(int i=0;i<n-q-1;i++)
		{
			int r=s.top();
			p.push(r);
			s.pop();
			
		}
		s.push(pn);
		while(!p.isEmpty())
		{
			int m=p.top();
			s.push(m);
			p.pop();
		}
		q++;
	}
s.print();
cout<<"top of stack"<<s.size()<<endl;
}
