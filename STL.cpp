#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

//int A[DIM];

int n;
vector <int> V;

int ncif(int n)
{
    if(n<10) return 1;
    return ncif(n/10)+1;
}

struct P{
    int val;
    int nr_cif;
};

vector<P>A;

map <char*,int>M;

bool crit(int a, int b)
{
    return b>a;
}

bool crit2(P a, P b)
{
    return a.nr_cif<b.nr_cif || a.nr_cif == b.nr_cif && a.val<b.val;
}



int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        V.push_back(x);
    }

    for(int i=0;i<n;i++) cout<<V[i]<<" ";

    V.insert(V.begin()+3,10);
    cout<<endl;
    cout<<V.size()<<endl;
    for(int i=0;i<V.size();i++) cout<<V[i]<<" ";

    int val;
    cin>>val;

    cout<<endl;

    find(V.begin(),V.end(),val)==V.end()?cout<<"NEGASIT":cout<<"GASIT";

    sort(V.begin(),V.end()); //sorteaza crescator implicit
    sort(V.begin(),V.end(),crit); //sorteaza dupa criteriu

    
        sort( pointer la inceput, pointer la final, crit);
        int A[101]; int *A=(int*)malloc(101*sizeof(int));
        int n;
        citire ...
        cout<<(*A);

    

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        P element;
        element={x,ncif(x)};
        A.push_back(element);
    }

    for(auto el:A) cout<<el.val<<" ";

    sort(A.begin(),A.end(),crit2);

    cout<<endl;

    for(auto el:A) cout<<el.val<<" ";


    char s[10001];
    cin.getline(s,10001);
    char *p=strtok(s," ,.?!");
    while(p!=NULL)
    {
        M[p]++;
        p=strtok(NULL," ,.?!");
    }
    for(auto &[key, value]:M)
        cout<<key<<" "<<value<<endl;
    return 0;
}
