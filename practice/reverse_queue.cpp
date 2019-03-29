#include<iostream>
using namespace std;
#include<queue>
void reverse(queue<int>&q)
{
	
//	cout<<"shah";
    if(q.empty())
    {
     return;   
    }
    int a=q.front();
   
    q.pop();
     //cout<<a<<" "<<q.size()<<endl;
    reverse(q);
    //cout<<a<<""<<endl;
	q.push(a);
   // cout<<endl<<q.front();//cout<<q.front();
}
int main() {
    int n;
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        q.push(r);
        
    }
    //cout<<q.front();
    reverse(q);
    while(!q.empty())
    {
    	cout<<q.front()<<" ";
    	q.pop();
	}
    
	return 0;
}
