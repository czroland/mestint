#include <iostream>
#include <conio.h>

#define ONE_TWO 1
#define ONE_THREE 2
#define TWO_ONE 3
#define TWO_THREE 4
#define THREE_ONE 5
#define THREE_TWO 6


class Kancso {
protected:
    int allapot[3];
    int meret[3];
    int celmennyiseg;

public:
    void feltolt(int a[3], int m[3], int c);

    void atont(int a, int b);

    void kiir();
};

void Kancso::atont(int a, int b) {
    if (allapot[a] != 0 && allapot[b] != meret[b] && allapot[2] != celmennyiseg) {
        int min = std::min(allapot[a], meret[b] - allapot[b]);
        std::cout << "Az attoltes6 lehetseges " << a + 1 << "-bol " << b + 1 << "-be" << std::endl;
        //std::cout << std::min(allapot[a], meret[b] - allapot[b]) << std::endl;
        allapot[a] -= min;
        allapot[b] += min;
    } else
        std::cout << "Az attoltes nem lehetseges " << a + 1 << "-bol " << b + 1 << "-be" << std::endl;
}

void Kancso::feltolt(int a[3], int m[3], int c) {
    for (int i = 0; i < 3; i++) {
        allapot[i] = a[i];
        meret[i] = m[i];
        // std::cout << meret[i];
    }
    celmennyiseg = c;
}

void Kancso::kiir() {
    if (allapot[2] == celmennyiseg)
        std::cout << "Gratulalunk, a 3. kancsoban a " << celmennyiseg << " celmennyiseg szerepel" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << allapot[i] << " ";
    std::cout << std::endl;
}

int main() {

    int a[3] = {0, 0, 5};
    int m[3] = {2, 3, 5};
    int cel = 4;

    Kancso kancso;

    kancso.feltolt(a, m, cel);
    kancso.kiir();


    int c = 0;
    while (1) {
        c = 0;

        switch ((c = getch() - '0')) {
            case ONE_TWO://1
                kancso.atont(0, 1);
                kancso.kiir();
                break;
            case ONE_THREE://2
                kancso.atont(0, 2);
                kancso.kiir();
                break;
            case TWO_ONE://3
                kancso.atont(1, 0);
                kancso.kiir();
                break;
            case TWO_THREE://4
                kancso.atont(1, 2);
                break;
            case THREE_ONE://5
                kancso.atont(2, 0);
                kancso.kiir();
                break;
            case THREE_TWO://6
                kancso.atont(2, 1);
                kancso.kiir();
                break;
            default:
                break;
        }

    }

    return 0;
}