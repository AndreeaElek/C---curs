#include "Student.h"
#include <vector>

class Enemy
{
    public: 
        Enemy()
        {
            std::cout<< "Enemy created \n";
        }
        virtual ~Enemy()
        {
            std::cout<< "Enemy destroyed \n";
        }
        
        virtual void Attack()
        {
            std::cout << "Enemy attacks with power" << attackPower << std::endl;
        }
    protected:
        void SetAttackPower(int a)
            {
                attackPower = a;
            }
        int attackPower;
};

class Ninja: public Enemy
{
    public:
    Ninja()
    {
        SetAttackPower(20);
        std::cout<< "Ninja created \n";
    }
    ~Ninja()
    {
        std::cout<< "Ninja destroyed \n";
    }
    
    void Attack() override
    {
        std::cout << "Ninja attacks with power " << attackPower << std::endl;
    }
};

class Monster: public Enemy
{
    public:
    Monster()
    {
        SetAttackPower(30);
        std::cout<< "Monster created \n";
    }
    ~Monster()
    {
        std::cout<< "Monster destroyed \n";
    }
    
    void Attack() override
    {
        std::cout << "Monster attacks with power " << attackPower << std::endl;
    }
};

class Orc: public Enemy
{
    public:
    Orc()
    {
        SetAttackPower(40);
        std::cout<< "Orc created \n";
    }
    ~Orc()
    {
        std::cout<< "Orc destroyed \n";
    }
    
    void Attack() override
    {
        std::cout << "Orc attacks with power " << attackPower << std::endl;
    }
};

void BattleScene(Enemy* e)
{
    std::cout << "Un inamic te ataca" << std::endl;
    e->Attack();
}


//______________________________________________________________________________________________________________________________


class Joc
{
    public:
    Joc()
    {
        std::cout<<"Start Joc \n";
    }
    ~Joc()
    {
        std::cout<<"Stop Joc \n";
    }
};

class Spanzuratoarea: public Joc
{
    public:
    Spanzuratoarea()
    {
        std::cout<<"Pornire Spanzuratoarea \n";
    }
    ~Spanzuratoarea()
    {
        std::cout<<"Orpire Spanzuratoarea \n";
    }
};





//______________________________________________________________________________________________________________________________

class Bautura
{
    public:
        Bautura(){}

        virtual void Prepara()
        {
            std::cout<<"Se prepara bautura \n";
        }
        int getPrice()
        {
            return pret;
        }

    protected:
        int pret=0;
        void setPrice(int p)
        {
            pret = p;
        }
};

class Ceai: public Bautura
{
    public:
        Ceai()
        {
            setPrice(5);
        }
        void Prepara() override
        {
            std::cout<<"Se prepara ceai \n";
        }

};

class Cafea: public Bautura
{
    public:
        Cafea()
        {
            setPrice(10);
        }
        void Prepara() override
        {
            std::cout<<"Se prepara cafea \n";
        }

};



void EnemyCleanup(std::vector<Enemy*> enemyList)
{
    std::cout<<"We will clenup/delete a Enemy obj \n";
    for(const auto& enemy : enemyList)
    {
        delete enemy;
    }
    enemyList.clear();
}


class A
{
    private:
    //date
    public:
    A()
    {
        std::cout<<"A was created \n";
    }
    ~A()
    {
        std::cout<<"A was deleted \n";
    }
};

class B: virtual public A
{
    public:
        B()
        {
            std::cout<<"B was created \n";
        }
        ~B()
        {
            std::cout<<"B was deleted \n";
        }
};

class C: virtual public A
{
    public:
        C()
        {
            std::cout<<"C was created \n";
        }
        ~C()
        {
            std::cout<<"C was deleted \n";
        }
};

class D: public B, public C
{
    public:
        D()
        {
            std::cout<<"D was created \n";
        }
        ~D()
        {
            std::cout<<"D was deleted \n";
        }
};



int main(int argc, char const *argv[])
{

    //D d;
    D * d = new D();
    delete d;

    std::vector <Enemy*> enemyList; 
    enemyList.push_back(new Ninja()); //creeez pe heap un ninja si il bag in vectorul enemyList
    enemyList.push_back(new Orc());
    enemyList.push_back(new Monster());

        //option 1
    for(int i; i<enemyList.size(); i++)
    {
        BattleScene(enemyList[i]);
    }

        //option 2
    for(std::vector<Enemy*>::iterator it = enemyList.begin(); it != enemyList.end(); it++)
    {
        BattleScene(*it);
    }

        //option 3
    for(auto it = enemyList.begin(); it != enemyList.end(); it++)
    {
        BattleScene(*it);
    }

        //option 4
    for(auto& enemy : enemyList)
    {
        BattleScene(enemy);
    }

        //oprtion 4.2
    for(const auto& enemy : enemyList)
    {
        BattleScene(enemy);
    }

    for(const auto& enemy : enemyList)
    {
        delete enemy;
    }
    
    enemyList.clear();
    std::cout<<"Lista are dimensiunea: " << enemyList.size() << std::endl;


    //auto t =5;

//_________________________________________________________________________________________________________________________________


    //Monster m;
    //Ninja n1;

    Ninja* n = new Ninja();
    Enemy* e1 = n;

    //EnemyCleanup(e1);

    delete e1;
    //delete n;

    //Enemy*e1 = new Ninja();

    //Enemy* e1= &m;
    //Enemy* e2 = &n;

    //e1->SetAttackPower(20);
    //e2->SetAttackPower(30);

    //e1->Attack();
    //e2->Attack();

    //BattleScene(e1);
    //BattleScene(e2);

    //Orc o;
    //Enemy* e3 = &o;
    //BattleScene(e3);



    //_________________________________________________________________________________________________________________________________

    Student s(19, "Andreea");  // alocare pe stack memory
    s.sayHello();
    Student* s2 = new Student(19, "Andreea");  //alocare pe heap memory
    s2->sayHello();  //same as (*s2).sayHello();
    std::cout << s.getVarsta() << std::endl;
    
    Persoana p("Andreea");
    p.getVarsta();

    delete s2;



    //______________________________________________________________________________________________________________________________


    Ceai ceai;
    Cafea cafea;
    Bautura* b1 = &ceai;
    Bautura* b2 = &cafea;

    b1->Prepara();
    std::cout<<"Pret ceai: "<<b1->getPrice()<<std::endl;
    b2->Prepara();
    std::cout<<"Pret cafea: "<<b2->getPrice()<<std::endl;


    Spanzuratoarea sp;



    //______________________________________________________________________________________________________________________________

    //TEMA 1
    //1. continuati schema din prentarea curs20
    // TEMA 2 (proicet separat)
    /* Cool
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





   //______________________________________________________________________________________________________________________________





   //TEMA 1
    /*Faceti un joc Spanzuratoarea. Clasa Spanzuratoarea mostenste din clasa de baza Joc/
    Amndoua clase au constuctori care vor printa un messaj de pornire.
    Creati Consturcotrii si destructorii pentru fiecare clasa care va printa ca jocul si spanzuratoarea au pornit si s-au oprit.

    Start Joc
    Pornire Spanzuratoarea
    Oprire Spanzuratoarea
    Stop Joc*/



   //TEMA 2
   /*Creati un program pt un robot ce face bauturi diferrite.
    Creeati o clasa de baza Bautura si 2 clase derviate Ceai si Cafea
    Orice bautura are un pret ce trebuie setat.
    Amandou tipuri de bauturi au o metoda prepara. Una va spune ca se prepara un ceai, iar cealata ca se prepara o cafea
    Preturile bauturilor vor trebui setate din entry point-ul aplicatie cu ce valori doriti dar sa fie diferite.
    */

    return 0;
}
