void dequeue() {
        if (front == nullptr) {
            cout << "Antrian kosong. Tidak ada nasabah yang dilayani.\n";
            return;
        }

        Node* temp = front;
        cout << "Nasabah " << front->nama << " sedang dilayani dan keluar dari antrian.\n";
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }