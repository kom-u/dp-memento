#include "lib.hpp"

int main()
{
    Document document("Initial content");
    std::cout << "Current content\t\t: " << document.GetContent() << std::endl;

    // Save the current state as a Memento
    Memento<std::string> memento = document.CreateMemento();

    // Modify the content
    document.SetContent("Updated content");
    std::cout << "Updated content\t\t: " << document.GetContent() << std::endl;

    // Restore the content from the Memento
    document.Restore(memento);
    std::cout << "Restored content\t: " << document.GetContent() << std::endl;

    return 0;
}
