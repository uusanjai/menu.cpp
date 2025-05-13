#include <iostream>
#include <conio.h>
using namespace std;

void insertion_sort(int data[], int n, bool ascending) {
    int temp, j;
    for (int i = 1; i < n; i++) {
        temp = data[i];
        j = i - 1;
        while (j >= 0 && ((ascending && data[j] > temp) || (!ascending && data[j] < temp))) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = temp;
    }
}


void masukkanarray(int data[], int &n) {
    system("cls");
    cout << "Masukkan jumlah array : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    getch();
}


 
void dMenu(){

    system("cls");
    cout<<"Aplikasi Tampilan Menu"<<"\n";
    cout << "1. Masukkan array "<<"\n";   
    cout << "2. Tampilkan Array" << "\n";
    cout << "3. Urutkan Array (Insertion Sort)" << "\n";
    cout << "4. Informasi" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukkan angka 1-5 : ";
}

void tampilkanArray(int data[], int n) {
    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    getch();
}

void info() {
    system("cls");
    cout << "4 SEHAT 5 GAK NAMBAH 6 GAK MUNGKIN 15 MUSTAHILLLL:(  " << endl;
    getch();
}

void urutkanArray(int data[], int n) {
    system("cls");
    char sortPilihan;
    cout << "Pilih urutan pengurutan:\n";
    cout << "a. Ascending\n";
    cout << "b. Descending\n";
    cout << "Pilihan (a/b): ";
    sortPilihan = getch();

    if (sortPilihan == 'a' || sortPilihan == 'A') {
        insertion_sort(data, n, true);
        cout << "\nArray telah diurutkan secara ASCENDING.\n";
    } else if (sortPilihan == 'b' || sortPilihan == 'B') {
        insertion_sort(data, n, false);
        cout << "\nArray telah diurutkan secara DESCENDING.\n";
    } else {
        cout << "\nPilihan tidak valid!\n";
    }

    tampilkanArray(data, n);
}


int main() {
    int data[100], n = 0;
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                system("cls");
                masukkanarray(data, n);
                getch();
                break;
            case '2':
                system("cls");
                cout << "Array: ";
                tampilkanArray(data, n);
                break;
            case '3':
            system("cls");
            urutkanArray(data, n);
            break;
        
            case '4':
                info();
                break;
            case '5':
                system("cls");
                cout << "Keluar dari aplikasi" << endl;
                getch();
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia" << endl;
                getch();
                break;
        }
    } while (pl != '5');

    return 0;
}