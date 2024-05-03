#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    // Constructor
    Book(std::string title, std::string author, int year);

    // Destructor
    ~Book();

    // Member functions
    std::string getTitle() const;
    void setTitle(std::string title);

    std::string getAuthor() const;
    void setAuthor(std::string author);
    int getBookId() const{
        return bookId;
    }
    std::string getISBN() const;
    void setISBN(std::string ISBN);

    int getQuantity() const{
        return quantity;
    }
    int getAvailableCopies() const{
        return availableCopies;
    }

    private:
        // Member variables
        std::string title;
        std::string author;
        std::string ISBN;
        int year;
        int bookId; // Declare the bookId member variable
        int quantity;
        int availableCopies;

        Book(int bookId, const std::string &title, const std::string &author, const std::string &ISBN, int quantity);
};

#endif /* BOOK_H */
