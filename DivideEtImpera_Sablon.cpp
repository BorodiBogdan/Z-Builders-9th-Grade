#include <iostream>

using namespace std;

int DEI(int A[], int st, int dr) ///in ex se numara numarul de zerouri din vector
{
    ///definim cazul trivial
    //cout<<endl;
    if(st==dr)
    {
        /*for(int i=st;i<=dr;i++)
            cout<<A[i]<<" ";*/
        if(A[st]==0) return 1; ///return A[st]==0;
        return 0;
    }
    else
    {
        /*for(int i=st;i<=dr;i++)
            cout<<A[i]<<" ";*/
        int m=(st+dr)/2;
        int p=DEI(A,st,m);
        int q=DEI(A,m+1,dr);


        return p+q;

    }

}


int main()
{
    int A[]={0,2,4,5,8,17,9,0,0,2};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<DEI(A,0,n-1);
    return 0;
}
