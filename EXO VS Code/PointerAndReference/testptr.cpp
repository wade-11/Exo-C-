#include <iostream>
#include <string>

using namespace std;

void double_data(int *data){
    *data *= 2;
}

void permuter(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displayArray(int *array, int limite){
    while (*array != limite){
        cout << *array++ << " " << endl;
    }
    
}

int *creerTableauDynamique(size_t size, int initial){
    int *array = NULL;
    array = new int[size];

    for(size_t i = 0; i < size; ++i){
        *(array + i) = initial;
    }
    return array;
}

void display(int *array, size_t size){
    for(size_t i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}


int main()
{
    // int score[] = {100, 200, 300, 400, -1};
    // int *score_ptr(score);

    // while (*score_ptr != -1){
    //     cout << *score_ptr++ << endl;
    //     score_ptr++;
    // }

    //***********************************************************

    // int x(10);
    // int *ptr_data(&x);

    // double_data(ptr_data);
    
    // cout << "the value Of x is: " << x << endl;

    //************** Permutation *********************

    // int x(100), y(200);

    // cout << "Avant permutation: x = " << x << " et y == " << y << endl;

    // permuter(&x, &y);

    // cout << "Apres permutation: x = " << x << " et y == " << y << endl;

    //************* Array and Pointer ************************************

    // int score[] = {100, 200, 300, 400, 500, -1};

    // displayArray(score, -1);

    //********************* Return A Pointer ********************************

    int *tableau = NULL;
    size_t taille(0);
    int initValue(0);

    cout << "Veillez Saisir la taille du tableau a creer: ";
    cin >> taille;
    cout << "Entrer la valeur d'initialisation: ";
    cin >> initValue;
    tableau = creerTableauDynamique(taille, initValue);

    display(tableau, taille);

    delete [] tableau;

    return 0;
}