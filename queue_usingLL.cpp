#include<iostream>
using namespace std;
template<typename T>
struct node
{
	T data;
	node *next;
};
template<typename T>
class queue
{
	node<T> *head;
	node<T> * tail;
	int size;
	public:
		queue()
		{
			head=NULL;
			tail=NULL;
			size=0;
		}
		void enqueue(int data)
	    {
	    	node<T> *temp=new node<T>;
	    	temp->data=data;
	    	temp->next=NULL;
	    	if(size==0)
	    	{
	    		tail=temp;
	    		head=temp;
	    		size++;
	    		return;
			}
	    	tail->next=temp;
	    	tail=temp;
	    	
	    size++;
		}
		void deque()
		{
			if(size==0)
			{
				cout<<"not possible";
				return;
			}
			node<T> *temp=head;
			head=head->next;
			delete(temp);
			size--;
		}
		bool isempty()
		{
		if(size==0)
		{
			return 1;
		}
		else return 0;
	
		}
		int top()
		{
			return(head->data);
		}
	
};
int main()
{
	queue<int> q;
	cout<<q.isempty()<<endl;
	q.enqueue(5);
	q.enqueue(10);q.enqueue(8);q.enqueue(6);
  cout<<q.top()<<endl;q.deque();
	cout<<q.top();
}
