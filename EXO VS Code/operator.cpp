#include <iostream>

int main(int argc, char const *argv[])
{
    int cents(0), balance(0);
    int dollards(0), quarters(0), dimes(0), nickels(0), pennies(0);
    const int dol_cte(100), quart_cte(25), dim_cte(10), nick_cte(5), pen_cte(1);

    std::cout << "Bienvenue dans votre programme de convertion de Centime en Dollard" << std::endl;
    std::cout << "Veillez entrer la valeur en centime: ";
    std::cin >> cents;


    dollards = cents / dol_cte;
    balance = cents % dol_cte;

    quarters = balance / quart_cte;
    balance %= quart_cte;

    dimes = balance / dim_cte;
    balance %= dim_cte;

    nickels = balance / nick_cte;
    balance %= nick_cte;

    pennies = balance / pen_cte;

    std::cout << "\nVous pouvez voir l'equivalence ci_dessous :" << std::endl;
    std::cout << "Dollard: " << dollards << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}
