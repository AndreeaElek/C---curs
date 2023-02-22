#include <iostream>
#include <string>


class library_files
{
    protected: 
        std::string title;
        std::string author;
    
    public: 
        library_files(std::string title, std::string author)
        {
            this -> title = title;
            this -> author = author;
        }

        void show_information()
        {
            std::cout << "Title of file: " << title << std::endl;
            std::cout << "Name of auther: " << author << std::endl;
        }
    
};

/*class books: public library_files
{
    protected: 
        std::string series;
        std::string genra;
    
    public: 
        library_files(std::string title, std::string author, std::string series, std::string genra): library_files(title, author)
        {
            this -> title = library_files::title;
            this -> author = library_files::author; 
        }

        void show_information()
        {
            std::cout << "Title of file: " << title << std::endl;
            std::cout << "Name of auther: " << author << std::endl;
        }
    
};
*/

class main
{

};