#include<iostream>
using namespace std;
#include<queue>
bool find(queue<char> &q,char m)
{
	queue<char>r;
	bool ans=false;
	while(!q.empty())
	{
		r.push(q.front());
		if(q.front()==m)
		{
			ans=true;
		}
		q.pop();
	}
	while(!r.empty())
	{
		q.push(r.front());
		r.pop();
	}
	return ans;
}

int main() {
    queue<int>q1;
    queue<int>q2;
    queue<int>q3;
    queue<int>q4;
    queue<char>q;
    int n;
    char m;
    bool f;
    cin>>n;
    while(n--)
    {
        char c;
        cin>>c;
        if(c=='E')
        {
            int x,y;
            cin>>x>>y;
            switch(x)
            {
                case 1:
                //	cout<<y<<"__";
                    q1.push(y);
                   // cout<<"added"<<q1.front();
                     m='a';
                     f=find(q,m);
                    // cout<<f<<endl;
                    {
                    	if(!f)
                    	{
                    		q.push(m);
                    	//	cout<<q.front()<<endl;
						}
					}
                    break;
                case 2:
                    q2.push(y);
                 //   cout<<endl<<"added"<<q1.front();
                    m='b';
                     f=find(q,m);
                    // cout<<f<<endl;
                    {
                    	if(!f)
                    	{
                    		q.push(m);
                    		//cout<<q.front()<<endl;
						}
					}
                    break;
                case 3:
                    q3.push(y);
                     m='c';
                     f=find(q,m);
                    {
                    	if(!f)
                    	{
                    		q.push(m);
						}
					}
                    break;
                case 4:
                    q4.push(y);
                   m='d';
                     f=find(q,m);
                    {
                    	if(!f)
                    	{
                    		q.push(m);
						}
					}
                    break;
                default:
                break;
                    
            }
            
        }
        else
        {
        	char top=q.front();
        //	cout<<endl<<top<<"---";
        	if(top=='a')
        	{
        		cout<<1<<" "<<q1.front();
        		q1.pop();
        		if(q1.empty())
        		{
        			q.pop();
				}
			}
			
        	else if(top=='b')
        	{
        		cout<<2<<" "<<q2.front();
        		q2.pop();
        		if(q2.empty())
        		{
        			q.pop();
				}
			}
			
        	else if(top=='c')
        	{
        		cout<<3<<" "<<q3.front();
        		q3.pop();
        		if(q3.empty())
        		{
        			q.pop();
				}
			}
			
        	else
        	{
        		cout<<4<<" "<<q4.front();
        		
        		q4.pop();
        		if(q4.empty())
        		{
        			q.pop();
				}
			}
			cout<<endl;
            
        }
    }
	return 0;
}
// 11 E 4 1 E 1 1 E 2 1 E 3 1 D D D E 4 2 E 1 2 D D
