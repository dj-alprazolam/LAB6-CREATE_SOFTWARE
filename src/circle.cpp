#include "includes/circle.hpp"
#include <fmt/core.h>

std::string circle::getName() const {
    return "Круг";
}

void circle::draw() const {
    fmt::print("Отрисовка круга\n");
}