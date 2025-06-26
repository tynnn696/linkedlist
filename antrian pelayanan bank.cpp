void tampilkanAntrian() {
        if (front == nullptr) {
            cout << "Antrian kosong.\n";
            return;
        }

        Node* temp = front;
        cout << "Daftar antrian nasabah:\n";
        int no = 1;
        while (temp != nullptr) {
            cout << no++ << ". " << temp->nama << endl;
            temp = temp->next;
        }
    }