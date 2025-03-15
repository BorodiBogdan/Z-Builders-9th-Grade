#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("fill.in");
ofstream cout("fill.out");

int A[105][105],n,m,cnt;

void fill(int i, int j)
{
    A[i][j]=2;
    if(i>1 && A[i-1][j]==1) fill(i-1,j); //N
    if(i<n && A[i+1][j]==1) fill(i+1,j); //S
    if(j>1 && A[i][j-1]==1) fill(i,j-1); //V
    if(j<m && A[i][j+1]==1) fill(i,j+1); //E
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>A[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(A[i][j]==1)
            {
                cnt++;
                fill(i,j);
            }
    cout<<cnt;
    return 0;
}
