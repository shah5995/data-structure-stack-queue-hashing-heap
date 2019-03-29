#include<iostream>
using namespace std;
#include<cstring>
#include<set>
int main()
{
	int t;
	cin>>t;
	cin.get();
	while(t--)
	{
		char string[100000];
		cin>>string;
		int count=0;
		set<char >s;
			int i=0;
			while(string[i]!='\0')
			{
				if(s.count(string[i])==0)
				{
					count++;
					s.insert(string[i]);
				}
				i++;
			}
			
		cout<<strlen(string)/count<<endl;
	}
}
