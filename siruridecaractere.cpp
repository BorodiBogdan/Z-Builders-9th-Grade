#include <fstream>
#include <cstring>
#include <string.h>
using namespace std;

ifstream fin("x.in");
ofstream fout("x.out");

void copiazaDinBinA(char A[], char B[])
{
    int j = 0;

    while (B[j] != 0)
    {
        A[j] = B[j];
        j++;
    }

    A[j] = 0;
}

int main()
{
    // aici avem un caracter
    char c;
    char Testcuvant[101];

    // asa putem citi tot cuvantul
    fin.getline(Testcuvant, 100);

    fout << Testcuvant << "\n";

    // aici avem un sir de caractere
    char cuvant[101];

    // pentru ca avem un sir de caractere putem sa il citim pe tot
    // ATENTIE CITIREA SE FACE PANA LA SPATIU SAU NEWLINE
    fin >> cuvant;

    // Pentru ca avem un sir de caractere putem acccesa fiecare caracter
    // precum faceam in vector(pentru ca si acesta este un vector)
    for (int i = 0; i < 6; ++i)
        fout << cuvant[i] << "\n";

    // putem afisa tot cuvantul
    // afisarea se face pana cand se gaseste NULL(0) in vectotr
    fout << cuvant << "\n";

    // fiecare caracter este de fapt un numar
    // si putem vedea acest numarul uitandu-ne la tabelul ascii

    //'0' - 30 in cod ascii
    //'0' + 1 - 31 in cod ascii care e de fapt '1'
    // link pt tabelul ascii
    // https://cdn.shopify.com/s/files/1/1014/5789/files/Standard-ASCII-Table_large.jpg?10669400161723642407

    // vreau sa evaluez operatie de plus dintre 2 numere de cate o cifra
    // 1 + 2 asa arata operatia in fisier

    char a, plus, b;

    fin >> a >> plus >> b;

    //
    int valA = a - '0';
    int valB = b - '0';

    fout << a + b << "\n";

    // acestea sunt functii predefinite
    // ca sa putem accesa aceste functii vom introduce biblioteca
    // cstring

    // strlen -> calcuelaza lungimea unui sir
    //  a = "aaab"
    //  -> strlen(a) = 4;
    //  strlenght

    // strcpy
    // -strcopy --> copiaza din sirul a in sirul b

    char testStrcpyA[101];
    char testStrcpyB[101];

    fin >> testStrcpyA;
    fin >> testStrcpyB;

    fout << "In a avem : " << testStrcpyA << '\n';
    fout << "In b avem : " << testStrcpyB << '\n';
    strcpy(testStrcpyB, testStrcpyA);
    // sau copiazaDinBinA(testStrcpyB, testStrcpyA);

    // copiez in b ce am in a

    fout << testStrcpyB << '\n';

    // strcmp
    // strcompare
    // -1  0  1

    char testA[101] = "a";
    char testB[101] = "a";

    fout << strcmp(testA, testB) << "\n";

    // compara numerele lexicografic

    // strcat
    // strconcatenate
    // lipeste un sir de altul
    // a- "abc"
    // b - "acd"
    // strcat(a, b) -> "abcacd" acesta o sa fie a dupa concatenare

    char test1[101] = "abc";
    char test2[101] = "acd";

    strcat(test1, test2);

    fout << test1 << "\n";
}
