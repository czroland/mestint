#include <iostream>

class Kancso {
protected:
    int allapot[3];
    int meret[3];
    int celmennyiseg;

public:
    void feltolt(int a[3], int m[3], int c);

    void atont(int a, int b);
};

void Kancso::atont(int a, int b) {
    if (allapot[a] != 0 && allapot[b] != meret[b]) {
        allapot[a] -= std::min(allapot[a], meret[b] - allapot[b]);
        
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}