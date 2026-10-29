#pragma once
#include<string>
#include<fmt/core.h>

class Viev
{
public:
    virtual ~Viev() = default;
    virtual void massageShow(const std::string& massage ) = 0;
};

class viev : public Viev
{
public:
    void massageShow(const std::string& massage) override{
        fmt::print("Сообщение {}\n", massage);
    }

};

