#include <iostream>

int suma_array(int arr[], int dimensiune)
{
    int sum = 0;
    for(int i=0; i < dimensiune; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void print_users(std::string users[], int dimensiune)
{
    for(int i=0; i < dimensiune; i++)
    {
        if(users[i] != "")
        {
            std::cout << users[i] << std::endl;
        }
    }
}

int main()
{
    const int array_size = 5;
    int my_array[5] = {1,2,3,4,5};  //sintaxa: tipul numele [dimensiunea]
    //my_array[0] = 1;  //accesare si modificare array prin index

    std::cout << my_array[0] << std::endl;
    std::cout << my_array[4] << std::endl;

    my_array[0] = 99;
    std::cout << my_array[0] << std::endl;

    for(int i=0; i < array_size; i++)
    {
        std::cout << my_array[i] << std::endl;
    }

    std::cout << "Suma este: " << suma_array(my_array,array_size) << std::endl;

    std::string lista_utilizatori[array_size] = {"Sergiu"," Mihai"};
    print_users(lista_utilizatori, array_size);
    
    /*
        TEMA

        //Functie pentru a gasi cel mai mic numar intr-un array
    
    
    
    */

    return 0;
}