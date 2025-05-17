#include <iostream>

// Основная функция: запрашивает имя пользователя и выводит приветствие
int main() {
    std::string name;  // Stores the user's name
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
