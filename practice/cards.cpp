#include<iostream>
using namespace std;
int find_nthprime(int n)
{

	for(int i=2;i<=1000;i++)
	{
		int j=2;
		for(;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			//cout<<i;
			n--;
			if(n==0)
			{
				return i;
			}
		}
	}
}
#include<stack>
int main() {
    stack<int>a;
    stack<int>a1;
    stack<int>b1;
    int n,q;
    cin>>n>>q;
    int c=find_nthprime(q);
   //cout<<c;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a.push(p);
    }
    for(int i=1;i<=q;i++)
    {
        a1.push(a.top());
        a.pop();
    }
    
    //  cout<<a1.top()<<" "<<b1.top();
    while(!a.empty())
    {
    //	cout<<"shah";
        int m=a.top();
      //  cout<<m<<endl;
        //cout<<a.size()<<" a1"<<a1.size()<<"b1"<<b1.size()<<endl;
        if(m%c==0)
        {
          b1.push(m);
        }
        else
        {
            a1.push(m);
        }
        a.pop();
      //  cout<<endl<<a1.top()<<" "<<b1.top()<<endl;
    }
   // cout<<a1.top()<<" "<<b1.top()<<endl<<endl;
    while(!b1.empty())
    {
        cout<<b1.top()<<endl;
        b1.pop();
    }
    //cout<<endl<<endl;
    while(!a1.empty())
    {
        cout<<a1.top()<<endl;
        a1.pop();
    }
    
    
	return 0;
}
