#include <iostream>
int main() {
#include <iostream>

    int htrunk;
    int wtrunk;
    int wleaves;
    int l;
    int e;

// Ask user to specify a number of tree trunk levels
    std::cout << "Enter height of trunk: ";
    std::cin >> htrunk;
    std::cout << std::endl;


    std::cout << "Enter width of trunk: ";
    std::cin >> wtrunk;
    std::cout << std::endl;

// Make sure width height is an odd number
    while ((wtrunk % 2) == 0) {
        std::cout << "Please enter an odd number for the width: ";
        std::cin >> wtrunk;
        std::cout << std::endl;
    }

// ask user to specify number of leaves levels - width (need 2 inner loops)
// one for outputting space and one for outputting "*"s
// top level must have at least one *

    std::cout << "Enter width of leaves: ";
    std::cin >> wleaves;
    std::cout << std::endl;
    std::cout << std::endl;
// Make sure width leaves is an odd number
    while ((wleaves % 2) == 0) {
        std::cout << "Please enter an odd number for the width: ";
        std::cin >> wleaves;
        std::cout << std::endl;
    }



// Draw rows of leaves

    for (l = 0; l <= wleaves; l++) {
        if (l % 2 == 0) {
            for (int i = 0; i < (wleaves - l) / 2; i++) {
                std::cout << ' ';
            }
            for (e = 0; e <= l; e++) {
                std::cout << "*";
            }
            std::cout << std::endl;

        }
    }

    if ((wtrunk % 2) != 0) {
        for (int t = 0; t < htrunk; t++) {
            for (int h = 0; h < ((wleaves - wtrunk) / 2); h++) {
                std::cout << " ";
            }
            for (int w = 0; w < wtrunk; w++) {
                std::cout << "*";
            }

            std::cout << std::endl;
        }
    }

    return 0;

}
