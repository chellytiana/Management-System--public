#include <iostream>
#include <vector>
#include "User.h"
#include "Book.h"
#include "Transaction.h"
#include "FileHandler.h"
#include "Authentication.h"

int main() {
    std::vector<User> users;
    std::vector<Book> books;
    std::vector<Transaction> transactions;
    FileHandler fileHandler;
    Authentication auth;

    try {
        // Load data from file
        FileHandler fileHandler;

        int choice;
        do {
            std::cout << "\nLibrary Management System" << std::endl;
            std::cout << "1. Login" << std::endl;
            std::cout << "2. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;

                    } while (choice != 2);

                } catch (const std::exception& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                    return 1;  // Return error code
                }

                return 0;
            }

            class FileHandler {
            public:
                void saveToFile(const std::vector<User>& users, const std::vector<Book>& books, const std::vector<Transaction>& transactions);
                // Rest of the class definition
            };

            void FileHandler::saveToFile(const std::vector<User>& users, const std::vector<Book>& books, const std::vector<Transaction>& transactions) {
                // Implementation of saveToFile function
            }