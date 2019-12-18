#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;
string nama;
char input[256];

// Fungsi menghilangkan spasi
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

void clear() {
    system ("clear");
    system ("CLS");
}

int main()
{
    for(int i=1; i++; i++) {
    // Muncul ketika variabel nama masih kosong
    if(nama == "") {
        cout << "Masukan Namamu : ";
        cin >> nama;
        clear();
    }

    mulai:
    cout << "Me : " << endl;
    cout << " \t";
    cin.getline (input,256);


    cout << "\nTimoy :" << endl;
    //cout << "\t";

    // Menghilangkan spasi
    string perintah = removeSpaces(input);

    // Kamus disini

    if(perintah == "hai" || perintah == "halo") {
        cout << "Hai juga " << nama << endl;
    }

    if(perintah == "selamatsiang") {
        cout << "Selamat siang juga " << nama << endl;
    }

    if(perintah == "selamatpagi") {
        cout << "Selamat pagi juga " << nama << endl;
    }

    if(perintah == "selamatsore") {
        cout << "Selamat sore juga " << nama << endl;
    }

    if(perintah == "xSorting" || perintah == "xsorting") {
        clear();

        int pilih;

        cout << "~ Sorting Data ~" << endl << endl;
        cout << "1. Pengurutan Angka" << endl;
        cout << "2. Pengurutan Kata" << endl;
        cout << "3. Kembali ke Bot" << endl;
        cout << endl << "Masukan Menu : ";
        cin >> pilih;

        switch(pilih) {
            case 1:
            cout << "Pengurutan Angka" << endl;
            break;

        case 2:
            cout << "Pengurutan Angka" << endl;
            break;

        case 3:
            clear();
            goto mulai;
            break;

        default:
            cout << "Tidak ada menu yang dimaksud" << endl;
            break;
        }
    }

    if(perintah == "xClear" || perintah == "xclear") {
        clear();
    }

    if(perintah == "xClose" || perintah == "xclose") {
        clear();
        cout << "Good Bye :( " << endl << endl;
        return 0;
    }

    if(perintah == "help") {
        clear();
        cout << "Bantuan Bot" << endl << endl;

        cout << "Perintah\t\tKeterangan" << endl;
        cout << "x<perintah>\t\tuntuk menjalankan suatu program / perintah" << endl;
        cout << "xClear\t\t\tuntuk membersihkan layar dari teks" << endl;
        cout << "xClose\t\t\tuntuk keluar dari program" << endl;
        cout << "Selamat Pagi\t\tuntuk mencetak respon balikan selamat pagi" << endl;
    }

    // Akhir kamus

    cout << endl;

    }

}
