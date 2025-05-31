#include <fstream>

using namespace std;

ifstream cin("partitiinumar.in");
ofstream cout("partitiinumar.out");

int n,x[41],s;

void afis(int n)
{
    for(int i=1;i<=n;++i)
        cout<<x[i]<<" ";
    cout<<endl;
}

void back(int k)
{
    for(int i=x[k-1];i<=n && s+i<=n;++i)
    {
        s+=i;
        x[k]=i;
        if(s<=n)
            if(s==n) afis(k);
            else back(k+1);
        s-=i;
    }
}
int main()
{
    cin>>n;
    x[0]=1;
    back(1);
    return 0;
}
