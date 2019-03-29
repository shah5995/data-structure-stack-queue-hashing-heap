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
		char string[100000],ans[100000];
		cin>>string;
		ans[0]=string[0];
		int i=1;
		int l=1;
		while(string[i]!='\0')
		{
			if(string[i]==string[0])
			{
				l=0;
				cout<<"shah";
			}
			else
			{
				ans[l]=string[i];
				
			}
			l++;i++;
			
		}
		ans[l]='\0';
		cout<<ans<<endl;
	}
}
