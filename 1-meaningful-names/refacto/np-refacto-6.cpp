#include <iostream>
#include <vector>

class Book {
public:
    std::string title;
    std::string author;
    int publicationYear;

    Book(std::string bookTitle, std::string authorName, int year) 
        : title(bookTitle), author(authorName), publicationYear(year) {}

    void displayInfo() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Year of Publication: " << publicationYear << std::endl;
    }
};

class Library {
public:
    std::vector<Book> books;

    void addBook(Book newBook) {
        books.push_back(newBook);
    }

    void displayBooks() const {
        std::cout << "Library Books:\n";
        for (const auto& book : books) {
            book.displayInfo();
            std::cout << "\n";
        }
    }
};

int main() {
    Library library;
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", 1925));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1960));

    library.displayBooks();

    return 0;
}
