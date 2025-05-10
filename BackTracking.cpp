#include <iostream>

using namespace std;

int X[10],n;

void afis(int k)
{
    for(int i=1;i<=k;i++)
        cout<<X[i]<<" ";
    cout<<'\n';
}

bool verif_sol(int k)
{
    return k==n;
}

bool verif(int k) ///verificare intermediara a solutiei
{
    for(int i=1;i<k;i++)
        if(X[i]==X[k]) return 0;
    return 1;
}

void back(int k) ///k = poz curenta pt care generam valoarea
{
    for(int i=1;i<=n;i++) ///generarea elementele din multimea M
    {
        X[k]=i;
        if(verif(k)) ///se verifica intermediar solutia
        {
            if(verif_sol(k)) afis(k);
            else back(k+1); ///generam pt poz urm
        }
    }
}

int main()
{
    cin>>n;
    back(1); ///de la ce pozitie incepe generarea
    return 0;
}
/*
cu vector de frecv
#include <fstream>
using namespace std;

ifstream cin("permutari.in");
ofstream cout("permutari.out");

int x[10],n,F[10];

void afis()
{
    for(int i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<"\n";
}

void back(int k)
{
    for(int i=1;i<=n;i++)
        if(!F[i])
        {
            x[k]=i;
            F[i]=1;
            if(k==n) afis();
            else back(k+1);
            F[i]=0;
        }
}

int main()
{
    cin>>n;
    back(1);
    return 0;
}

*/

