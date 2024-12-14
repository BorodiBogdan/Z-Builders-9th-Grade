#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

stack <int>S;

int n;
string op;

int ncif(int n)
{
    if(n<10) return 1;
    return 1+ncif(n/10);
}

struct NUME{ ///cum se numeste tipul de date
    int n;
    short int nCif;
    bool par;
    char cuv[30];   ///campuri
}var, V[101],M[101][101]; ///zona declarativa


int main()
{
    /*
        for(int i=0;i<s.size();i++)
        {
            lucrez cu fiecare caracter
        }
    */
    cin>>var.n>>var.cuv;

    var.nCif=ncif(var.n);
    var.par=!(var.n&1);

    cout<<var.n<<" "<<var.nCif<<" "<<var.par<<" "<<var.cuv;

    return 0;
}
