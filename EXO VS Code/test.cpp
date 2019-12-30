#include <iostream>

int main(int argc, char const *argv[])
{
    int age(0);
    std::cout << "Quel est vtre age: ";
    std::cin >> age;
    
    if (age > 18 ) {
        std::cout << "Vous etes majeur, vous pouvez entrer" << std::endl;
    }
    
    else
    {
        std::cout << "Desole ! les mineurs n'ont pas leur place ici" << std::endl;
    }
    
    
    return 0;
}
