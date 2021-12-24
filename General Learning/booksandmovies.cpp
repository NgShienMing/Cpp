#include <iostream>
using namespace std;

class Book
{
    public:
        // Attributes
        string title;
        string author;
        string publisher;
        int pages;

        // Constructor
        Book(string bookTitle, string bookAuthor, string bookPublisher, int numPages)
        {
            title = bookTitle;
            author = bookAuthor;
            publisher = bookPublisher;
            pages = numPages;
        }

        // Methods
        void bookAuthor()
        {
            cout << title << " is written by " << author << "." << endl;
        }
};

class Movie
{
    private:
        string rating;

    public:
        string title;
        string director;

        // Constructor
        Movie(string movieTitle, string movieDirector, string movieRating)
        {
            title = movieTitle;
            director = movieDirector;
            setRating(movieRating);
        }

        // Setter
        void setRating(string movieRating)
        {
            if (movieRating == "U" || movieRating == "PG-13" || movieRating == "18")
            {
                rating = movieRating;
            }
            else
            {
                rating = "NR";
            }
        }

        // Methods
        void movieInfo()
        {
            cout << title << " is directed by " << director << "." << endl;
        }
};

int main()
{
    Book hpbook1("Harry Potter and the Philosopher's Stone", "J. K. Rowling", "Bloomsbury", 223);
    Book hpbook2("Harry Potter and the Chamber of Secrets", "J. K. Rowling", "Bloomsbury", 251);
    Book hpbook3("Harry Potter and the Prisoner of Azkaban", "J. K. Rowling", "Bloomsbury", 317);
    Book hpbook4("Harry Potter and the Goblet of Fire", "J. K. Rowling", "Bloomsbury", 636);
    Book hpbook5("Harry Potter and the Order of the Phoenix", "J. K. Rowling", "Bloomsbury", 766);
    Book hpbook6("Harry Potter and the Half-Blood Prince", "J. K. Rowling", "Bloomsbury", 607);
    Book hpbook7("Harry Potter and the Deathly Hallows", "J. K. Rowling", "Bloomsbury", 607);
    hpbook7.bookAuthor();

    Movie movie1("Shang-Chi and The Legend of The Ten Rings", "Destin Daniel Cretton", "PG-13");
    movie1.movieInfo();

    return 0;
}