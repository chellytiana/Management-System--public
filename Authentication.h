#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <string>
#include <unordered_map>

class Authentication {
private:
User currentUser;

public:
    // Constructor
    Authentication();

    // Destructor
    ~Authentication();

    // Member functions
    bool addUser(std::string username, std::string password);
    bool authenticateUser(std::string username, std::string password);

private:
    // Member variable
    std::unordered_map<std::string, std::string> users;
    bool login(const std::vector<User> &users);
    User getCurrentUser();
    // username -> password
};

#endif /* AUTHENTICATION_H */
