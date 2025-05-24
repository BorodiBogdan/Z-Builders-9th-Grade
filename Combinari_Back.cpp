#include <fstream>
using namespace std;

ifstream cin("combinari.in");
ofstream cout("combinari.out");

int x[10],n,q;

void afis()
{
    for(int i=1;i<=q;i++)
        cout<<x[i]<<" ";
    cout<<"\n";
}

void back(int k)
{
    for(int i=x[k-1]+1;i<=n;i++) ///in ordine cresc
        {
            x[k]=i;
            if(k==q) afis(); ///SUBMULTIMI DE CARDINAL Q (COMB DE N LUATE CATE Q)
            else back(k+1);
        }
}

int main()
{
    cin>>n>>q;
    back(1);
    return 0;
}
