#include <iostream>

using namespace std;

int suma(int v[],int n)
{
    if(n==1) return v[0];
    else return v[n-1]+suma(v,n-1);
}

void suma2(int v[], int n, int &s)
{
    if(n==1) s=v[0];
    else
    {
        suma2(v,n-1,s);
        s=s+v[n-1];
    }
}

int sumcif(int n)
{
    if(n<10) return n;
    return sumcif(n/10)+n%10;
}

void sumcif2(int n, int &s)
{
    if(n<10) s=n;
    else
    {
        sumcif2(n/10,s);
        s=s+n%10;
    }
}

int nk(int n, int k)
{
    if(n<10) return n==k;
    return n%10==k + nk(n/10,k);
}

void nk2(int n, int k, int &cnt)
{
    if(n<10) cnt=(n==k);
    else
    {
        nk2(n/10,k,cnt);
        if(n%10==k) cnt++;
    }
}

int cmmdc(int a, int b)
{
    if(b==0) return a;
    else return cmmdc(b,a%b);
}

void cmmdc2(int a, int b, int &D)
{
    if(b==0) D=a;
    else
    {
        cmmdc2(b,a%b,D);
    }
}

int main()
{
    int sdanl;
    int n=6567856,v[]={5, 10, 6, 3, 5, 5};
    //suma2(v,n,sdanl);
    //nk2(n,5,sdanl);
    cmmdc2(25,15,sdanl);
    cout<<sdanl;
    return 0;
}
