#include "User.h"
#include <iostream>
#include <stdexcept>

enum class UserType {
    LIBRARIAN,
    MEMBER
};

class User {
public:
    User(int userId, const std::string& username, const std::string& password, UserType userType)
        : userId(userId), username(username), password(password), userType(userType) {
        // Constructor implementation
    }

    void User::addUser() {
    // Logic to add user to a database or list
    throw std::runtime_error("Adding user is not implemented.");
}
    void User::setCurrentUser() {
    // Logic to set current user
    throw std::runtime_error("Setting current user is not implemented.");
}
    
    

    void getUserType() {
        std::cout << "User Type: " << (userType == UserType::LIBRARIAN ? "Librarian" : "Member") << std::endl;
    }

    void removeUser() {
        // Logic to remove user from a database or list
        throw std::runtime_error("Removing user is not implemented.");
    }

    void viewUserDetails() {
        std::cout << "User ID: " << userId << std::endl;
        std::cout << "Username: " << username << std::endl;
        std::cout << "User Type: " << (userType == UserType::LIBRARIAN ? "Librarian" : "Member") << std::endl;
    }

private:
    int userId;
    std::string username;
    std::string password;
    UserType userType;
};




