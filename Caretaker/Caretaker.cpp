#include "Caretaker.hpp"

void Caretaker::SaveMemento(const Memento &_memento)
{
    memento = _memento;
}

Memento Caretaker::GetMemento() const
{
    return memento;
}