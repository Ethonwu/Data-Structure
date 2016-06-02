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
    //cout << "輸入結點個數:";
    //cin >> n;
    int arr[3]={10,20,30};
    NODE *cur,*pre,*first,*node2,*node3; //node2 藥新增的節點  ,node3 要刪除的節點 
   
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
    cout << endl <<  "請輸入要找的數值:";
    cin >> item;
    if(search(first,item)!=NULL) 
      cout << "已收尋到數字:"<< search(first,item)->data << endl;
    else
      cout << "找不到此數" << endl;
    cout << "------------------------------------" << endl;
    cout << "輸入要在哪個數插入新數值:";   
    cin >> item;
    node2=search(first,item);
    cout << "要插入的數值:";
    cin >> item;   
    insert(node2,item);
    cur=first;
    cout << "結果:";
    while(cur!=NULL)
    {
       cout << cur->data << " ";
       cur=cur->next;
    }
    cout << endl << "------------------------------------" << endl;
    cout << "輸入要刪除的數值:";   
    cin >> item;
    node3=search(first,item);
    first=deletenode(first,node3);
    cur=first;
    cout << "結果:";
    while(cur!=NULL)
    {
       cout << cur->data << " ";
       cur=cur->next;
    }
    system("pause");
    return 0;    
}

NODE* search(NODE* first,int item)    //搜尋節點 
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

NODE* insert(NODE *node,int item)         //插入新節點 
{
    NODE *newnode;
    newnode=(NODE *) malloc(sizeof(NODE));
    newnode->data=item;
    newnode->next=node->next;
    node->next=newnode;   
}

NODE* deletenode(NODE *first,NODE *node)      //刪除節點 
{
    NODE *ptr=first;
    if(first==NULL)
    {
       cout << "空的";
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

