#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * create_ll()
{
    node * head=NULL;
    head=new node;
    int data;
    cin>>data;
    head->data=data;
    head->next=NULL;
    cin>>data;
    if(data==-1)
    {
        return head;
    }
    
    node* it=head;
    
    while(data!=-1)
    {
        node*temp=new node;
       
        temp->data=data;
        temp->next=NULL;
        it->next=temp;
        it=it->next;
         cin>>data;
        
    }
    
    
    return head;
}
void print_ll(node* head)
{
	node* temp=head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	//cout<<"END";
	
}
node * circular(node *head,int a[])
{
	node *temp=head;
	while(temp!=NULL)
	{
	//	cout<<"shah";
		a[temp->data]=a[temp->data]+1;
	//	cout<<temp->data<<" "<<a[temp->data]<<endl;
		if(a[temp->data]>1)
		{
			break;
		}
		temp=temp->next;
	}
	temp->next=NULL;
	return head;
}
int main() {
    node* head=NULL;
    int a[100000]={0};
    head=create_ll();
  //  print_ll(head);
    head=circular(head,a);
      print_ll(head);
	return 0;
}
