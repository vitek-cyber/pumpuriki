#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Function 1: Read lines from file to vector
vector<string> readLinesFromFile(const string& filename) {
    vector<string> lines;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}

// Function 2: Print lines to console
void printLinesToConsole(const vector<string>& lines) {
    if (lines.empty()) {
        cout << "Warning: vector is empty. File input.txt is empty or doesn't exist." << endl;
        return;
    }

    cout << "=== Lines from file ===" << endl;
    cout << "Number of lines: " << lines.size() << endl;

    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }

    cout << "=======================" << endl;
}

// Function 3: Write lines to file
void writeLinesToFile(const vector<string>& lines, const string& filename) {
    if (lines.empty()) {
        cout << "Warning: nothing to write - vector is empty." << endl;
        return;
    }

    ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        cerr << "Error: cannot open file for writing: " << filename << endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Successfully written " << lines.size() << " lines to file: " << filename << endl;
}

int main() {
    // No need for Russian locale with English text
    // setlocale(LC_ALL, "Russian");

    cout << "Text file processing program" << endl;

    // Function 1: Read from file
    vector<string> lines = readLinesFromFile("input.txt");

    // Function 2: Print to console
    printLinesToConsole(lines);

    // Function 3: Write to file
    writeLinesToFile(lines, "output.txt");

    cout << "Program finished" << endl;
    return 0;
}