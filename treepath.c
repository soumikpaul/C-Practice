#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    };
struct node *newNode(int data){
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
    }
void printArray(int [],int);
void printPathsRecur(struct node*,int [],int);
void printPaths(struct node* node) 
{
  int path[1000];
  printPathsRecur(node, path, 0);
}
 void printPathsRecur(struct node *root, int path[], int pathLen)
 {
    if(root==NULL)
        return;
    path[pathLen]=root->data;
    pathLen++;
    if((root->left==NULL)&&(root->right==NULL))
        printArray(path,pathLen);
     else
  {
  /* otherwise try both subtrees */
    printPathsRecur(root->left, path, pathLen);
    printPathsRecur(root->right, path, pathLen);
  }
}
void printArray(int ints[], int len)
{
  int i;
  for (i=0; i<len; i++) {
    printf("%d ", ints[i]);
  }
  printf("\n");
} 
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5); 
 
  /* Print all root-to-leaf paths of the input tree */
  printPaths(root);
 
  getchar();
  return 0;
}
    
