#include <iostream>
using namespace std;

int main() {
    int defectiveProduct;
    
    // Simulating inspection of 1000 products
    for (int product = 1; product <= 1000; product++) {
        // assuming products with product number divisible by 29 are defective.
        if (product % 29 != 0) {
            continue;
        }
        cout << "Product " << product << " is defective and has been dropped out." << endl;
    }
    return 0;
}
