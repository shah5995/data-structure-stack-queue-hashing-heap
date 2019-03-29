#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,arr[100000];
		cin>>n;
		int member=0;
		for(int i=0;i<n;i++)
		{
			
			cin>>arr[i];
		
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			if(member<arr[i])
			{
				break;
			}
			member++;
		}
		cout<<member<<endl;
	}
}
