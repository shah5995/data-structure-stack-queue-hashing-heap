#include<iostream>
using namespace std;

class queue{
    int * arr;
    int max_size;
    int curr_size;
    int front;
    int rear;
public:
    queue(int n){
        max_size = n;
        curr_size = 0;
        front = 0;
        rear = n - 1;
        arr = new int[n];
    }
    bool isEmpty(){
        return curr_size==0;
    }
    int size(){
        return curr_size;
    }
    bool isFull(){
        return curr_size==max_size;
    }
    void enqueue(int data){
        if(isFull()){
            return;
        }
        rear = (rear+1) % max_size;
        arr[rear] = data;
        curr_size++;
        return;
    }
    void dequeue(){
        if(isEmpty()){
            return;
        }
        front = (front+1) % max_size;
        curr_size--;
        return;
    }
    int top(){
        if(isEmpty()){
            return NULL;
        }
        return arr[front];
    }
};
class stack{
	private:
		queue q1;
		queue q2;
		public:
			void push(int data)
			{
				if(q1.isEmpty())
				{
					q1.enqueue(data);
					while(!q2.isEmpty())
					{
						q1.enqueue(q2.top());
						q2.dequeue();
					}
				}
				else
				{
					q2.enqueue(data);
						while(!q1.isEmpty())
					{
						q2.enqueue(q1.top());
						q1.dequeue();
					}
				}
				
			}
			void pop()
			{
				if(q1.isEmpty()&&q2.isEmpty())
				{
					cout<<"pop NOT possible"<<endl;
				}
				else if(q1.isEmpty())
				{
					q2.dequeue();
				}
				else if(q2.isEmpty())
				{
				   q1.dequeue();	
				}
				
			}
			int top()
			{
				
				if(q1.isEmpty()&&q2.isEmpty())
				{
				//	cout<<"pop NOT possible"<<endl;
				return(-1);
				}
				else if(q1.isEmpty())
				{
					return(q2.top());
				}
				else if(q2.isEmpty())
				{
				return(q1.top());
				   //q1.dequeue();	
				}
				
			}
};
int main(){ 
stack s;
s.push(5);
s.push(10);
s.push(40);
s.push(30);
s.push(20);
cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.pop();
}
