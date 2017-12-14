#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

}*root,*node;
int val;
int ins()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    cin>>val;
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    temp=root;
    cout<<root->data;
    return 0;
}
int main(void)
{
   ins();
   return 0;
}
