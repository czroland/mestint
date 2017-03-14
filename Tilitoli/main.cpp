#include <iostream>

class Tilitoli {
protected:
    int m[3][3];
public:
    void ertekadas(int m2[3][3]);

    int ellenorzes();

    int le();

    int fel();

    int jobb();

    int bal();
};

void Tilitoli::ertekadas(int m2[3][3]) {

    for (int i = 0; i != 3; i++)
        for (int j = 0; j != 3; j++)
            m[i][j] = m2[i][j];
}

int Tilitoli::ellenorzes() {

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int s = 0; s < 3; s++)
                for (int o = 0; o < 3; o++)
                    if ((i != s || j != o) && (m[i][j] == m[s][o]))
                        return 0;
    return 1;
}


int main() {

    Tilitoli tilitoli;
    
    int m2[3][3] = {1, 2, 0,
                    4, 6, 3,
                    7, 5, 8};

    tilitoli.ertekadas(m2);

    return 0;
}