#include<iostream>
using namespace std;
#include<stack>
void print(stack<int > s)
{
	stack<int> p;
	while(!s.empty())
	{
	//	cout<<s.top()<<" ";
		p.push(s.top());
		s.pop();
	}
	
	while(!p.empty())
	{
		cout<<p.top()<<" ";
		s.push(p.top());
		p.pop();
	}
}
void append(stack<int >&s,int top)
{
	if(s.empty())
	{
		//cout<<"is empty";
		
		s.push(top);
		//print(s);	cout<<endl<<"--------------------"<<endl;
		return;
	}
	if(top<=s.top()){
		s.push(top);
		return;
	}
	int t=s.top();

//	print(s);
//	cout<<"   "<<t<<endl<<top;
	//cout<<endl<<"--------------------"<<endl;
	s.pop();
	append(s,top);
	//cout<<endl<<"apended"<<endl;
	//print(s);
	s.push(t);
	//	cout<<endl<<"--------------------"<<endl;
	//print(s);
	//cout<<"   "<<t<<endl<<top;
	//cout<<endl<<"--------------------"<<endl;
	
	//cout<<"shah"<<endl;
}
void sort(stack<int > &s)
{

	if(s.size()==1)
	{
		return;
	}
	int top=s.top();
	
	
	s.pop();
	sort(s);
//	cout<<"name"<<s.size()<<"\\";
//	cout<<endl<<top<<endl;
	append(s,top);
//	cout<<s.size()<<"\\";
//	print(s);
//	cout<<endl;
}
int main()
{
	   stack<int> s;
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
	int a;
	cin>>a;
	s.push(a);
}
cout<<s.top();

sort(s);
cout<<s.top();
print(s);

	
}
