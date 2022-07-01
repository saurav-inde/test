// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// void inorder_traversal(struct node* root){
//     if(root==NULL)
//     return;
//     inorder_traversal(root->left);
//     printf("%d ", root->data);
//     inorder_traversal(root->right);
// }
// void preorder_traversal(struct node* root){
//     if(root==NULL)
//     return;
//     printf("%d ",root->data);
//     preorder_traversal(root->left);
//     preorder_traversal(root->right);
// }
// void postorderTraversal(struct node* root){
//     if(root==NULL)
//     return;
//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     printf("%d ", root->data);
// }

// struct node* preorder_node(int val)
// {
//     struct node* newNode=(struct node*)malloc(sizeof(struct node));
//     newNode->data=val;
//     newNode->left=NULL;
//     newNode->right=NULL;
//     return newNode;
// }
// struct node* insert(struct node* root, int item)
// {
//     if(root==NULL)
//     return preorder_node(item);
//     if(item < root->data)
//     root->left=insert(root->left,item);
//     else
//     root->right=insert(root->right,item);
//     return root;
// }
// void search(struct node* &curr, int val, struct node* &parent)
// {
//     while(cur!=NULL && cur->data!= item)
//     {
//         parent = cur;
//         if(val<curr->data)
//         curr=curr->left;
//         else
//         curr=curr->right;
//     }
// }
// int main()
// {
//     struct node* root=NULL;
//     int n;
//     printf("Enter how much value we want to enter \n");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         int num;
//         printf("Enter the values of %d element \n", i+1);
//         scanf("%d", &num);
//         root=insert(root,num);
//     }
//     printf("Inorder Traversal\n");
//     inorder_traversal(root);
//     printf("\nPreorder Traversal\n");
//     preorder_traversal(root);
//     printf("\nPostorder Traversal\n");
//     postorderTraversal(root);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder_traversal(struct node *root)
{
    if (root == NULL)
        return;
    inorder_traversal(root->left);
    printf("%d ", root->data);
    inorder_traversal(root->right);
}
void preorder_traversal(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

struct node *preorder_node(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct node *insert(struct node *root, int item)
{
    if (root == NULL)
        return preorder_node(item);
    if (item < root->data)
        root->left = insert(root->left, item);
    else
        root->right = insert(root->right, item);
    return root;
}

int main()
{
    struct node *root = NULL;
    int n;
    printf("Enter number of values to enter: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        printf("Enter element%d: ", i + 1);
        scanf("%d", &num);
        root = insert(root, num);
    }
    printf("Inorder Traversal: \n");
    inorder_traversal(root);
    printf("\nPreorder Traversal:\n");
    preorder_traversal(root);
    return 0;
}
