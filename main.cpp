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
  // Jika program berjalan pada arsitektur linux
  #ifdef linux
    system("clear");
  #endif

  // Jika program berjalan pada arsitektur windows
  #ifdef _WIN32
    system("CLS");
  #endif
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

    if (perintah == "Percakapan" || perintah == "percakapan") {
      int menu_percakapan;
      clear();
      cout << "~ Membantu Percakapan Anda Lebih Formal ~" << endl;
      cout << "1. Kalimat untuk membuka percakapan " << endl;
      cout << "2. Kalimat untuk menutup percakapan" << endl;
      cout << "3. Kalimat untuk menyanggah" << endl;
      cout << "4. kalimat yang digunakan saat menggangu orang" << endl;


      cout << endl << "Silahkan Pilih Menu : ";
      cin >> menu_percakapan;

      switch (menu_percakapan) {
        case 1:
            clear();
            cout << "KALIMAT UNTUK MEMBUKA PERCAKAPAN" << endl << endl;
            cout << "1. Selamat pagi/siang/sore/malam. Perkenalkan nama saya " << nama << endl;
            cout << "2. Selamat pagi/siang/sore/malam. Pak/Bu, nama saya " << nama << endl;
            cout << "3. Selamat pagi/siang/sore/malam. Maaf saya " << nama << ",rasanya kita pernah bertemu sebelumnya" << endl;
            cout << "4. Selamat pagi/siang/sore/malam. Apakah ada yang bisa saya bantu?" << endl;
            cout << "5. Permisi, apakah benar anda dengan Bapak/Ibu (nama tujuan)" << endl;
            cout << "6. Salam kenal Pak/Bu, nama saya " << nama << endl;
        break;

        case 2 :
            cout << "KALIMAT UNTUK MENUTUP PERCAKAPAN" << endl << endl;
            cout << "1. Terima kasih atas kesempatan yang diberikan pada hari ini." << endl;
            cout << "2. Terima kasih atas Kunjungan Bapak/Ibu/dari Yayasan/Insan/Perusahaan/Organisasi.." << endl;
            cout << "3. Saya merasa senang dapat berkenalan dengan anda, sampai jumpa lain waktu." << endl;
            cout << "4. Saya harap kita dapat bertemu di lain waktu." << endl;
            cout << "5. Sekian dari saya terima kasih." << endl;
        break;

        case 3 :
            cout << "KALIMAT UNTUK MENYANGGAH" << endl << endl;
            cout << "1. Senang berbicara dengan anda/saudara, tetapi saya harus...." << endl;
            cout << "2. Mungkin kita bisa melanjutkan pembicaraan ini di lain waktu. Maaf ya." << endl;
            cout << "3. Bagaimana jika kita berbicara lagi nanti. Karena… (apa alasanmu)" << endl;
            cout << "4. Maaf saat ini saya ada keperluan, kita lanjutkan di lain kesempatan." << endl;
        break;

        case 4 :
            cout << "KALIMAT YANG DIGUNAKAN SAAT MENGGANGU ORANG" << endl;
            cout << "1. Maaf, saya/kami/kita telah mengganggu kesibukan anda, terima kasih." << endl;
            cout << "2. Terima kasih atas waktu yang telah diberikan/diluangkan." << endl;
            cout << "3. Maaf, telah menyita waktu anda/Bapak/Ibu" << endl;
            cout << "4. Maaf, telah merepotkan…" << endl;
        break;

        default :
            cout << "Tidak ada menu yang dimaksud" << endl;
        break;

      }
    }

    if (perintah == "hai" || perintah == "halo" || perintah == "hallon") {
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

    if (perintah == "xSystemInfo" || perintah == "xsysteminfo") {
        // Jika program berjalan pada arsitektur linux
        #ifdef linux
            cout << "Hai " << nama << " kamu sedang menjalankan program ini pada OS Linux" << endl;
        #endif

        // Jika program berjalan pada arsitektur windows
        #ifdef _WIN32
            cout << "Hai " << nama << " kamu sedang menjalankan program ini pada OS Windows" << endl;
        #endif
    }


    if (perintah == "xSorting" || perintah == "xsorting") {
      clear();

      int pilih;

      cout << "~ Sorting Data ~" << endl << endl;
      cout << "1. Pengurutan Kata" << endl;
      cout << "2. Kembali ke Bot" << endl;
      cout << endl << "Masukan Menu : ";
      cin >> pilih;

      switch (pilih) {
      case 1:
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

      case 2:
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
      cout << "xCari Planet\t\tuntuk mencari urutan planet" << endl;
      cout << "xsorting\t\tuntuk membuka menu pengurutan data" << endl;
      cout << "Percakapan\t\tuntuk Membantu Percakapan Anda Lebih Formal " << endl;
    }

    // Akhir kamus

    cout << endl;

  }

}
