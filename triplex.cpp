#include <iostream>

int main()
{
    // Print welcome messages
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std:: endl;

    // Declare variables in 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The product of the numbers is: " << CodeProduct << std::endl;

    int PlayerGuess;

    return 0;
}