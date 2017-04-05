#include <iostream>

class Hanoi {

protected:
    char V[4] = "AAA";
public:
    int atrak(int mit, char hova);

};

int Hanoi::atrak(int mit, char hova) {

    /*Ha van olyan korong, mely kisebb, mint amit at akarunk tenni,
     * es az a korong azon a rudon van, amelyrről akarunk tenni
     * vagy azon a rudon ahova tenni akarunk a legfelso korong
     * kissebb mint amit tennenk akkor nem tehetunk at korongot*/

    for (int k = 0; k < 3; k++)
        if (((k < mit) && V[k] == V[mit - 1]) || (V[k] == hova && mit - 1 >= k))
            return 0;
    V[mit - 1] = hova;
    return 1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}