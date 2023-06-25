#include <iostream>
using namespace std;

int main() {
    string password = "password";
    string input;
    int tries = 0;

    while (tries < 3) {
        cout << "Masukkan kata sandi: ";
        cin >> input;

        if (input == password) {
            cout << "Selamat datang!" << endl;
            break;
        } else {
            tries++;
            cout << "Kata sandi salah. Anda memiliki " << 3 - tries << " kesempatan lagi." << endl;
        }
    }

    if (tries == 3) {
        cout << "Anda telah mencoba sebanyak 3 kali. Program akan keluar." << endl;
    }

    return 0;
}  