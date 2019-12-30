#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// **Prototypes de fonctions

void displayMenu();
void printList(vector<double> &list);
void addList(vector<double> &list);
void moyenneList(vector<double> &list);
void plusPetiteDeLaListe(vector<double> &list);
void plusGrandeDeLaList(vector<double> &list);
void recherche(vector<double> &list);

    //**Prototypes de sous fonctions

void displayList(vector<double> &list);
bool faireLaRecherche(vector<double> &list, double r);

//*********************************

int main(int argc, char const *argv[])
{
    char choix(0);
    std::vector<double> list;
    do
    {
        displayMenu();

        std::cout << "Faites un choix: ";
        std::cin >> choix;

        int num(0);

        switch (choix)
        {
            case 'p':
            case 'P':

                printList(list);

                break;
            case 'a':
            case 'A':

                addList(list);

                break; 
            case 'm':
            case 'M':

                moyenneList(list);

                break;
            case 's':
            case 'S':

                plusPetiteDeLaListe(list);

                break;
            case 'g':
            case 'G':

                plusGrandeDeLaList(list);

                break;
            case 'r':
            case 'R':

                recherche(list);

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


// **Les Fontions utilisées dans ce programme **


void displayMenu(){
    cout << "\n---------------------------" << std::endl;
    std::cout << "P - Print numbers (Afficher)" << std::endl;
    std::cout << "A - Ajouter un nombre" << std::endl;
    std::cout << "M - Afficher la Moyenne des nombre" << std::endl;
    std::cout << "S - Afficher the smallest number (plus petit)" << std::endl;
    std::cout << "G - Afficher le plus grand nombre" << std::endl;
    cout << "R - Rechercher un nombre dans la liste" << endl;
    std::cout << "Q - Quitter" << std::endl;
}

void printList(vector<double> &list){
    if (list.size() == 0) {
        std::cout << "[] - La liste est vide" << std::endl;
    }
    else{
        displayList(list);
    }
}

void addList(vector<double> &list){
    double num(0);
    cout << "Entrer un nombre: ";
    std::cin >> num;
    list.push_back(num);
    std::cout << num << " Ajoute" << std::endl;
}

void moyenneList(vector<double> &list){
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
}

void plusPetiteDeLaListe(vector<double> &list){
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
}

void plusGrandeDeLaList(vector<double> &list){
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
}

void displayList(vector<double> &list){
    std::cout << "[";
        for(int i = 0; i < list.size(); ++i){
            cout << list[i] << " ";
        }
            std::cout << "]";
}

void recherche(vector<double> &list){
    if(list.size() == 0){
        cout << "Recherche impossible car la liste est vide !";
    }
    else{
        double nombreR(0);
        cout << "Saisir le nombre a Rechercher: ";
        cin >> nombreR;
        if(faireLaRecherche(list, nombreR)){
            cout << nombreR << " Trouve" << endl;
        }
        else{
            cout << nombreR << " Non Trouve" << endl;
        }
    }
}

bool faireLaRecherche(vector<double> &list, double r){
    for (int i = 0; i < list.size(); ++i){
        if(list[i] == r){
            return true;
        }
        else{
            return false;
        }
    }
    
}