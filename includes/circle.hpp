#pragma once
#include"includes/primitiv.hpp"
#include<fmt/core.h>
#include<string>
class circle : public primitiv
{
public:
    std::string getName() const override{
        return"Круг";
    }

    void draw() const override{
        fmt::print("Отрисовка круга\n");
    }

};

