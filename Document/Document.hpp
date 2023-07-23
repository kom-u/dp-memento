#pragma once

#include <string>

#include "../Memento/Memento.hpp"

class Document
{
public:
    explicit Document(const std::string &content);

    void SetContent(const std::string &content);

    std::string GetContent() const;

    Memento<std::string> CreateMemento() const;

    void Restore(const Memento<std::string> &memento);

private:
    std::string content_;
};
