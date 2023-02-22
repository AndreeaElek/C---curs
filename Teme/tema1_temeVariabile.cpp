#include <iostream>

int main()
{
    //Exercitiul 1
    int varsta;
    std::cout <<"Ce varsta aveti?" << std::endl;
    std::cin >> varsta;
    std::cout <<"Super, ai " << varsta << " de ani" << std::endl;

    //Exercitiul 2
    int an, varsta2;
    const int an_curent = 2022;
    std::cout <<"In ce an v-ati nascut?" << std::endl;
    std::cin >> an;
    varsta2 = an_curent - an;
    std::cout <<"Super, ai " << varsta2 << " de ani" << std::endl;

    return 0;

}