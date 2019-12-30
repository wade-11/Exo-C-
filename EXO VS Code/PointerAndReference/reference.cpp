#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> stooges;
    stooges.push_back("Larry");
    stooges.push_back("Moe");
    stooges.push_back("Curly");

    for(int i = 0; i < stooges.size(); ++i){
        stooges[i] = "Funny";
    }
    
    for(int i = 0; i < stooges.size(); ++i){
        cout << stooges[i] << " ";
    }
    cout << endl;
    cout << "\n----------------------------------------" << endl;

    //************** Reférence ***************

    int value = 100;
    int &ref(value);

    cout << value << endl;
    cout << ref << endl;
    cout << "\n----------------------------------------" << endl;
    value = 200;
    cout << value << endl;
    cout << ref << endl;
    cout << "\n----------------------------------------" << endl;
    value = 300;
    cout << value << endl;
    cout << ref << endl;


    return 0;
}