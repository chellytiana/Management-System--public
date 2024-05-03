#ifndef USER_H
#define USER_H

#include <string>
#include "UserType.h"

class User {
public:
    // Constructor
    User(std::string username, int age);

    // Destructor
    ~User();

    // Member functions
        std::string getUsername() const;
        void setUsername(std::string username);
        std::string getPassword() const;
        

        void setPassowrd(std::string password);

        int getUserId() const {
            return userId;
        }
        UserType getUserType() const {
            return userType;
        }

        int getAge() const;
        void setAge(int age);

        private:
            // Member variables
            std::string username;
            int age;
            int userId; // Declare the userId member variable
            UserType userType;
};

#endif /* USER_H */
