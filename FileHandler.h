#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include <fstream> // For file handling

class FileHandler {
public:
    // Constructor
    FileHandler();

    // Destructor
    ~FileHandler();

    // Member functions
    bool openFile(std::string filename);
    void closeFile();
    bool writeToFile(std::string data);
    bool readFromFile(std::string& data);

private:
    // Member variable
    std::fstream fileStream;
};

#endif /* FILEHANDLER_H */
