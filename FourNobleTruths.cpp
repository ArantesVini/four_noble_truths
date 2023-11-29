#include <iostream>
#include <string>

class FourNobleTruths {
public:
    std::string dukkha;
    std::string samudaya;
    std::string nirodha;
    std::string magga;

    FourNobleTruths() {
        dukkha = "The truth of suffering";
        samudaya = "The truth of the origin of suffering";
        nirodha = "The truth of the cessation of suffering";
        magga = "The truth of the path to the cessation of suffering";
    }

    void printTruths() {
        std::cout << "Dukkha: " << dukkha << std::endl;
        std::cout << "Samudaya: " << samudaya << std::endl;
        std::cout << "Nirodha: " << nirodha << std::endl;
        std::cout << "Magga: " << magga << std::endl;
    }
};

int main() {
    FourNobleTruths truths;
    truths.printTruths();
    return 0;
}
