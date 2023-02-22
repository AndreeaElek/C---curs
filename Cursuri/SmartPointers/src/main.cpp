#include <iostream>
#include <memory>  //libraria in care se afla smart pointers
#include <vector>

class Entity
{
    public:
        Entity()
        {
            std::cout << "Entity was created \n";
        }
        ~Entity()
        {
            std::cout << "Entity was destroyed \n";
        }
};

void CreateEntity()
{
    Entity* e = new Entity();
    delete e;
}

void CreateEntitySmartPtr()
{
    //std::unique_ptr<Entity> e(Entity);
    //std::unique_ptr<Entity> e (new Entity());

    std::unique_ptr<Entity> e = std::make_unique<Entity>(); //preferabil (varianta preferabila)
}

int main(int argc, char const *argv[])
{
    CreateEntity();
    CreateEntitySmartPtr();
    std::unique_ptr<Entity> e = std::make_unique<Entity>();
    //std::unique_ptr<Entity> e2 = e;
    std::unique_ptr<Entity> e2 = std::move(e);

    //std::vector<std::unique_ptr<Entity>> lista ;
    std::unique_ptr<Entity[]> data(new Entity[50]);


    
    
    return 0;
}
