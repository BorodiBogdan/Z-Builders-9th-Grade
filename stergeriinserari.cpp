#include <iostream>
using namespace std;

//void --> doar executa cod  --> f(2) -->doar o sa execute codul din interior
//int, long long float --> returneaza f(2) --> o sa aiba o valoare

void stergere(int V[], int &n, int p){//se lucreaza cu o copie a parametrilor
    //V --> vectorul
    //n --> este lungimea
    //p --> pozitia pe care vreau sa o sterg

    for(int i = p; i < n; i++)
        V[i] = V[i + 1];
    
    n = n - 1;//lungimea devine mai mica deoarece am sters un element
}
//se efectueaza adaugarea elementului x pe pozitia p in vectorul V cu n elemente
void adaugare(int V[], int &n, int p, int x){
    for(int i = n + 1; i > p; i--)
        V[i] = V[i - 1];//aducem toate elementele mai la dreapta cu o pozitie
    
    V[p] = x;
    n++;//am adaugat un element
}
void Afisare(int V[], int n)
{
    for(int i = 1; i <= n; ++i)
        cout << V[i] << " ";
    
    cout << "\n";
}
int main()
{   
    int n;
    int V[101];

    cin >> n;

    for(int i = 1; i <= n; ++i)
        cin >> V[i];
    
    stergere(V, n, 3);
    Afisare(V, n);
    stergere(V, n, 1);
    Afisare(V, n);
    adaugare(V, n, 1, 1);
    Afisare(V, n);
    adaugare(V, n, 3, 3);
    Afisare(V, n);
    

    return 0;
}
