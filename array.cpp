#include<iostream>
using namespace std;

int main() {
    int a[1000],b[1000],sum[1000];
    int n1,n2,i,j,k;
    cin>>n1;
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cin>>n2;
    for(j=0;j<n2;j++)
    {
        cin>>b[j];
        cout<<b[j]<<" ";
    }
    cout<<endl;
    k=0;
    i=n1-1;
    j=n2-1;
    int r=0;
    cout<<endl;
    while(i>=0 && j>=0)
    {
        cout<<i<<j<<k<<"  ";
      // cout<<a[i]<<" "<<b[j]<<r<<endl;
       int p=a[i]+b[j]+r;
    
        sum[k]=p;
         r=p/10;
         cout<<"__"<<r;
        i--;
        j--;
        k++;
        cout<<sum[k]<<" "<<endl;
        
    }
    if(j>=0)
    {
        sum[k++]=b[j--]+r;
        while(j<=0)
        {
            sum[k++]=b[j--];
        }
    }
    if(i>=0)
    {
        sum[k++]=a[i--]+r;
        while(i<=0)
        {
            sum[k++]=a[i--];
        }
    }
    for(i=k-1;i>=0;i++)
    {
        cout<<sum[k]<<", ";
    }
    cout<<"END";
	return 0;
}
