#pragma once
#include"includes/primitiv.hpp"
#include<fmt/core.h>
#include<string>
class circle : public primitiv
{
public:
    std::string getName() const override;
    void draw() const override;

};

