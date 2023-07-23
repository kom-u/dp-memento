#pragma once

#include <string>

template <typename T>
class Memento
{
public:
    explicit Memento(const T &state) : state_(state) {}

    T GetState() const
    {
        return state_;
    }

private:
    T state_;
};
