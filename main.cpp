#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int sides = 5; 
    double Sides[sides]; 

    
    std::cout << "Введіть довжину кожної з " << sides << " сторін п'ятикутника:" << std::endl;

    for (int i = 0; i < sides; i++) {
        std::cout << "Сторона " << i + 1 << ": ";
        std::cin >> Sides[i];
    }

    
    double perimetr = 0.0;

    for (int i = 0; i < sides; i++) {
        perimetr += Sides[i];
    }

   
    std::cout << "Периметр п'ятикутника: " << perimetr << std::endl;

    return 0;
}
