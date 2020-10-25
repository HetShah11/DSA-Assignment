#include <stdio.h>
#include <stdlib.h>
typedef struct ne
{
	int data, height; //h is height of tree
	struct Node *left, *right, *prnt;  // left child, right child and parent node
}Node;
struct node
{
	int data;
	struct node *left, *right;
}
Node *rtAVL, *rtBST;         // root of AVL and BST

struct node* createNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

void insert(Node *rt,int info)
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

struct node* Succ(Node* curr)
{
    Node *s;
    s=curr->right;
    if (s!=NULL)
    {
        while (s->left!=NULL)
            s=s->left;
    }
    return s;
}

void del_BST(Node **rt,int dat)
{
    Node *current, *parent=NULL;

    current = *rt;

    if (rt==NULL)
    {
        printf("\nNO DATA IN DIRECTORY");
        return;
    }

    while (current!=NULL && ( dat!=current->data) )
    {
        parent = current;
        if (dat<current->data)
            current=current->left;
        else
            current=current->right;
    }

    if (current==NULL)
        return;

    if (current->left==NULL && current->right==NULL)
    {
        if (current!=*rt)
        {
            if (parent->left==current)
                parent->left=NULL;
            else
                parent->right=NULL;
        }
        else
            *rt = NULL;
        free (current);
    }

    else if (current->left && current->right)
    {
        Node* suc = Succ(current);
        int tem;
        tem= suc->data;
        delete(rt, tem);
        current->data=tem;
    }
    else
    {
        Node* child = (current->left)?current->left:current->right;

        if (current!=root)
        {
            if (current==parent->left)
                parent->left=child;
            else
                parent->right=child;
        }
        else
            *rt=child;
        free(current);
    }
}

void InorderDisplay(Node* rt)
{
    if (rt==NULL)
        return;
    AscendingDisplay(rt->left);
    printf("%d",rt->data);
    AscendingDisplay(rt->right);
}





void del_AVL(Node *x);    // Del of AVL node
void kink(Node *x);    // Resolving issue with the problematic grand child in AVL
void Balance(Node *x); // for checking balance factor
void lrot(Node *x);    // left rotate node in AVL
void rrot(Node *x);    // right rotate
void init(Node *x)     // Initializing values of new node
{
	x=(Node*)malloc(sizeof(Node));
	x->p=NULL;  x->l=NULL;  x->r=NULL;
	x->k=-1; x->h=0;
}
int main()
{
	init(rtAVL); init(rb);
}
