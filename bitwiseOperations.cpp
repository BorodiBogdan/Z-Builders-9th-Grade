#include <iostream>
using namespace std;

int main()
{
    // pentru conversia din baza 10 in baza 2 se imparte repetat la 2
    // se iau resturile in sens invers
    // 33
    // 33 / 2 = 16 r 1
    // 16 / 2 = 8 r 0
    // 8 / 2 = 4 r 0
    // 4 / 2 = 2 r 0
    // 2 / 2 = 1 r 0
    // 1 / 2 = 0 r 1

    // 33 = 100001(2)

    // 1   0     0     0     0    1(2)

    // 2^5  2^4  2^3   2^2   2^1   2^0
    // 2^5 * 1 + 2 ^ 4 * 0 + 2 ^3 * 0 + 2 ^ 2 * 0 + 2 ^ 1 * 0 + 2 ^ 0 * 1
    // 32 + 1 = 33

    // int, long long, char -> au un interval pe care pot fi reprezentate
    // int -> [-2^31, 2 ^ 31 - 1]
    // unsigned int -> [0, 2 ^ 32 - 1]

    // exemplu: int este reprezentat pe 32 de biti
    //  00000000000000000000000000100001 = 32 pe int

    // & -> and(si)

    // puteti sa va ganditi la 1 ca la true si la 0 ca la false
    //  1 & 0 -> 0
    //  1 & 1 -> 1
    //  0 & 1 -> 0
    //  0 & 0 -> 0

    // | -> or(sau)
    // 1 | 0 -> 1
    // 1 | 1 -> 1
    // 0 | 1 -> 1
    // 0 | 0 -> 0

    //^ -> xor
    // 1 ^ 0 -> 1
    // 1 ^ 1 -> 0
    // 0 ^ 1 -> 1
    // 0 ^ 0 -> 0

    // << -> shiftare de biti la stanga
    // 1 << 4;
    // 1 / 2 = 0 r 1
    // 1 -> 1(2)
    // 10000

    // >> -> shiftare de biti la dreapta
    // 33 = 100001(2)
    // 33 >> 4 -> 10(2)
    // 33 >> 4 -> 2

    //~ -> invarte toti biti unui numar
    //~(5) -> ~(101(2)) -> 010(2) -> 2

    // 5 reprezentat pe int 00000000....00000101
    // ~5 -> 111111111...11010

    //1110(2) -> 14
    //shiftam la dreapta 2 pozitii
    //1110(2) >> 2 -> 11(2)
}
