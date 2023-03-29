#include <iostream>
using namespace std;
char** linijka;

void reserve_memory() {
    linijka = new char*[10];
    for (int i = 0; i < 10; i++) {
        linijka[i] = new char[80];
        sprintf(linijka[i], "Linijka nr %d", i);
    }
}

void print_strings() {
    for (int i = 0; i < 10; i++) {
        cout << linijka[i] << endl;
    }
}

void swap_strings(int a, int b) {
    char* temp = linijka[a];
    linijka[a] = linijka[b];
    linijka[b] = temp;
}

void deallocate_memory() {
    for (int i = 0; i < 10; i++) {
        delete[] linijka[i];
    }
    delete[] linijka;
}

int main() {
    reserve_memory();
    print_strings();
    cout << endl;
    swap_strings(2, 5);
    print_strings();
    cout << endl;
    deallocate_memory();
    return 0;
}