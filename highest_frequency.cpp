#include<iostream>
#include<map>
using namespace std;

int main() {
    int n,r;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    { 
        cin>>r;
        if(m.count(r)==0)
        {
            m.insert(pair<int,int>(r,1));
        }
        else
        {
            m[r]=m[r]+1;
        }
    }
    int ans=0;
    int ans2;
    
    for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
    {
    //	cout<<it->second;
    	
     if(it->second > ans){
         ans=it->second;
         ans2=it->first;
     }
     
}
    cout<<ans2;
	return 0;
}
