#include <iostream>
#include <string>
using namespace std;
// clase si obiecte

class Animal
{
    // nu pot accesa in afara clasei
protected:
    int varsta, greutate;
    string culoare, nume;

    // pot accesa oriunde
public:
    // Constructor
    Animal()
    {
        this->varsta = 0;
        this->greutate = 0;
        this->culoare = "";
    }
    Animal(int varsta)
    {
        this->varsta = varsta;
        this->greutate = 0;
        this->culoare = "";
    }
    Animal(int varsta, int greutate, string culoare, string nume)
    {
        this->varsta = varsta;
        this->greutate = greutate;
        this->culoare = culoare;
        this->nume = nume;
    }
    int getGreutate()
    {
        return this->greutate;
    }
    string getCuloare()
    {
        this->culoare;
    }
    int getVarsta()
    {
        return varsta;
    }
    void sunetDeAnimal()
    {
        cout << "Sunt un animal";
    }
};

class Tigru : public Animal // inheritance(mostenire)
{
public:
    Tigru() = default;
    Tigru(int varsta, int greutatea, string culoare, string numele)
    {
        this->varsta = varsta;
        this->greutate = greutate;
        this->culoare = culoare;
        this->nume = numele;
    }
    string toString()
    {
        return "Tigru varsta: " + to_string(varsta) + " culoare: " + culoare + "nume " + nume;
    }
    void sunetDeAnimal2()
    {
        cout << "Sunt un tigru";
    }
};
class Leu : public Animal // inheritance(mostenire)
{
public:
    Leu() = default;
    Leu(int varsta, int greutatea, string culoare, string numele)
    {
        this->varsta = varsta;
        this->greutate = greutate;
        this->culoare = culoare;
        this->nume = numele;
    }

    string toString()
    {
        return "Leu varsta: " + to_string(varsta) + " culoare: " + culoare + "nume " + nume;
    }
    void sunetDeAnimal2()
    {
        cout << "Sunt un tigru";
    }
};

class Cusca
{
private:
    Tigru listaCuTigri[100];
    Leu listaCuLei[100];
    int dimensiuneListaTigri;
    int dimensiuneListaLei;

public:
    Cusca()
    {
        this->dimensiuneListaLei = 0;
        this->dimensiuneListaTigri = 0;
    }
    void adaugaLeu(Leu a)
    {
        listaCuLei[dimensiuneListaLei] = a;
        dimensiuneListaLei++;
    }
    void adaugaTigru(Tigru a)
    {
        listaCuTigri[dimensiuneListaTigri] = a;
        dimensiuneListaTigri++;
    }
    void arataTigri()
    {
        for (int i = 0; i < dimensiuneListaTigri; ++i)
            cout << listaCuTigri[i].toString() << "\n";
    }
    void arataLei()
    {
        for (int i = 0; i < dimensiuneListaLei; ++i)
            cout << listaCuLei[i].toString() << "\n";
    }
};

int main()
{
    cout << "Cate animale sunt la gradina zoologica: ";

    int nrAnimale;

    cin >> nrAnimale;

    Cusca gradinaZoologicaTgMures;

    for (int i = 1; i <= nrAnimale; ++i)
    {
        int op;
        cout << "1.Leu\n2.Tigru'n";

        cin >> op;

        cout << "varsta: ";
        int v;
        cin >> v;
        cout << "greutate: ";
        int g;
        cin >> g;
        cout << "culoare: ";
        string c;
        cin >> c;
        cout << "nume: ";
        string n;
        cin >> n;

        if (op == 1)
        {
            Leu leulMeu = Leu(v, g, c, n);
            gradinaZoologicaTgMures.adaugaLeu(leulMeu);
        }
        else
        {
            Tigru tigrulMeu = Tigru(v, g, c, n);
            gradinaZoologicaTgMures.adaugaTigru(tigrulMeu);
        }
    }

    gradinaZoologicaTgMures.arataLei();
    gradinaZoologicaTgMures.arataTigri();
}
