#include <iostream>
#include <cstring>
using namespace std;

char s[100];

void reverse(char *s)
{
    for(int l=0,r=strlen(s)-1;l<r;l++,r--) swap(s[l],s[r]);
}

int main()
{
    /*
        strchr(string s, caracter c) -> cauta in s caracterul c

        strstr(string s, string find) -> cauta stringul find in stringul s

        toupper(caracter c) -> transfroma din litera mica/mare in litera mare
        tolower(caracter c) -> transfroma din litera mica/mare in litera mica

        strlen(string s) -> returneaza lungimea sirului s fara caracterul null

        strcat(strins des, string s) -> insereaza la finalul lui des sirul s
        strncat(string des, string s, int n) -> insereaza in des primele n caractere din s

        strcpy(string des, string s) -> copiaza sirul s in des
        strncpy(string des, sting s, int n) ->copiaza in des primele n caractere din s

        strtok()

        char *token=strtok(s, sep) s -> propozitia; sep -> separatorii
        while(token!=NULL) // in token avem cuvintele pe rand
        {
            //prelucram cuvantul
            token=strtok(NULL, sep); //trecem la urmatorul cuvant, daca nu mai exista token va avea val NULL
        }
        
        for(int i=0;s[i];++i)
        if(strchr("aeiou",s[i])) -cautam
        {
            char aux[256]="";
            strcpy(aux,s+i+3); -copiem in aux sirul s de la poz i+3
            strcpy(s+i+1,aux); -copiem in s de la poz i+1 sirul aux
        }


    */

    cin.getline(s,100);
    bool ok=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char cuvant[100];
        cin>>cuvant;
        if(strstr(s,cuvant)!=0) ok=1;
    }
    if(strstr(s,"virus")!=0 || ok==1) cout<<"DA";
    else cout<<"NU";
    return 0;
}
