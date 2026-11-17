#pragma once
#include"includes/primitiv.hpp"
#include<string>
#include<fmt/core.h>

class square : public primitiv
{
public:
    std::string getName() const override;
    void draw() const override;
};


