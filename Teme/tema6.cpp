#include <iostream>

int getSmallestNumber(int array[], int size)
{
    int smallestNumber = array[0];
    for(int i = 1; i < size; i++)
    {
        if(array[i] < smallestNumber)
        {
            smallestNumber = array[i];
        }
    }
    return smallestNumber;

}

int main()
{
    int n, numbers[50];
    std::cout << "How many numbers do you want to use?" << std::endl;
    std::cin >> n;
    for(int i=0; i<n; i++)
    {
        std::cout << "Input numer " << i+1 << ": " ;
        std::cin >> numbers[i];
    } 
    std::cout<< "The smallest number is: " << getSmallestNumber(numbers, n) << std::endl;


    return 0; 
}