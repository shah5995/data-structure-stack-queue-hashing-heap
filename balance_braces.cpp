#include<iostream>
using namespace std;
#include<cstring>
template<typename T>
struct node 
{
	T data;
	node * next;
};
template<typename T>
struct stack
{
	private:
		node<T> *head;
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
			void push(T data)
			{
				s++;
			//	cout<<"data is pushed ";
				if(head==NULL)
				{
					node <T>* temp=new node<T>;
					temp->data=data;
					temp->next=NULL;
					head=temp;
					return;
				}
				node<T> *temp=new node<T>;
				temp->data=data;
					temp->next=head;
				head=temp;
				return;
			}
			void pop()
			{
				if(s==0)
				{
				//	cout<<"currently no element present"<<endl;
					return;
				}
				s--;
				node <T>*temp=head;
				head=temp->next;
			//	cout<<"deleted element=="<<temp->data<<endl;
				delete(temp);
			}
			int top()
			{
				return(head->data);
			}
			print()
			{
				node<T> *temp=head;
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
	char string[100];
	cin.getline(string,100);
	stack<char> s;
	int p=0;
	while(string[p]!='\0')
	{
		if(string[p]=='{'||string[p]=='('||string[p]=='[')
		{
			s.push(string[p]);
		}
		
		else if(string[p]=='}')
		{
			if(s.isEmpty())
			{
			cout<<"false ";
				s.push(string[p]);
				return 0;
			}
			char r=s.top();
			if(r!='{')
			{
		cout<<"false";
				return 0;
			}
			s.pop();
		}
		
		else if(string[p]==']')
		{
			
			if(s.isEmpty())
			{
				cout<<"false";
			s.push(string[p]);
				return 0;
			}
			char r=s.top();
			if(r!='[')
			{
				cout<<"false";
				return 0;
			}
			s.pop();
		}
		
		else if(string[p]==')')
		{
			
			if(s.isEmpty())
			{
			cout<<"false";
			
			s.push(string[p]);	return 0;
			}
			char r=s.top();
			if(r!='(')
			{
				cout<<"false";
				return 0;
			}
			s.pop();
		}
		
		
		p++;
	}
	if(s.size()==0)
{
	cout<<"true";
}
else
{
	cout<<"false";
}
}
