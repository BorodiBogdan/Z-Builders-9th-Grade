#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("partitiimultime.in");
ofstream cout("partitiimultime.out");

int n,X[10]; ///x[k]=i

int vmax(int n)
{
    if(n==1) return X[n];
    else return max(X[n],vmax(n-1));
}

void afis()
{
    int m=vmax(n);
    for(int p=1;p<=m;p++)
        {
            for(int i=1;i<=n;i++)
                if(X[i]==p)
                        cout<<i;
            cout<<'*';
        }
    cout<<endl;
}

void back(int k)
{
    int m=vmax(k-1);
    for(int i=1;i<=m+1;i++)
    {
        X[k]=i;
        if(k==n) afis();
        else back(k+1);
    }
}

int main()
{
    cin>>n;
    X[1]=1;
    back(2);
    return 0;
}
