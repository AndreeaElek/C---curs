#include <iostream>

void swap(int* a, int* b)
{
    int c;
    if(a != NULL && b != NULL)
    {
        c = *a;
        *a = *b;
        *b = c;
    }
}

int main()
{
    int a, b;
    std::cout << "Introduceti primul mumar: \n" ;
    std::cin>> a; 
    std::cout << "Introduceti primul mumar: \n" ;
    std::cin>> b; 
    swap(&a,&b);
    std::cout << "Primul numar dupa swap: " << a << std::endl;
    std::cout << "Al doilea numar dupa swap: " << b << std::endl;

    return 0;
}
