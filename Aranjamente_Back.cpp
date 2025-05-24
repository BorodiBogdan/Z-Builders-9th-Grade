#include <fstream>
using namespace std;
ifstream cin("aranjamente.in");
ofstream cout("aranjamente.out");
int n,p,X[15],F[15];
void afis()
{
    for(int i=1;i<=p;++i) cout<<X[i]<<" ";
    cout<<'\n';
}
void back(int k) //aranajamente
{
    for(int i=1;i<=n;++i)
        if(!F[i])
    {
        F[i]=1;
        X[k]=i;
        if(k==p) afis(); ///ARANJAMENTE DE N LUATE CATE P
        else back(k+1);
        F[i]=0;
    }

}
int main()
{
    cin>>n>>p;
    back(1);
    return 0;
}
