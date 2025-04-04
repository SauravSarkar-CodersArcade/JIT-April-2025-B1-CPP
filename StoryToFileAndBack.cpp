#include <iostream>
#include <fstream>
using namespace std;
void writeStoryToFile(const string& story, const string& filename){
    ofstream outFile(filename);
    if (!outFile){
        cerr << "Error opening file for writing....!!!" << endl;
        return;
    }
    for (char ch : story){
        outFile << int(ch) << ' ';
    }
    outFile.close();
}
string readStoryFromFile(const string& filename){
    ifstream inFile(filename);
    if (!inFile){
        cerr << "Error opening file for reading..!!" << endl;
        return "";
    }
    string story;
    int asciiCode;
    while (inFile >> asciiCode){
        story += char (asciiCode);
    }inFile.close();
    return story;
}
int main() {
    string story = "We should learn the basics of C, C++, Java & Python";
    string filename =
            "C:\\Users\\Saurav\\CLionProjects\\JIT-April-2025-B1-CPP\\story.txt";
    writeStoryToFile(story, filename);
    string retrievedStory = readStoryFromFile(filename);
    cout << "Retrieved Story: " << retrievedStory << endl;
    return 0;
}
