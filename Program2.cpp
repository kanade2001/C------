#include <iostream>

int main()
{
    int ten = 10;

    char charactor_1 = 'a';
    char charactor_2 = 'b';
    std::cout << "charactor_1: " << charactor_1 << std::endl;
    std::cout << "charactor_2: " << charactor_2 << std::endl;
    
    charactor_1 = charactor_2;
    std::cout << charactor_1 << std::endl;


    int input_num;
    std::cin >> input_num;
    std::cout << input_num;

    return 0;
}