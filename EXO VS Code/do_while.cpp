#include <iostream>


int main(int argc, char const *argv[])
{
    char num;

    do
    {
        std::cout << "----------------------" <<std::endl;
        std::cout << "1. Do this" << std::endl;
        std::cout << "2. Do that" << std::endl;
        std::cout << "3. Do something else" << std::endl;
        std::cout << "Q. Quit" << std::endl;
        std::cout << "\n";
        std::cout << "Enter votre selection: ";
        std::cin >> num;
        switch (num)
        {
            case '1':
                std::cout << "You chose 1 - doing this" << std::endl;
                std::cout << "\n";
                break;
            case '2':
                std::cout << "you chose 2 - doing that" << std::endl;
                std::cout << "\n";
                break;
            case '3':
                std::cout << "You chose 3 - doing something else" << std::endl;
                std::cout << "\n";
                break;
            case 'q':
            case 'Q':
                std::cout << "Goodbye..." << std::endl;
                break;
    
            default:
                std::cout << "unknown option" << std::endl;
                std::cout << "\n";
        }  
    } while ( num != 'q' && num != 'Q');

      
    return 0;
}
