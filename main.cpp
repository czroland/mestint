#include <iostream>
#include <cstdlib>

class Nkiralyno {
protected:
    int t[8][8] = {0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0, 0,};
public:
    int felrak(int i, int j);
};

int Nkiralyno::felrak(int i, int j) {
    //Ha a mezo nem ures, v utesben van nem tudunk feltenni
    if (t[i][j] != 0 || t[i][j] == 2) return 0;

    //ha a felteves lehetseges a megfelelo mezok foglaltta tevese
    for (int k = 0; k < 8; k++) {
        //sor es oszlop
        t[i][k] = 2;
        t[k][j] = 2;
        //atlo
        for (int l = 0; l < 8; l++)
            if (std::abs(i - k) == std::abs(j - l))
                t[k][l] = 2;
    }
    t[i][j] = 1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}