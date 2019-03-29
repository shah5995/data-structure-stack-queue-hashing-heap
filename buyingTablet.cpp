#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int l,b,p;
		int m;
		cin>>m;
		int ans=-1;
		for(int i=0;i<n;i++)
		{
			cin>>l>>b>>p;
			if(p<=m)
			{
				if(ans<l*b)
				{
					ans=l*b;
				}
			}
		}
		if(ans==-1)
		{
			cout<<"no Tablet";
		}
		else
		{
			cout<<ans;
		}
		cout<<endl;
	}
}
