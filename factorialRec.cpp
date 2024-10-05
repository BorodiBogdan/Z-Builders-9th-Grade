#include <iostream>

using namespace std;

int f(int n)
{
    int p=1;
    while(n>0)
    {
        p=p*n;
        n--;
    }
    return p;
}

int factorial(int n)
{
    if(n==0) return 1;
    return factorial(n-1)*n;
}

int main()
{
    cout << factorial(6) << endl;
    return 0;
}
