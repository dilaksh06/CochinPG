#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the binary tree
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node *create(int k)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=k;
    return newnode;
};

struct node *insertion(struct node *root, int k)
{
    if (root == NULL)
    {
        return create(k);
    }

    if (k < root->data)
    {
        root->left = insertion(root->left, k);
    }
    else if (k > root->data)
    {
        root->right = insertion(root->right, k);  // Use 'insertion' here, not 'insert'
    }
    return root;

}


void inorderTraversal(struct node *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void preoderTraversal(struct node *root)
{
     if (root != NULL) {
        printf("%d ", root->data);
        preoderTraversal(root->left);
        preoderTraversal(root->right);
    }

}

void postOrderTraversal(struct node *root)
{
     if (root != NULL) {

        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }

}

struct node* findMin(struct node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct node *deletion(struct node *root, int k)
{
    if(root ==NULL)
    {
        return root;
    }
    if(k<root->data)
    {
        root->left=deletion(root->left,k);
    }
    else if(k>root->data)
    {
        root->right=deletion(root->right,k);
    }
    else
    {
        //if no childe
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;

        }
        if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp=findMin(root->right);
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);
        }
        return root;
    }

};

int main() {
    printf("enter 1 to add data in binary tree : \n");
    printf("enter 2 to dispaly data in binary tree in inordertraversal method: \n");
    printf("enter 3 to display data in binary in preoderTraversal method : \n");
    printf("enter 4 to display data in binary in postOrderTraversal method : \n");
    printf("enter 0 to exit\n");
    struct node *root=NULL;
    while(1)
    {

        int value;
        printf("enter your choice : ");
        scanf("%d",&value);

        if(value==1)
        {
            int data;
            printf("enter a the value to be added : ");
            scanf("%d",&data);
            root=insertion(root,data);
        }
        else if(value==2)
        {
            printf("inorder traversal\n");
            inorderTraversal(root);
            printf("\n");
        }
        else if(value==0)
        {
            printf("we are exiting....\n");
            return 0;
        }
        else if(value==3)
        {
            printf("pretraversal\n");
            preoderTraversal(root);
            printf("\n");
        }
        else if(value==4)
        {
            printf("pretraversal\n");
            postOrderTraversal(root);
            printf("\n");
        }
        else if(value==5)
        {
            int value;
            printf("enter the value need to be deleted :");
            scanf("%d",&value);
            printf("deletion\n");
            deletion(root,value);
            printf("\n");
        }
        else
        {
            printf("invalid choice try again \n");
        }
    }
    return 0;

}
