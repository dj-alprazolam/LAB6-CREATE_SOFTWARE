#pragma once 
#include"includes/circle.hpp"
#include"includes/document.hpp"
#include"includes/square.hpp"
#include"includes/Viev.hpp"
#include<string>
#include<vector>
#include<fmt/core.h>
#include<memory>

class controller
{
private:
    std::unique_ptr<document> Document_;
    std::unique_ptr<Viev> viev_;
public:
    controller(std::unique_ptr<Viev> viVe) : viev_(std::move(viVe)){}
    
    void newDoc(int id){
        Document_ = std::make_unique<document>(id);
        viev_ -> massageShow("Созадан новый документ!");
    }

    void addPrimitive(std::unique_ptr<primitiv> Primitive){
        if(Document_){
            Document_->addprimitive(std::move(Primitive));
        }else{
            viev_->massageShow("Ошибка!!!!");
        }
    }

    void deletePrimitiv(std::unique_ptr<primitiv> Primitiv){
        if(Document_){
            Document_->deletprimitive();
            fmt::print("Объект удален!\n");
        }else{
            fmt::print("Нет объектов для удаления\n");
        }
    }

    void importDocument(const std::string& file){
        if(Document_){
            Document_->importdocument(file);
            fmt::print("Документ импортирован!\n");
        }else{
            fmt::print("Нет доступных документов\n");
        }
    }

    void exportDoc(const std::string& name){
        if(Document_){
            Document_->exportdocument(name);
            fmt::print("Документ экспортирован\n");
        }else{
            fmt::print("Нет доступных документов!\n");
        }
    }


};


