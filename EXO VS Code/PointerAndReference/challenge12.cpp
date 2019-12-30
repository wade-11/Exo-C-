#include <iostream>
#include <vector>


using namespace std;

void print(int *arr, int taille);
int *apply_all(int *arr1, size_t taille1, int *arr2, size_t taille2);

int main()
{
    int size1(5), size2(7);
    int array1[] = {10,2,5,12,8};
    int array2[] = {3,5,11,2,6,4,1};

    print(array1, size1);
    print(array2, size2);

    int *result = apply_all(array1, size1, array2, size2);

    int result_size = size1 * size2;

    print(result, result_size);

    delete [] result;
    //apply_all(array1, size1, array2, size2);

    return 0;
}

void print(int *arr, int taille){
    cout << "[";
    for(int i = 0; i < taille; ++i){
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

int *apply_all(int *arr1, size_t taille1, int *arr2, size_t taille2){
    int *arr = new int[taille1 * taille2];
    int k(0);
    for(size_t i = 0; i < taille1; ++i){
        for(size_t j = 0; j < taille2; ++j){
            arr[k] = arr1[i] * arr2[j];
            k++;
        }
    }

    return arr;
}