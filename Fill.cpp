#include <iostream>
#include <cmath>
using namespace std;

int A[105][105],n,m,cnt;

void fill(int i, int j)
{
  //marcam cu o valoare convenabila
    A[i][j]=2;
    //cautam urmatorul vecin
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
            if(A[i][j]==1)  //pentru fiecare continent nou gasit nemarcat
            {
                cnt++;
                fill(i,j); //umplem
            }
    cout<<cnt;
    return 0;
}
