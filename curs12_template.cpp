#include <iostream> 

/*void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(char & a, char & b)
{
    char temp = a;
    a = b;
    b = temp;
}*/



//________________________________________________________________________________________________________________________________

/*template <class T>
class Player 
{
    public: 
    void set Data(T data)
    {
        this.data = data;
    }

    private: 
    T data;
};*/


//________________________________________________________________________________________________________________________________



template<typename T>
void swap(T & a, T & b)
{
    T temp = a;
    a = b;
    b = temp;
} 

int main() 
{
    int c = 10;
    int d = 99;
    char e = 'c';
    char f = 'd';

    std::cout << "INAINTE DE SWAP" << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    swap(c,d);
    swap(e,f);

    std::cout << "DUPA SWAP" << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    
    

    //TEMA:
    //Creati o fuctie template care sa returneze cel mai mare element dintrei doi parametrii (comparam valorille ascii)

    return 0; 
}