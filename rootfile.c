#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data, height; //h is height of tree
	struct Node *left, *right, *parent;  // left child, right child and parent node
}Node;
Node *rtAVL, *rtBST;         // root of AVL and BST

Node* createNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void insert(Node **rt,int info)
{
    struct node* new=createNode(info);

    if (*rt==NULL)
        *rt=new;
    else
    {
        Node* temp=*rt;
        while (temp!=NULL)
        {
            if (new->data<temp->data)
            {
                if (temp->left==NULL)
                {
                    temp->left=new;
                    temp=NULL;
                }
                else
                    temp=temp->left;
            }
            else if (new->data>temp->data)
            {
                if (temp->right==NULL)
                {
                    temp->right=new;
                    temp=NULL;
                }
                else
                    temp=temp->right;
            }
            else
            {
                printf("\nDATA ALREADY EXISTS!!!");
                break;
            }
        }
    }
}

void search(Node** rt,int dat)
{
    if (*rt==NULL)
    {
        printf("THERE'S NO DATA IN THE TREE\n");
        return;
    }

    Node* temp=*rt;
    while (temp!=NULL)
    {
        if (new->data<temp->data)
        {
            if (temp->left==NULL)
            {
                printf("\nDATA DOES NOT EXIST\n");
                return;
            }
            else
                temp=temp->left;
        }
        else if (new->data>temp->data)
        {
            if (temp->right==NULL)
            {
                printf("\nDATA DOES NOT EXIST\n");
                return;
            }
            else
                temp=temp->right;
        }
        else
        {
            printf("\nData Found in the tree ");
            return;
        }

    }
}









void del_AVL(Node *x);    // Del of AVL node
void del_BST(Node *x);    // Del of BST node
void kink(Node *x);    // Resolving issue with the problematic grand child in AVL
void Balance(Node *x); // for checking balance factor
void lrot(Node *x);    // left rotate node in AVL
void rrot(Node *x);    // right rotate
Node* succ(Node *x);   // Finds successor node
void print(Node *x);
void init(Node *x)     // Initializing values of new node
{
	x=(Node*)malloc(sizeof(Node));
	x->p=NULL;  x->l=NULL;  x->r=NULL;
	x->k=-1; x->h=0;
}
int main()
{
	init(ra); init(rb);
}
