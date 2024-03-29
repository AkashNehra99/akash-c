#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct BST_node
{
  struct BST_node *left;
  int item;
  struct BST_node *right;
}BST;

void insert_BST(BST **tree, int element)
{
  if(*tree==NULL)
  {
    *tree = (BST*)malloc(sizeof(BST));
    (*tree)->item = element;
    (*tree)->left = (*tree)->right=NULL;
  }
  else if(element < (*tree)->item)
    insert_BST(&((*tree)->left),element);
  else
    insert_BST(&((*tree)->right),element);
}
void inorder(BST *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d  ",root->item);
    inorder(root->right);
  }
}
void preorder(BST *root)
{
  if(root!=NULL)
  {
    printf("%d  ",root->item);
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(BST *root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d  ",root->item);
  }
}
BST* findsmallest(BST *tree)
{
  if((tree==NULL) || (tree->left==NULL))
    return tree;
  else
    return findsmallest(tree->left);
}
BST* findgreatest(BST *tree)
{
  if((tree==NULL) || (tree->right)==NULL)
    return tree;
  else
    return findgreatest(tree->right);
}
int totalnode(BST *tree)
{
  if(tree==NULL)
    return 0;
  else
    return (totalnode(tree->left) + totalnode(tree->right) +1);
}
int determineheight(BST *tree)
{
  int lh,rh;
  if(tree==NULL)
    return 0;
  else
  {
    lh = determineheight(tree->left);
    rh = determineheight(tree->right);
    if(lh>rh)
      return ++lh;
    else
      return ++rh;
  }
}
void deletenode(BST **tree, int element)
{
  BST *temp;
  if(*tree==NULL)
      printf("Element not found in BST\n");
  else if(element < (*tree)->item)
      deletenode(&((*tree)->left),element);
  else if(element > (*tree)->item)
      deletenode(&((*tree)->right),element);
  else if(((*tree)->left) && ((*tree)->right))
  {
    temp = findgreatest((*tree)->left);
    (*tree)->item= temp->item;
    deletenode(&((*tree)->left),temp->item);
  }
  else
  {
    temp = *tree;
    if(((*tree)->left==NULL) && (*tree)->right==NULL)
	*tree = NULL;
    else if((*tree)->left!=NULL)
	*tree = (*tree)->left;
    else
	*tree = (*tree)->right;
    printf("Element %d is deleted\n",temp->item);
    free(temp);
  }
}

void main()
{
  int ch,element;
  BST *root,*left;
  root=NULL;
  clrscr();
  while(1)
  {
    printf("\n1.Insertion  2.Inorder  3. Preorder  4.Postorder  ");
    printf("5.Find smallest element  6.Find greatest element  ");
    printf("7.Find total number of nodes   8.Find Height of Tree  ");
    printf("9.Delete Node   10.exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1: printf("Enter element to insert: ");
	     scanf("%d",&element);
	     insert_BST(&root,element);
	     break;
     case 2: if(root==NULL)
	       printf("Tree is empty\n");
	     else
	       inorder(root);
	     break;
     case 3: if(root==NULL)
	       printf("Tree is empty\n");
	     else
	       preorder(root);
	     break;
     case 4: if(root==NULL)
	       printf("Tree is empty\n");
	     else
	       postorder(root);
	     break;
     case 5: printf("Smallest node is %d",(findsmallest(root))->item);
	     break;
     case 6: printf("Greatest node is %d",(findgreatest(root))->item);
	     break;
     case 7: printf("Total nodes are: %d",totalnode(root));
	     break;
     case 8: printf("Height of the tree is %d",determineheight(root));
	     break;
     case 9: printf("Enter element to delete: ");
	     scanf("%d",&element);
	     deletenode(&root,element);
	     break;
     case 10: exit(1);
     default: printf("Invalid choice\n");
     }
    }
}
