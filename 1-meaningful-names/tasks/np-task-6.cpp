#include <iostream>
#include <vector>

class book {
public:
    std::string bookTitle;
    std::string authorName;
    int publicationYear;

    book(std::string title, std::string author, int year) {
        bookTitle = title;
        authorName = author;
        publicationYear = year;
    }

    void showBookInfo() {
        std::cout << "Title: " << bookTitle << std::endl;
        std::cout << "Author: " << authorName << std::endl;
        std::cout << "Year of Publication: " << publicationYear << std::endl;
    }
};

class library {
public:
    std::vector<book> books;

    void addBook(book b) {
        books.push_back(b);
    }

    void displayLibrary() {
        std::cout << "Library Books:\n";
        for (auto b : books) {
            b.showBookInfo();
            std::cout << "\n";
        }
    }
};

int main() {
    library lib;
    lib.addBook(book("The Great Gatsby", "F. Scott Fitzgerald", 1925));
    lib.addBook(book("To Kill a Mockingbird", "Harper Lee", 1960));

    lib.displayLibrary();

    return 0;
}
