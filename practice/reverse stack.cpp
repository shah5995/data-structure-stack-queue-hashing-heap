#include<iostream>
#include<stack>
using namespace std;
void uppendAtBottom(stack<int> &s,int top){
    if(s.empty()){
        s.push(top);
        return;
    }
    int t = s.top();
    s.pop();
    uppendAtBottom(s,top);
    s.push(t);
    return;
}
void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverseStack(s);
    uppendAtBottom(s,top);
    return;
}
int main(){
    stack<int> s;
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
	int a;
	cin>>a;
	s.push(a);
}
//cout<<s.top();

reverseStack(s);
//cout<<s.top();
for(int i=1;i<=n;i++)
{
	cout<<s.top()<<endl;
	s.pop();
}

}
