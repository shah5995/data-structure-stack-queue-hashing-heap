#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    node(int data){
    this->data = data;
    left = right = NULL;
    }
};
void addElement(node ** root,int data){
    if(*root==NULL){
        *root = new node(data);
        return;
    }
    node * temp = new node(data);
    node * it = *root;
    while(it!=NULL){
        if(it->data<data){
            if(it->right==NULL){
                it->right = temp;
                return;
            }
            it = it->right;
        }else{
            if(it->left==NULL){
                it->left = temp;
                return;
            }
            it = it->left;
        }
    }
}
int minBst(node * root){
    if(!root){
        return -1;
    }
    while(root->left){
        root = root->left;
    }
    return root->data;
}
bool find(node * root,int data){
    while(root){
        if(root->data==data){
            return true;
        }
        if(root->data<data){
            root = root->right;
        }else{
            root = root->left;
        }
    }
    return false;
}
void printInRange(node * root,int k1,int k2){
    if(root==NULL){
        return;
    }
    if(root->data > k1){
        printInRange(root->left,k1,k2);
    }
    if(root->data >=k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
    if(root->data <k2 ){
         printInRange(root->right,k1,k2);
    }
}
void levelorder(node * root){
    queue<node *>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        node * temp = q.front();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        q.pop();
    }
}
void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
    return;
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
    return;
}
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    return;
}
node * sortedLL(node * root){
    if(root==NULL){
        return NULL;
    }
    node * head = sortedLL(root->left);
    node * it = head;
    node * temp = new node(root->data);
    if(head){
        while(it->left){
            it = it->left;
        }
        it->left = temp;
    }else{
        head = temp;
    }
    it = temp;
    temp->left = sortedLL(root->right);
    return head;
}
void printLL(node * root){
    while(root){
        cout<<root->data<<" --> ";
        root = root->left;
    }
    cout<<"NULL"<<endl;
}
int height(node * root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
bool checkbalanced(node * root){
    if(root==NULL){
        return true;
    }

    bool l = checkbalanced(root->left);
    bool r = checkbalanced(root->right);
    int lh = height(root->left);
    int rh = height(root->right);
    bool x = false;
    if(abs(lh-rh)<=1){
        x = true;
    }
    return l & r & x;
}
pair<bool,int> checkBalFast(node * root){
    if(root==NULL){
        pair<bool,int>p;
        p.first = true;
        p.second = 0;
        return p;
    }
    pair<bool,int>l =  checkBalFast(root->left);
    pair<bool,int>r =  checkBalFast(root->right);
    bool x = false;
    if(abs(l.second-r.second)<=1){
        x = true;
    }
    pair<bool,int>p;
    p.first = l.first & r.first & x;
    p.second = max(l.second,r.second)+1;
    return p;
}
pair<bool,pair<int,int> > checkBst(node* root){
    if(root==NULL){
        pair<bool,pair<int,int> > p;
        p.first = true;
        p.second.first = INT_MAX;
        p.second.second = INT_MIN;
        return p;
    }
    pair<bool,pair<int,int> > left = checkBst(root->left);
    pair<bool,pair<int,int> > right = checkBst(root->right);
    bool x = false;
    if(root->data >= left.second.second  && root->data < right.second.first){
        x = true;
    }
    pair<bool,pair<int,int> > p;
    p.first = left.first & right.first & x;
    p.second.first = min(left.second.first,root->data);
    p.second.second = max(right.second.second,root->data);
    return p;
}

int main(){
node * root = NULL;
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int a;
	cin>>a;
	addElement(&root,a);
	
	}	
	preorder(root);
	cout<<endl;
	inorder(root);
}
}
