#include "Transaction.h"
#include <iostream>
#include <stdexcept>

class Transaction {
public:
    Transaction(int transactionId, int userId, int bookId, const std::string& borrowDate, const std::string& returnDate)
        : transactionId(transactionId), userId(userId), bookId(bookId), borrowDate(borrowDate), returnDate(returnDate) {}

    void borrowBook() {
        // Logic to borrow a book
        throw std::runtime_error("Borrowing book is not implemented.");
    }
    
    void Transaction::returnBook() {
    // Logic to return a book
    throw std::runtime_error("Returning book is not implemented.");
}   void Transaction::viewBorrowedBooks() {
    // Logic to view borrowed books by a user
    throw std::runtime_error("Viewing borrowed books is not implemented.");
}
private:
    int transactionId;
    int userId;
    int bookId;
    std::string borrowDate;
    std::string returnDate;
};


class Transaction {
private:
    int transactionId;  // Assuming transactionId is of type int

public:
    // Rest of your class definition

    
};


int getUserId() {
    int userId; // Declare the userId variable
    std::cout << "User ID: " << userId << std::endl;
}


