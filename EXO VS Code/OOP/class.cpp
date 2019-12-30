#include <iostream>
#include <string>
#include <vector>

using namespace std;

class player{
public:
    string name;
    int life;
    int experience;

    // Methode
    void initLife(player &vie){vie.life = 100;}
};

int main()
{
    player joueur1;
    joueur1.name = "Assane";
    joueur1.life = 70;
    joueur1.experience = 560;

    cout << joueur1.name << endl;
    cout << joueur1.life << endl;
    cout << joueur1.experience << endl;
    joueur1.initLife(joueur1);
    cout << joueur1.life << endl;


    return 0;
}