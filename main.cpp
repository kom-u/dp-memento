#include "lib.hpp"

int main()
{
    Originator originator;
    Caretaker caretaker;

    // Mengatur keadaan internal originator
    originator.SetState("Keadaan Awal");
    std::cout << "Keadaan Awal: " << originator.GetState() << std::endl;

    // Simpan keadaan menggunakan caretaker
    caretaker.SaveMemento(originator.CreateMemento());

    // Mengubah keadaan internal originator
    originator.SetState("Keadaan Baru");
    std::cout << "Keadaan Baru: " << originator.GetState() << std::endl;

    // Mengembalikan keadaan sebelumnya menggunakan caretaker
    originator.RestoreMemento(caretaker.GetMemento());
    std::cout << "Keadaan Setelah Restore: " << originator.GetState() << std::endl;

    return 0;
}