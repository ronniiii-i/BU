#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Input a number: ";
    cin>>number;

    switch (number)
    {
    case 1:
        cout << "Bacteria : No nucleus";
        break;
    
    case 2:
        cout << "Virus : No cytoplasm";
        break;
    
    case 3:
        cout << "Fungus: No cell wall";
        break;
    
    case 4:
        cout << "Protozoa : No cells";
        break;
    
    default:
        break;
    }
    return 0;
}