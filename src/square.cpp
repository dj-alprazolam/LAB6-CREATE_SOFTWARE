#include"includes/square.hpp"
#include <fmt/core.h>

std::string square::getName() const {
    return "Квадрат";
}

void square::draw() const {
    fmt::print("Отрисовка квадрата\n");
}