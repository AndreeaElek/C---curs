/*Problema 1: Cool
Se consideră un șir A format din N elemente naturale nenule. 
Numim secvență de lungime K a șirului A orice succesiune de elemente consecutive din șir de forma Ai, Ai+1, ..., Ai+K-1.
O secvență o numim secvență cool dacă elementele care o compun sunt distincte și pot fi rearanjate astfel încât să alcătuiască o secvență continuă de numere consecutive. 
De exemplu, considerând șirul 
A = (3, 1, 6, 8, 4, 5, 6, 7, 4, 3, 4), atunci secvența (8, 4, 5, 6, 7) este o secvență cool deoarece conține elemente distincte ce pot fi rearanjate astfel încât să alcătuiască șirul de numere consecutive 4, 5, 6, 7, 8, pe când secvențele (4, 3, 4), (6, 7, 4, 3) nu sunt considerate secvențe cool.
Cerință:
    Pentru o valoare dată K să se verifice dacă secvența A1, A2 ... AK este secvență cool. 
    Dacă secvența este cool, atunci se va afișa cea mai mare valoare ce aparține secvenței. 
    Dacă secvența nu este cool, atunci se va afișa numărul elementelor distincte din secvența 
A1, A2, ..., AK, adică numărul elementelor care apar o singură dată.
Date de intrare:
    Se citesc N și K de la tastatură care vor determina numărul de elemente din sir respectiv lungimea secvenței cool de verificat.
Exemple:
INPUT:
7 4
6 4 5 7 8 3 5
OUTPUT: 
7
Secvența 6 4 5 7 este cool.
Valoarea maximă din secvență este 7
INPUT:
7 6
6 4 5 7 5 4 3
OUTPUT:
2
Secvența 6 4 5 7 5 4 nu este secvență cool. Numărul valorilor distincte din secvență este 2. Valorile distincte sunt: 6, 7
*/
//_____________________________________________________________________________________________________________________________________


#include <iostream>



//funcie care sorteaza(rearanjeaza) numerele din secventa in ordine crescatoare
void rearangeSequance(int sequence[], int size)
{
    int temp;
    //comparem fiecare numar 
    for(int i=0; i<size; i++)
    {
        //cu toate numerele pozitionate dupa el din sir
        for(int j=i+1; j<size; j++)
        {
            //daca numarul este mai mic decat cel pozitionat dupa el, 
            if(sequence[i]>sequence[j])
            {
                //pozitile numerelor vor fi interschimbate
                temp = sequence[i];
                sequence[i] = sequence[j];
                sequence[j] = temp;
            }
        }
    }
}

//functie care verifca daca secventa este o secventa continua de numere consecutive
bool isContinuousSequence(int sequence[], int size)
{
    //fentru fiecare numara(cu exceptia ultimului numar)
    for (int i=0; i<(size-1); i++)
    {
        //se verifica daca numarul de dupa el este egal cu numarul respectiv + valoarea 1 
                        //(adica care valorile celor doua numere sunt consecutive)
        if(sequence[i+1]!= (sequence[i] + 1))
        {
            return false;
        }
    }
    return true;
}

//fuctie care verifica daca fiecare numar din secventa apare o singura data
bool containsOnlyUniqueValues(int sequence[], int size)
{
    //variabila care indica daca exista doar valori unice (care apar o singura data) in secvanta
    bool onlyUniqueValues = true;
    //variabila cara memoreaza de cate ori apara fiecare numar in secventa
    int appearencesConter = 0;
    //se parcurge secvanta, iar fiecare numar din aceasta
    for(int i=0; i<size; i++)
    {
        //este cautat in secvanta,
        for (int j=0; j<size; j++)
        {
            //iar la fiecare aparitie a acestuia
            if(sequence[j]==sequence[i])
            {
                //variabila de memorare a apraritilor este incrementata
                appearencesConter++;
            }
        }
        //daca numarul apare de mai multe ori (mai multe decat o singura data)
        if(appearencesConter>1)
        {
            //secventa nu continue doar elmente distincte
            return false;
        }
        //se reseteaza variabila de memorare/numarare a apratilor
        appearencesConter=0;
    }
    //altfel, secventa continue doar elmente distincte
    return true;
}

//functie care verifica daca o secventa este cool
bool isCool(int sequence[],int size)
{
    //daca secventa este alcatuita doar din valori conecutive, iar acestea apar o singura data in secventa
    if(isContinuousSequence(sequence,size) && containsOnlyUniqueValues(sequence,size))
    {
        //atunci, secventa este cool
        return true;
    }
    //altfel, secventa nu este cool
    return false;
}

//fucntie care afiseaza numarul elementelor unice existente in secventa si fiecare numar unic din secventa
void printForNotCool(int sequence[],int size)
{
    //array in care se memoreaza/stocheza valorile unice din secventa
    int differentValuesArray[50]; 
    //variabila cara memoreaza de cate ori apara fiecare numar in secventa
    int appearencesConter = 0; 
    //variabila/contor care memoreaza numarul de elemente unice din secventa
    int differentValues=0;

    //se parcurge secvanta, iar fiecare numar din aceasta
    for(int i=0; i<size; i++)
    {
        //este cautat in secvanta,
        for (int j=0; j<size; j++)
        {
            ///iar la fiecare aparitie a acestuia
            if(sequence[j]==sequence[i])
            {
                //variabila de memorare a apraritilor este incrementata
                appearencesConter++;
            }
        }
        //daca numarul este unic (apare o singura data in secventa)
        if(appearencesConter<2)
        {
            //valoare sa este stocata in array-ul de momorare a numerelor unice
            differentValuesArray[differentValues] = sequence[i];
            //iar contorul pentru numere unice este incrementat
            differentValues++;
        }
        //se reseteaza variabila numarare a apratilor
        appearencesConter=0;
    }
    //se afiseaza numarul valorilor distincte din secventa
    std::cout<<"Numarul valorilor distincte din secventa este " << differentValues << ". \n";
    //se afiseaza toate valorile distincte din secventa
    std::cout<<"Valorile distincte sunt: ";
    for (int i=0; i< differentValues; i++)
    {
        std::cout<<differentValuesArray[i]<<" ";
    }
}



int main()
{
    int n, k, values[100], sequence[100], old_sequence[100];

    //citim valorile de la tastatura
    std::cin>> n >> k;
    for (int i=0; i<n; i++)
    {
        std::cin>>values[i];
    }

    //selectam secvanta pana la k (adaugam elentere intr-un nou array)
    for (int i=0; i< k; i++)
    {
        sequence[i] = values[i];
    }
    
    //memoram secventa veche
    for (int i=0; i< k; i++)
    {
        old_sequence[i] = sequence[i];
    }

    //sortam secventa
    rearangeSequance(sequence,k);
    
    //daca secventa este cool
    if(isCool(sequence,k))
    {
        //se afiseaza mesajul adecvat 
        std::cout<<"Secventa ";
        for (int i=0; i< k; i++)
        {
            std::cout<<old_sequence[i]<<" ";
        }
        std::cout<<"este cool. \n";
        //si maloarea maxima din secventa
        std::cout<<"Valoarea maxima din secventa este " << sequence[k-1] << ". \n";
        
    }
    else
    {
        //se afiseaza mesajul adecvat pentru cazul contrar
        std::cout<<"Secventa ";
        for (int i=0; i< k; i++)
        {
            std::cout<<old_sequence[i]<<" ";
        }
        std::cout<<"nu este cool. \n";
        //si se apelaeza functia care afiseaza numarul elementelor unice existente in secventa si fiecare numar unic din secventa
        printForNotCool(sequence,k);
    }

    return 0;

}