#include<iostream>
using namespace std;
#include<set>
int main() {
    set<int>m;
    int q;
    int type,rocket_d;
    cin>>q;
    int k;
    cin>>k;
    
    for(int i=0;i<k;i++)
    {
    //	cout<<i+1<<"    ";
        cin>>type;
       // cout<<endl<<endl;
        int x,y;
        cin>>x>>y;
        rocket_d=x*x+y*y;
        m.insert(rocket_d);
        q--;
        
    }
    set<int>::iterator it=m.begin();
    while(q--)
    {
        cin>>type;
        if(type==1)
        {
           int x,y;
        cin>>x>>y;
        rocket_d=x*x+y*y;
        m.insert(rocket_d); 
       // cout<<endl<<endl;
        }
        else if(type==2)
        {
            int i=0;
            int p=2;
            set<int>::iterator it=m.begin();
            while(p--)
            {
            	
                it++;
            }
            cout<<*it<<endl;
        }
    }
	return 0;
}
