#include <iostream>

using namespace std;

int pow(int n, int m)
{
    int p=1;
    while(m>0) {p=p*n; m--;}
    return p;
}

int main()
{
    int n,d=2,cn,p=1;
    cin>>n;
    cn=n;
   /* while(cn>1)
    {
        if(cn%d==0)
        {
            while(cn%d==0) cn=cn/d;
            n=n/d*(d-1); //cu verde
        }
        d++;
        if(d*d>cn && cn>1) d=cn;
    }*/

    while(n>1)
    {
        if(n%d==0)
        {
            int e=0;
            while(n%d==0) {n=n/d; e++;}
            p=p*pow(d,e-1)*(d-1); ///cu mov
        }
        d++;
        if(d*d>n && n>1) d=n;
    }

    cout<<n;
    return 0;
}
