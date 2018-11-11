#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *left, *right;
};

struct node* createNode(int data) 
{ 
    struct node* node = (struct node*)malloc(sizeof(struct node)); 
  
    node->value = data; 

    return(node); 
} 

int main()
{
    printf("Start.....\n");

    struct node *root = createNode(2);   
    
    root->left        = createNode(1); 
    root->right       = createNode(3); 
    
    root->left->left  = createNode(0); 
    root->left->right = createNode(7);

    root->right->left = createNode(9);
    root->right->right= createNode(1);  

    printf("Value for node A: %d\n", root->value);
    printf("Value for node B: %d\n", root->left->value);
    printf("Value for node C: %d\n", root->right->value);
    printf("Value for node D: %d\n", root->left->left->value);
    printf("Value for node E: %d\n", root->left->right->value);
    printf("Value for node F: %d\n", root->right->left->value);
    printf("Value for node G: %d\n", root->right->right->value);

    return 0;
}