void enqueue(string nama) {
        Node* baru = new Node();
        baru->nama = nama;
        baru->next = nullptr;

        if (rear == nullptr) {
            front = rear = baru;
        } else {
            rear->next = baru;
            rear = baru;
        }

        cout << "Nasabah " << nama << " ditambahkan ke antrian.\n";
    }