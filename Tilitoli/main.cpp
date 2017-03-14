#include <iostream>
#include <conio.h>

#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100

class Tilitoli {
protected:
    int m[3][3];
    int x;
    int y;
public:
    void ertekadas(int m2[3][3]);

    int ellenorzes();

    void kiir();

    void hely();

    void le();

    void fel();

    void jobb();

    void bal();
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
                    if ((i != s || j != o) && (m[i][j] == m[s][o])) {
                        std::cout << "Hiba az ellenorzes soran";
                        return 0;
                    }
    return 1;
}

void Tilitoli::kiir() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            std::cout << m[i][j] << ' ';
        std::cout << std::endl;
    }
}

void Tilitoli::hely() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (m[i][j] == 0) {
                x = i;
                y = j;
            }
}

void Tilitoli::le() {
    hely();
    if (x != 2) {
        m[x][y] = m[x + 1][y];
        m[x + 1][y] = 0;
    }
    ellenorzes();
}

void Tilitoli::fel() {
    hely();
    if (x != 0) {
        m[x][y] = m[x - 1][y];
        m[x - 1][y] = 0;
    }
    ellenorzes();
}

void Tilitoli::bal() {
    hely();
    if (y != 0) {
        m[x][y] = m[x][y - 1];
        m[x][y - 1] = 0;
    }
    ellenorzes();
}

void Tilitoli::jobb() {
    hely();
    if (y != 2) {
        m[x][y] = m[x][y + 1];
        m[x][y + 1] = 0;
    }
    ellenorzes();
}

int main() {

    Tilitoli tilitoli;

    int m2[3][3] = {1, 2, 0,
                    4, 6, 3,
                    7, 5, 8};

    tilitoli.ertekadas(m2);

    tilitoli.kiir();


    int c = 0;
    while (1) {
        c = 0;

        switch ((c = getch())) {
            case KEY_UP:
                tilitoli.fel();
                tilitoli.kiir();
                break;
            case KEY_DOWN:
                tilitoli.le();
                tilitoli.kiir();
                break;
            case KEY_LEFT:
                tilitoli.bal();
                tilitoli.kiir();
                break;
            case KEY_RIGHT:
                tilitoli.jobb();
                tilitoli.kiir();
                break;
            default:
                break;
        }

    }

    return 0;
}