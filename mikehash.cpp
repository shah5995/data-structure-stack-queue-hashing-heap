#include<Iostream>
using namespace std;
int find(int a[],int n)
{
	int max=-9999;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int* hash_array(int A[], int n)
{
	int MAX=find(A,n);
    int* hash = new int[MAX]; //MAX is the maximum possible value of A[i]
    for(int i=1;i<=MAX;i++) hash[i]=-1; //initialize hash to -1.
    int count = 0;
    for(int i=1;i<=n;i++) // Loop through elements of array
    {
        if(hash[A[i]] == -1) // A[i] was not assigned any hash before
        {
            hash[A[i]] = count; // Assigning hash to A[i]
            count++;
            continue;
        }
        for(int j = 1;j<i;j++)
        {
            if(hash[A[j]] > hash[A[i]]) // All the hashes greater than previous hash of A[i] are decremented.
                hash[A[j]]--;
        }
        hash[A[i]] = count - 1; // Assigning a new hash to A[i]
    }
    return hash;
}
int find_value(int a[],int k,int n)
{
	int max=-9999;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==k)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[100000],*hash;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	hash=hash_array(arr,n);
	for(int i=1;i<=find(arr,n);i++)
	{
		cout<<find_value(hash,i-1,find(arr,n))<<endl;
	}
}
