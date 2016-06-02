#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct node 
{
  int data;
  struct node *next;     
};
typedef struct node NODE;
NODE* search(NODE* first,int item);
NODE* insert(NODE *node,int);
NODE* deletenode(NODE *first,NODE *node);
int main()
{
    int i,n,item;
    //cout << "��J���I�Ӽ�:";
    //cin >> n;
    int arr[3]={10,20,30};
    NODE *cur,*pre,*first,*node2,*node3; //node2 �ķs�W���`�I  ,node3 �n�R�����`�I 
   
    for(i=0;i<3;i++)
    {
       NODE *cur=new NODE[3];   
        //cin >> cur->data;
        cur->data=arr[i];
       if(i==0)
          first=cur;
       else
          pre->next=cur;
       cur->next=NULL;                                                                                    
       pre=cur;             
    }
    cur=first;
    while(cur!=NULL)
    {
       cout << cur->data << " ";
       cur=cur->next;
    }
    cout << endl <<  "�п�J�n�䪺�ƭ�:";
    cin >> item;
    if(search(first,item)!=NULL) 
      cout << "�w���M��Ʀr:"<< search(first,item)->data << endl;
    else
      cout << "�䤣�즹��" << endl;
    cout << "------------------------------------" << endl;
    cout << "��J�n�b���Ӽƴ��J�s�ƭ�:";   
    cin >> item;
    node2=search(first,item);
    cout << "�n���J���ƭ�:";
    cin >> item;   
    insert(node2,item);
    cur=first;
    cout << "���G:";
    while(cur!=NULL)
    {
       cout << cur->data << " ";
       cur=cur->next;
    }
    cout << endl << "------------------------------------" << endl;
    cout << "��J�n�R�����ƭ�:";   
    cin >> item;
    node3=search(first,item);
    first=deletenode(first,node3);
    cur=first;
    cout << "���G:";
    while(cur!=NULL)
    {
       cout << cur->data << " ";
       cur=cur->next;
    }
    system("pause");
    return 0;    
}

NODE* search(NODE* first,int item)    //�j�M�`�I 
{
    NODE *node=first;      
    while(node!=NULL)
    {
        if(node->data==item)
           return node;
        else
           node=node->next;                 
    }
    return NULL;
}

NODE* insert(NODE *node,int item)         //���J�s�`�I 
{
    NODE *newnode;
    newnode=(NODE *) malloc(sizeof(NODE));
    newnode->data=item;
    newnode->next=node->next;
    node->next=newnode;   
}

NODE* deletenode(NODE *first,NODE *node)      //�R���`�I 
{
    NODE *ptr=first;
    if(first==NULL)
    {
       cout << "�Ū�";
       return NULL;               
    }  
    if(node==first)
       first=first->next;
    else
    {
       while(ptr->next!=node)
          ptr=ptr->next;
       ptr->next=node->next;   
    }
    free(node);
    return first;
}

