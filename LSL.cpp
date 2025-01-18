#include <iostream>

using namespace std;

struct nod{
    int key; ///Informatia
    nod *next; ///Pointer la urmatorul nod
};

nod *head=NULL;

nod *inserareInceput(int key, nod *head)
{
    if(head==NULL)
    {
        nod *newNode= new nod;
        newNode->key=key;
        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        nod *newNode = new nod;
        newNode->key=key;
        newNode->next=head;
        head=newNode;
    }
    return head;
}

void afisList(nod *head)
{
    nod *p=head; ///nod santinela cu care interam prin lista
    while(p!=NULL)
    {
        cout<<p->key<<" "; ///afisam informatia
        p=p->next; ///mergem la urmatorul element
    }
}

int main()
{
    int A[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)
        head=inserareInceput(A[i],head);
    afisList(head);
    return 0;
}
