#include"includes/controller.hpp"
#include <fmt/core.h>

controller::controller(std::unique_ptr<View> viVe) : viev_(std::move(viVe)){}

void controller::newDoc(int id){
    Document_ = std::make_unique<document>(id);
    viev_->ShowMassage("Создан новый документ с ID: " + std::to_string(id));
}

void controller::addPrimitive(std::unique_ptr<primitiv> Primitive) {
    if (Document_) {
        std::string name = Primitive->getName();
        Document_->addprimitive(std::move(Primitive));
        viev_->ShowPrimitiveAdd(name);
    } else {
        viev_->ShowError("Ошибка: Документ не создан!");
    }
}

void controller::deletePrimitiv() {
    if (Document_) {
        std::string deletedName;
        if (Document_->deletePrimitive(deletedName)) {
            viev_->ShowPrimitivDelete(deletedName);
        } else {
            viev_->ShowError("Ошибка: Нет объектов для удаления!");
        }
    } else {
        viev_->ShowError("Ошибка: Документ не создан!");
    }
}

void controller::exportDoc(const std::string& name) {
    if (Document_) {
        Document_->exportdocument(name);
        viev_->ShowDocumentExport(name);
    } else {
        viev_->ShowError("Ошибка: Нет доступных документов для экспорта!");
    }
}

void controller::importDocument(const std::string& file) {
    if (Document_) {
        int importedCount = 0;
        if (Document_->importDocument(file, importedCount)) {
            viev_->showDocumentImported(file, importedCount);
        } else {
            viev_->ShowError("Ошибка: Не удалось импортировать документ из файла: " + file);
        }
    } else {
        viev_->ShowError("Ошибка: Документ не создан!");
    }
}