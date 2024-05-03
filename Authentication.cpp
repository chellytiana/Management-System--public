#include "Authentication.h"
#include <iostream>
#include <stdexcept>
#include "User.h"

bool Authentication::login(const std::vector<User>& users) {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

  class User {
public:
    User() {
        // Initialize any variables here
        // Initialize any variables here
    }

    void setUsername(const std::string& username) {
        // Set the username here
    }

    void setPassword(const std::string& password) {
        // Set the password here
    }

    // Rest of your class definition
}; 
    User currentUser; // Initialize the currentUser variable using the default constructor
    currentUser.setUsername(username); // Set the username
    currentUser.setPassword(password); // Set the password

    for (const auto& user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            // currentUser.setCurrentUser(user); // Set the current user
            std::cout << "Login successful!" << std::endl;
            return true;
        }
    }

    throw std::runtime_error("Login failed! Invalid username or password.");
}

User Authentication::getCurrentUser() {
    return currentUser;
}
