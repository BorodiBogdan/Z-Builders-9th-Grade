#include <iostream>
using namespace std;

int main() {
    ///1 5 2 3 100 --> s = 111
    int n1, n2, n3, n4, n5;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int s = n1 + n2 + n3 + n4 + n5;

    ///calculam primul minim si sa tinem minte ce valoare devine minimul

    int mini1 = n1;
    int tinem_minte = 1;

    if(n2 <= mini1){
        mini1 = n2;
        tinem_minte = 2;
    }

    if(n3 <= mini1){
        mini1 = n3;
        tinem_minte = 3;
    }

    if(n4 <= mini1){
        mini1 = n4;
        tinem_minte = 4;
    }

    if(n5 <= mini1){
        mini1 = n5;
        tinem_minte = 5;
    }

   ///am terminat de calculat primul minim
	s -= mini1;
    
   int mini2 = 20000000;
	//calculam al doilea minim

   if(n1 <= mini2 && tinem_minte != 1)
        mini2 = n1;

   if(n2 <= mini2 && tinem_minte != 2)
        mini2 = n2;

    if(n3 <= mini2 && tinem_minte != 3)
        mini2 = n3;

    if(n4 <= mini2 && tinem_minte != 4)
        mini2 = n4;
    
    if(n5 <= mini2 && tinem_minte != 5)
        mini2 = n5;

    s -= mini2;

    cout << s;

    return 0;
}
