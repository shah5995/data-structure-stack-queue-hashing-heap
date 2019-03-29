#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,arr[100000]={0};
		cin>>n>>k;
		int length=0;
		int arr2[100000][2];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
			{
				cin>>arr2[i][j];
			}
			
			if(arr2[i][1]>length)
			{
				length=arr2[i][1];
			}
		}
		int max=0;
		cout<<length<<endl<<endl;
		for(int i=0;i<n;i++)
		{
			int s=arr2[i][0];
			int e=arr2[i][1];
			for(int j=s;j<=e;j++)
			{
				arr[j]=arr[j]+1;
			}
		}
		int count=0;
		for(int j=0;j<length;j++)
			{
				if(arr[j]==k)
				{
					count++;
				}
			}
		//	cout<<count;
		//int element=max_element(arr,arr+n);
			for(int i=0;i<n;i++)
		{
			int count2=0;
			int s=arr2[i][0];
			int e=arr2[i][1];
			for(int j=s;j<=e;j++)
			{
				arr[j]=arr[j]-1;
				if(arr[j]==k)
				{
					count2++;
				}
				else if(arr[j]==k-1)
				{
					count2--;
				}
			}
		//	cout<<count2;
			int pqr=count+count2;
			
		
			if(pqr>max)
			{
				max=pqr;
			}
			for(int j=s;j<=e;j++)
			{
				arr[j]=arr[j]+1;
			}
		}
		cout<<max<<endl;
		
	}
}
