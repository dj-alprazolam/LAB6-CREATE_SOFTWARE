#pragma once 
#include"includes/circle.hpp"
#include"includes/document.hpp"
#include"includes/square.hpp"
#include"includes/View.hpp"
#include<string>
#include<vector>
#include<fmt/core.h>
#include<memory>

class controller
{
private:
    std::unique_ptr<document> Document_;
    std::unique_ptr<View> viev_;
public:
    explicit controller(std::unique_ptr<View> viVe);
    void newDoc(int id);
    void addPrimitive(std::unique_ptr<primitiv> Primitive);
    void deletePrimitiv();
    void importDocument(const std::string& file);
    void exportDoc(const std::string& name);


};


