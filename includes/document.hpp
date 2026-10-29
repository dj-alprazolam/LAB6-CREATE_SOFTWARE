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
    int getId()const{
        return id_;
    }

    explicit document(int id) : id_(id){
        fmt::print("Создан документ№ {}\n ", id_);
    }
    void exportdocument(const std::string &file)
    {
        fmt::print("Экспорт документа № {} в файл {}\n", id_, file);
    }

    void importdocument(const std::string &file){
        fmt::print("Импорт документа № {} в файл {}\n", id_, file);
    }

    void addprimitive(std::unique_ptr<primitiv> Primitive){
        fmt::print("В документ №{} добавлен Примитив {}\n",id_,Primitive->getName());
        primitiv_.push_back(std::move(Primitive));
    }

    void deletprimitive(){
        if(!primitiv_.empty()){
            fmt::print("В документ №{} удален Примитив\n", id_);
            primitiv_.pop_back();
        }else{
            fmt::print("Нет доступных элементов для удаления\n");
        }
    }
}; 
