#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int nomb_note(0), note(0);
    std::vector<int> note_vec;
    std::cout << "Combien de note avez vous: ";
    std::cin >> nomb_note;
    for(int i = 1; i <= nomb_note; ++i)
    {
        std::cout << "Entrer la note " << i << ": ";
        std::cin >> note;
        note_vec.push_back(note);
    }

    std::cout << "\nAffichage du Histogramme" << std::endl;

    for(int i = 0; i < nomb_note; ++i)
    {
        
        for(int j = 1; j <= note_vec[i]; ++j)
        {
            
            std::cout << "-";
        }
        std::cout << std::endl;
    }
    

    
    return 0;
}
