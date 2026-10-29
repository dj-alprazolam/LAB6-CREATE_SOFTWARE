#include <iostream>
#include"includes/circle.hpp"
#include"includes/square.hpp"
#include"includes/primitiv.hpp"
#include"includes/document.hpp"
#include"includes/controller.hpp"
#include"includes/Viev.hpp"
#include<memory>
std::unique_ptr<controller> app;
void buttonCreateDoc(int a){
    app->newDoc(a);
}

void buttonAddSquare(){
    app->addPrimitive(std::make_unique<square>());
}

void buttonAddCircle(){
    app->addPrimitive(std::make_unique<circle>());
}

void buttonExportDoc(const std::string& name){
    app->exportDoc(name);
}

int main(int, char**){
    app = std::make_unique<controller>(std::make_unique<viev>());
    buttonCreateDoc(1);
    buttonAddCircle();
    buttonAddSquare();
    buttonExportDoc("First_project");

    return 0;

}
