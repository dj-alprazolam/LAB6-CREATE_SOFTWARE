#pragma once 
#include<memory>
#include<vector>
#include"includes/primitiv.hpp"
#include<string>
#include<fmt/core.h>

class document
{
private:
    int id_;
    std::vector<std::unique_ptr<primitiv>> primitiv_;
public:
    int getId()const;
    explicit document(int id);
    void exportdocument(const std::string &file);
    void importdocument(const std::string &file);
    void addprimitive(std::unique_ptr<primitiv> Primitive);
    bool deletePrimitive(std::string& deletedName);
    bool importDocument(const std::string& file, int& importedCount);
    
}; 
