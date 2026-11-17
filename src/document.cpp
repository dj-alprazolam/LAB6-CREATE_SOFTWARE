#include"includes/document.hpp"
#include<fmt/core.h>
#include<memory>
#include<string>
#include"includes/circle.hpp"
#include"includes/square.hpp"

document::document(int id) : id_(id) {}

int document::getId() const {
    return id_;
}

void document::addprimitive(std::unique_ptr<primitiv> Primitive) {
    primitiv_.push_back(std::move(Primitive));
}

bool document::deletePrimitive(std::string& deletedName) {
    if (!primitiv_.empty()) {
        deletedName = primitiv_.back()->getName();
        primitiv_.pop_back();
        return true;  
    }
    return false;  
}

void document::exportdocument(const std::string &file) {
}

bool document::importDocument(const std::string& file, int& importedCount) {
    
    primitiv_.push_back(std::make_unique<circle>());
    primitiv_.push_back(std::make_unique<square>());
    primitiv_.push_back(std::make_unique<circle>());
    
    importedCount = 3;  
    return true;  
}