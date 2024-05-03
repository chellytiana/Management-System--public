
#include "FileHandler.h"
#include "User.h"
#include "Book.h"
#include "Transaction.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

class FileHandler{
    public:
    void FileHandler::saveToFile(const std::vector<User>& users, const std::vector<Book>& books, const std::vector<Transaction>& transactions) {
    std::ofstream outFile("library_data.txt");
    if (!outFile.is_open()) {
        throw std::runtime_error("Error opening output file!");
    }

    // Save users
    outFile << "USERS" << std::endl;
    for (const auto& user : users) {
        outFile << user.getUserId() << "," << user.getUsername() << "," << user.getPassword() << "," << static_cast<int>(user.getUserType()) << std::endl;
    }

    // Save books
    outFile << "BOOKS" << std::endl;
    for (const auto& book : books) {
        outFile << book.getBookId() << "," << book.getTitle() << "," << book.getAuthor() << "," << book.getISBN() << "," << book.getQuantity() << "," << book.getAvailableCopies() << std::endl;
    }

    // Save transactions
    outFile << "TRANSACTIONS" << std::endl;
    for (const auto& transaction : transactions) {
        outFile << transaction.getTransactionId() << "," << transaction.getUserId() << "," << transaction.getBookId() << "," << transaction.getBorrowDate() << "," << transaction.getReturnDate() << std::endl;
    }

    outFile.close();
}   



void FileHandler::loadFromFile(std::vector<User>& users, std::vector<Book>& books, std::vector<Transaction>& transactions) {
    std::ifstream inFile("library_data.txt");
    if (!inFile.is_open()) {
        throw std::runtime_error("Error opening input file!");
    }

    std::string line;
    std::string section;

    while (std::getline(inFile, line)) {
        if (line == "USERS") {
            section = "USERS";
            continue;
        } else if (line == "BOOKS") {
            section = "BOOKS";
            continue;
        } else if (line == "TRANSACTIONS") {
            section = "TRANSACTIONS";
            continue;
        }

        if (section == "USERS") {
            // Parse user data and add to users vector
        } else if (section == "BOOKS") {
            // Parse book data and add to books vector
        } else if (section == "TRANSACTIONS") {
            // Parse transaction data and add to transactions vector
        }
    }

    inFile.close();
}

    private:


};