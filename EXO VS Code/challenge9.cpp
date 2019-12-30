#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    char choix(0);
    std::vector<int> list;
    do
    {
        std::cout << "\n---------------------------" << std::endl;
        std::cout << "P - Print numbers (Afficher)" << std::endl;
        std::cout << "A - Ajouter un nombre" << std::endl;
        std::cout << "M - Afficher la Moyenne des nombre" << std::endl;
        std::cout << "S - Afficher the smallest number (plus petit)" << std::endl;
        std::cout << "G - Afficher le plus grand nombre" << std::endl;
        std::cout << "Q - Quitter" << std::endl;

        std::cout << "Faites un choix: ";
        std::cin >> choix;

        int num(0);
        
        switch (choix)
        {
            case 'p':
            case 'P':
                
                if (list.size() == 0) {
                    std::cout << "[] - La liste est vide" << std::endl;
                }
                else{
                    std::cout << "[";
                    for(int i = 0; i < list.size(); ++i){
                        std::cout << list[i] << " ";
                    }
                    std::cout << "]";
                }
                
                break;
            case 'a':
            case 'A':
                std::cout << "Entrer un nombre: ";
                std::cin >> num;
                list.push_back(num);
                std::cout << num << "est Ajoute" << std::endl;
                break; 
            case 'm':
            case 'M':
                if (list.size() == 0) {
                    std::cout << "Impossible de calculer la moyenne - List vide" << std::endl;
                }
                else{
                    double moyenne(0);
                    for(int i = 0; i < list.size(); ++i){
                        moyenne += list[i];
                    }
                    std::cout << "La Moyenne est egale a :" << moyenne / list.size() << std::endl;
    
                }
                break;
            case 's':
            case 'S':
                if (list.size() == 0){
                    std::cout << "Impossible de determiner la plus petite valeur - liste vide\n"; 
                }
                else{
                    int min = list[0];
                    for (int i = 0; i < list.size(); ++i){
                            if (min > list[i]){
                                min = list[i];
                            }
                    }
                    std::cout << "Le plus petit nombre est :" << min << std::endl;
                }
                break;
            case 'g':
            case 'G':
                if (list.size() == 0){
                    std::cout << "Impossible de determiner le grand nombre - liste vide\n";
                }
                else {
                    int max = list[0];
                    for (int i = 0; i < list.size(); ++i){
                            if (max < list[i]){
                                max = list[i];
                            }
                    }
                    std::cout << "Le plus grand nombre est :" << max << std::endl;
                }
                break;
            case 'q':
            case 'Q':
                std::cout << "Goodbye..." << std::endl;
                break;
        
            default:
                std::cout << "Choix Inconnue - Reessayer Encore" << std::endl;
                break;
        }
    } while (choix != 'q' && choix != 'Q');
    
    return 0;
}
