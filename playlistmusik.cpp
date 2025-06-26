#include <iostream>
#include <string>
using namespace std;

struct Lagu {
    string judul;
    string penyanyi;
    Lagu* next;
};
Lagu* head = nullptr;
void tambahLagu(string judul, string penyanyi) {
    Lagu* laguBaru = new Lagu{judul, penyanyi, nullptr};

    if (head == nullptr) {
        head = laguBaru;
    } else {
        Lagu* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = laguBaru;
    }
    cout << "Lagu \"" << judul << "\" oleh " << penyanyi << " ditambahkan.\n";
}
void tampilkanPlaylist() {
    if (head == nullptr) {
        cout << "Playlist kosong.\n";
        return;
    }

    Lagu* temp = head;
    int nomor = 1;
    cout << "\n=== Daftar Lagu ===\n";
    while (temp != nullptr) {
        cout << nomor++ << ". " << temp->judul << " - " << temp->penyanyi << endl;
        temp = temp->next;
    }
}
void hapusLagu(string judul) {
    Lagu* temp = head;
    Lagu* prev = nullptr;

    while (temp != nullptr && temp->judul != judul) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Lagu \"" << judul << "\" tidak ditemukan.\n";
        return;
    }

    if (prev == nullptr) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Lagu \"" << judul << "\" telah dihapus.\n";
}
int main() {
    int pilihan;
    string judul, penyanyi;


    do {
        cout << "\n===== Playlist Musik =====\n";
        cout << "1. Tambah Lagu\n";
        cout << "2. Tampilkan Playlist\n";
        cout << "3. Hapus Lagu\n";
        cout << "4. Cari Lagu\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore(); // Menghindari masalah getline setelah cin

        switch (pilihan) {
            case 1:
                cout << "Judul Lagu: ";
                cout << "Penyanyi: ";
                break;
            case 2:
                break;
            case 3:
                cout << "Masukkan judul lagu yang ingin dihapus: ";
                break;
            case 4:
                cout << "Masukkan judul lagu yang dicari: ";
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 5);

    return 0;
}