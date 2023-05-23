#pragma once

#include "../Memento/Memento.hpp"

class Caretaker
{
private:
    Memento memento;

public:
    void SaveMemento(const Memento &m);

    Memento GetMemento() const;
};
