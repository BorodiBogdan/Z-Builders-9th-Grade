// pbinfo pb #2205

#include <fstream>
#include <cstring>
using namespace std;

ifstream cin("permrep.in");
ofstream cout("permrep.out");

char s[10],x[10]="";
int n,F[125];


void back(int k)
{
    for(char c='a';c<='z';c++)
        if(F[c]>0)
        {
            x[k-1]=c; ///punem la poz K-1 pt ca e sir de caractere
            x[k]='\0'; 
            F[c]--;
            if(k==n) cout<<x<<'\n';
            else back(k+1);
            x[k-1]='\0'; ///scoatem din vec sol caracterul generat la pasul curent (nu e necesar)
            F[c]++;
        }
}

int main()
{
    cin>>s;
    n=strlen(s);
    for(int i=0;s[i];++i) F[s[i]]++; //calculam frecvenetele tuturor elementelor din codomeniu
    back(1);
    return 0;
}
