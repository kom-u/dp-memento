#pragma once

#include <iostream>

#include "../Memento/Memento.hpp"

class Originator
{
private:
    std::string state;

public:
    void SetState(const std::string &_state);

    std::string GetState() const;

    // Membuat Memento berdasarkan keadaan internal saat ini
    Memento CreateMemento();

    // Mengembalikan keadaan internal berdasarkan Memento
    void RestoreMemento(const Memento &m);
};