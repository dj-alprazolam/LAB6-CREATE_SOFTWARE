#include "includes/View.hpp"
#include <fmt/core.h>

void consolViwe::ShowMassage(const std::string& msg) {
    fmt::print("Информация: {}\n", msg);
}

void consolViwe::ShowError(const std::string& error) {
    fmt::print("Ошибка: {}\n", error);
}

void consolViwe::ShowPrimitiveAdd(const std::string& name) {
    fmt::print("Добавлен примитив: {}\n", name);
}

void consolViwe::ShowPrimitivDelete(const std::string& name) {
    fmt::print("Удален примитив: {}\n", name);
}

void consolViwe::ShowDocumentExport(const std::string& filename) {
    fmt::print("Документ экспортирован в: {}\n", filename);
}

void consolViwe::showDocumentImported(const std::string& filename, int primitivecount) {
    fmt::print("Импортировано {} примитивов из файла: {}\n", primitivecount, filename);
}