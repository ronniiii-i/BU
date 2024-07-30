#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalShelves = 150, booksPerShelf = 50;
    string bookToFind, library[totalShelves][booksPerShelf];
    bool bookFound = false;

    // shelves with book titles for demonstration
    for (int i = 0; i < totalShelves; i++) {
        for (int j = 0; j < booksPerShelf; j++) {
            library[i][j] = "Book" + to_string(i * booksPerShelf + j + 1);
        }
    }

    cout << "Enter the title of the book to find: ";
    getline(cin, bookToFind);

    for (int i = 0; i < totalShelves; i++) {
        for (int j = 0; j < booksPerShelf; j++) {
            if (library[i][j] == bookToFind) {
                cout << "Book found on shelf " << i + 1 << ", position " << j + 1 << endl;
                bookFound = true;
                break;
            }
        }
        if (bookFound) {
            break;
        }
    }

    if (!bookFound) {
        cout << "Book not found in the library." << endl;
    }

    return 0;
}
