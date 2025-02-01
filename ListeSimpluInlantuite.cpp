#include <iostream>

using namespace std;

///int A[1001];
///A[i] <=> *(A+i)
/// ->  <=> (*).

/*
    int a=10;
    int *b=&a;
    cout<<b<<" "; ///adresa in hex
*/

struct nod{
    int key; ///Informatia
    nod *next; ///Pointer la urmatorul nod
};

nod *head=NULL;

//nod *createNode(int key);

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

nod* inserareFinal(int key, nod* head)
{
    nod *newNode=new nod;
    newNode->key=key;
    newNode->next=NULL;

    if(head!=NULL)
    {
        nod *p=head;
        while(p->next!=NULL) p=p->next;
        p->next=newNode;
    }
    else
        head=newNode;

    return head;
}

nod *inserareDupaOPoz(int key, nod *head, int val) ///inseram dupa nodul cu cheia val un nod cu informatia key
{
    nod *newNode=new nod;
    newNode->key=key;
    newNode->next=NULL;

    if(head==NULL) return NULL;

    nod *p=head;
    while(p->key!=val) p=p->next;

    if(p!=NULL)
    {
        newNode->next=p->next;
        p->next=newNode;
    }
    return head;

}

nod *inserareInainteDeOPoz(int key, nod *head, int val) ///inseram inaintea nodului cu key=val un nid nou cu nod.key=key
{
    nod *newNode=new nod;
    newNode->key=key;
    newNode->next=NULL;

    if(head==NULL) return NULL;

    nod *p=head;
    while(p->next->key!=val) p=p->next;

    if(p->next!=NULL)
    {
        newNode->next=p->next;
        p->next=newNode;
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
    int A[]={1,1,1,1,1,2,2,2,2,2};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)
        head=inserareFinal(A[i],head);
        //head=inserareInceput(A[i],head);
    head=inserareDupaOPoz(10,head,2);
    head=inserareInainteDeOPoz(11,head,2);
    afisList(head);
    return 0;
}
