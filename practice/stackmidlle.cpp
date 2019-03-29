#include<iostream>
using namespace std;
#include<stack>
int main()
{
	stack<int > s;
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		s.push(a);
	}
	int r=n/2;
	for(int i=1;i<=r;i++)
	{
		s.pop();
	}
	cout<<s.top();
	
}
