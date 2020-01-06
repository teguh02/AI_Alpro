#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <set>

using namespace std;
string nama;
char input[256];

// Fungsi menghilangkan spasi
string removeSpaces(string str) {
  str.erase(remove(str.begin(), str.end(), ' '), str.end());
  return str;
}

// Prosedur cetak abjad
void cetak_abjad(const string & item) {
  cout << item << " ";
}

void clear() {
  system("clear");
  system("CLS");
}

int sequential_search(string data[], int panjang, string key) {
  int posisi, i, ketemu;

  if (panjang <= 0) {
    posisi = -1;
  } else {
    ketemu = 0;
    i = 0;

    while (i < panjang && !ketemu) {
      if (data[i] == key) {
        posisi = i;
        ketemu = 1;
      } else {
        i++;
      }

      if (!ketemu) {
        posisi = -1;
      }
    }
  }

  return posisi;
}

int main() {
  int loop;

  // Mengatur sortedItems sebagai string
  set < string > sortedItems;

  for (int i = 1; i++; i++) {
    // Muncul ketika variabel nama masih kosong
    if (nama == "") {
      cout << "Masukan Namamu : ";
      cin >> nama;
      clear();
    }

    mulai:
      cout << "Me : " << endl;
    cout << " \t";
    cin.getline(input, 256);

    cout << "\nTimoy :" << endl;
    //cout << "\t";

    // Menghilangkan spasi
    string perintah = removeSpaces(input);

    // Kamus disini

    if (perintah == "hai" || perintah == "halo") {
      cout << "Hai juga " << nama << endl;
    }

    if (perintah == "selamatsiang") {
      cout << "Selamat siang juga " << nama << endl;
    }

    if (perintah == "selamatpagi") {
      cout << "Selamat pagi juga " << nama << endl;
    }

    if (perintah == "selamatsore") {
      cout << "Selamat sore juga " << nama << endl;
    }

    if (perintah == "xSorting" || perintah == "xsorting") {
      clear();

      int pilih;

      cout << "~ Sorting Data ~" << endl << endl;
      cout << "1. Pengurutan Angka" << endl;
      cout << "2. Pengurutan Kata" << endl;
      cout << "3. Kembali ke Bot" << endl;
      cout << endl << "Masukan Menu : ";
      cin >> pilih;

      switch (pilih) {
      case 1:
        cout << "Pengurutan Angka" << endl;

        break;

      case 2:
        cout << "Pengurutan Kata" << endl;
        clear();

        cout << "Masukan Perulangan (n) : ";
        cin >> loop;

        // Proses input abjad oleh user
        cout << "\nMasukan Huruf Abjad" << endl;
        cout << "Contoh : a, b, c" << endl;

        // Proses pengurutan abjad menggunakan
        for (int i = 1; i <= loop; ++i) {
          string abjad;
          cout << "Abjad Ke-" << i << " : ";
          cin >> abjad;
          sortedItems.insert(abjad);
        }

        cout << "\n";

        // Proses pengurutan dengan metode Asc
        cout << "Karakter setelah Ascending :\n";
        for_each(sortedItems.begin(), sortedItems.end(), & cetak_abjad);

        cout << "\n\n";

        // Proses pengurutan dengan metode DESC
        cout << "Karakter setelah Descending :\n";
        for_each(sortedItems.rbegin(), sortedItems.rend(), & cetak_abjad);

        cout << "\n";

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

    if (perintah == "xClear" || perintah == "xclear") {
      clear();
    }

    if (perintah == "xClose" || perintah == "xclose") {
      clear();
      cout << "Good Bye :( " << endl << endl;
      return 0;
    }

    if (perintah == "xCariPlanet" || perintah == "xcariplanet") {
      string nama_planet;
      clear();
      cout << "Cari Urutan Planet" << endl;
      cout << "Masukan Nama Planet : ";
      cin >> nama_planet;

      string data[] = {"merkurius", "venus", "bumi", "mars", "jupiter", "saturnus", "uranus", "neptunus"};
      string key = nama_planet;
      int panjang = sizeof(data) / sizeof( * data);

      int posisi = sequential_search(data, panjang, key);

      if (posisi != -1) {
        cout << "Planet " << key << " ada di urutan " << posisi + 1 << " dalam tata surya." << endl;
      } else {
        cout << "Tidak ada data ditemukan dengan kata kunci " << key << endl;
      }
    }

    if (perintah == "help") {
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
