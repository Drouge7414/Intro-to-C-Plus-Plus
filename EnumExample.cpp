// Enums.cpp : This Program was written to so an example of enums
//


// Include iostream & Namespace
#include <iostream>
using namespace std;


//Declare Enum
enum coolestPokemon {
    Dragonite,
    Gengar,
    Rayquaza,
    Garchomp,
    Mewtwo,
    Greninja,
    Toxtricity,
    Charizard,  
    Blaziken,
    Lucario
};

int main() {


    //Output the heading of list
    cout << "This is my top ten list of coolest Pokemon:" << endl;

    // Loop through all enum values and output their names
    for (int i = 0; i <= Lucario; ++i) {  
        switch (i) {
        case Dragonite:
            cout << "1. Dragonite" << endl;
            break;
        case Gengar:
            cout << "2. Gengar" << endl;
            break;
        case Rayquaza:
            cout << "3. Rayquaza" << endl;
            break;
        case Garchomp:
            cout << "4. Garchomp" << endl;
            break;
        case Mewtwo:
            cout << "5. Mewtwo" << endl;
            break;
        case Greninja:
            cout << "6. Greninja" << endl;
            break;
        case Toxtricity:
            cout << "7. Toxtricity" << endl;
            break;
        case Charizard:
            cout << "8. Charizard" << endl;
            break;
        case Blaziken:
            cout << "9. Blaziken" << endl;
            break;
        case Lucario:
            cout << "10. Lucario" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
        }
    }

    return 0;
}
