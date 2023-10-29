#include <iostream>///pentru cin, cout
#include <fstream>///pentru citirea din fisiere

using namespace std;

///libraria aceasta ne ajuta sa citim din fisiere

ifstream fin("x.in");///i de la in I fstream
ofstream fout("x.out");///o de la out O fstream

int main(){

    int n, x;

    fin >> n;

    for(int i = 1; i <= n; ++i){
        fin >> x;

        fout << x << " ";
    }

    return 0;
}
