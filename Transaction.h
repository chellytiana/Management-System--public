#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream> // For std::ostream

class Transaction {
public:
    // Constructor
    Transaction(std::string sender, std::string receiver, double amount);

    // Destructor
    ~Transaction();

    // Member functions
    std::string getSender() const;
    void setSender(std::string sender);

    std::string getReceiver() const;
    void setReceiver(std::string receiver);

    double getAmount() const;
    void setAmount(double amount);

    void display(std::ostream& os) const;
    int getTransactionId() const{
    return transactionId;
}
int getUserId() const {
    return userId;
}
int getBookId() const{
        return bookId;
    }
std::string getBorrowDate() const{
    return borrowDate;
}

std::string getReturnDate() const{
    return returnDate;
}



private:
    // Member variables
    std::string sender;
    std::string receiver;
    std::string borrowDate;
    std::string returnDate;
    double amount;
    int transactionId;
    int userId;
    int bookId;
};

#endif /* TRANSACTION_H */
