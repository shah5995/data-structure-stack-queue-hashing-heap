#include<iostream>
using namespace std;
#include<queue>
int main() {
    
    int t;
    cin>>t;
	while(t--)
    {
      priority_queue<int >q;
      int n,k;
      cin>>n>>k;
      for(int i=0;i<n;i++)
      {
          int r;
          cin>>r;
          q.push(r);
      }
      int count=0;
     for(int i=0;i<k;i++)
     {
     //	cout<<q.size();
         int r=q.top();
        // if(r%2==0)
         {
             r=r/2;
         }
       // cout<<"  "<<q.top()<<endl;
         count+=q.top();
         q.pop();
         q.push(r);
         
     }
     cout<<count<<endl;
    }
	return 0;
}
