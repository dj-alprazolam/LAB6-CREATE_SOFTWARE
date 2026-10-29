#pragma once
#include<string>
class primitiv
{
public:
    virtual ~primitiv() = default;
    virtual std::string getName() const = 0;
    virtual void draw() const = 0;
};


