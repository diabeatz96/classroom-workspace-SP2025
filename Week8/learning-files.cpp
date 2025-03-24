#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // 1. Include the Header
    //   #include <fstream>
    //   using namespace std;

    // 2. Declare File Stream Objects
    //   ofstream myOutputFile;
    //   ifstream myInputFile;
    //   fstream myFileIO;
    
    // 3. Open the File
    //   myOutputFile.open("filename.txt", ios::out);  // Example: open for writing
    //   myInputFile.open("filename.txt", ios::in);    // Example: open for reading
    //   ofstream myOutputFile2("filename.txt"); // Example using constructor

    // 4. Choose a File Mode (Optional)
    //   ios::in, ios::out, ios::app, ios::ate, ios::binary, ios::trunc

    // 5. Check if the File Opened Successfully
    //   if (myOutputFile.is_open()) { ... }
    //   if (!myInputFile.fail()) { ... }

    // 6. Read from or Write to the File
    //   // Writing:  myOutputFile << data;
    //   // Reading:  myInputFile >> data;  or  getline(myInputFile, line);

    // 7. Close the File
    //   myOutputFile.close();
    //   myInputFile.close();

    // 8. Reading until End-of-File (EOF)
    //   while (!myInputFile.eof()) { ... }

    return 0;
}
