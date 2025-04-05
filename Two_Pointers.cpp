#include <iostream>


using namespace std;

//ifstream f("sumainsecv.in");
//ofstream g("sumainsecv.out");

int main()
{
    int n,i;
    long long v[101],Suma,s=0;
    cin>>n>>Suma;
    for(int i=1;i<=n;i++) cin>>v[i];
    int st=1;
    for(i=1;i<=n;i++)
    {
        s+=v[i];
        while(s>Suma) s-=v[st++];
        if(s==Suma) break;
    }
    if(i<=n) cout<<st<<' '<<i;
    else cout<<0<<' '<<0;
}
