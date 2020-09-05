#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *left,*right;
};
int height(struct node *root);
void printgivenlevel(struct node *root, int level);
void printlevel(struct node *root)
{
int h=height(root);
for(int i=1;i<=h;i++)
{printgivenlevel(root,i);
printf("\n");
}}
void printgivenlevel(struct node *root, int level)
{
if(root==NULL)
return;
if(level==1){
printf("%d",root->data);
//printf("\n");
}
else if(level>1)
{
printgivenlevel(root->left,level-1);
printgivenlevel(root->right,level-1);
}
}
int height(struct node *root)
{
int lheight,rheight;
if(root==NULL)
return 0;
else{
lheight=height(root->left);
rheight=height(root->right);
}
return (lheight>rheight)?lheight+1:rheight+1;
}
struct node* newnode(int value)
{
struct node *node=(struct node*)malloc(sizeof(struct node*));
node->data=value;
node->left=node->right=NULL;
}
int main()
{
struct node *root = newnode(1);
    root->left        = newnode(2);
    root->right       = newnode(3);
    root->left->left  = newnode(4);
    root->left->right = newnode(5);
 
    printf("Level Order traversal of binary tree is \n");
    printlevel(root);
 
    return 0;
}
