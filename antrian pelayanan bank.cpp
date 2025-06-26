int main() {
    AntrianBank antrian;
    int pilihan;
    string nama;

    do {
        cout << "\n===== Menu Antrian Bank =====\n";
        cout << "1. Tambah Nasabah (Enqueue)\n";
        cout << "2. Layani Nasabah (Dequeue)\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama nasabah: ";
                cin.ignore(); // Penting agar getline bekerja setelah cin
                getline(cin, nama);
                antrian.enqueue(nama);
                break;
            case 2:
                antrian.dequeue();
                break;
            case 3:
                antrian.tampilkanAntrian();
                break;
            case 4:
                cout << "Terima kasih.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}