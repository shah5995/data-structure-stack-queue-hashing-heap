#include<iostream>
using namespace std;
#include<queue>
int find(queue<int > &q1,int data)
{
    if(q1.front()==data)
    {
        return 0;
    }
    int r=q1.front();
    q1.pop();
    q1.push(r);
    int c=0;
    c=find(q1,data)+1;
    
    
    return c;
}
int main() {
    int n;
    cin>>n;
    queue<int>q1,q2;
    for(int i=1;i<=n;i++)
    {
        
        int r;
        cin>>r;
        q1.push(r);
    }
    
    for(int i=1;i<=n;i++)
    {
        
        int r;
        cin>>r;
        q2.push(r);
    }
    int t=0;
    while(!q1.empty())
    {
    //	cout<<q1.front()<<" "<<q2.front()<<endl;
    	if(q1.front()!=q2.front())

		{
		
        int p=find(q1,q2.front());
       // cout<<endl<<p<<"    --";
        t=t+p;
        //cout<<p<<"-"<<t<<endl;
    }
    q1.pop();
        q2.pop();
        	
        //	cout<<t<<endl;
    }
    cout<<t+n;
	return 0;
}
