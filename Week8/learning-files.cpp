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

    ofstream myOutputFile;
    ifstream myInputFile;
    fstream myFileIO;
    
    // 3. Open the File
    //   myOutputFile.open("filename.txt", ios::out);  // Example: open for writing
    //   myInputFile.open("filename.txt", ios::in);    // Example: open for reading
    //   ofstream myOutputFile2("filename.txt"); // Example using constructor

    // myOutputFile.open("juan.txt", ios::out);

    // if(myOutputFile.is_open()) {
    //     cout << "My file is open";
    // } else {
    //     cout << "No it is not open";
    // }

    // myOutputFile << "Hello Fileeeeeeee" << endl;
    // myOutputFile << 123 << " " << 3.14 << endl;

    myFileIO.open("juan.txt", ios::in);
    
    string line; 
    
    while(!myFileIO.eof()) {
        getline(myFileIO, line);
        cout << line << endl;
    }

    myFileIO.close();



    // ios::in
    // ios::binary

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
