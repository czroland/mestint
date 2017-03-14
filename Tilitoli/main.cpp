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
    return 1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}