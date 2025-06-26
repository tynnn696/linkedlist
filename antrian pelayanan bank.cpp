// Kelas Queue menggunakan linked list
class AntrianBank {
private:
    Node* front;
    Node* rear;

public:
    // Konstruktor
    AntrianBank() {
        front = rear = nullptr;
    }