#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Ôóíêöèÿ 1: ×òåíèå ñòðîê èç ôàéëà â âåêòîð
vector<string> readLinesFromFile(const string& filename) {
    setlocale(LC_ALL, "Russian");
    vector<string> lines;

    ifstream file(filename);

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    //cout << "Ïðî÷èòàíî " << lines.size() << " ñòðîê" << endl;
    //for (int i = 0; i < lines.size(); i++) {
    //    cout << "  Ñòðîêà " << i << ": " << lines[i] << endl;
    //}
    return lines;
}

// Ôóíêöèÿ 2: Âûâîä ñòðîê íà ýêðàí
void printLinesToConsole(const vector<string>& lines) {
    if (lines.empty()) {
        cout << "ÐÐ½Ð¸Ð¼Ð°Ð½Ð¸Ðµ: Ð²ÐµÐºÑÐ¾Ñ ÑÑÑÐ¾Ðº Ð¿ÑÑÑ. Ð¤Ð°Ð¹Ð» input.txt Ð¿ÑÑÑ Ð¸Ð»Ð¸ Ð½Ðµ ÑÑÑÐµÑÑÐ²ÑÐµÑ." << endl;
        return;
    }

    cout << "=== ÐÑÐ²Ð¾Ð´ ÑÑÑÐ¾Ðº Ð½Ð° ÑÐºÑÐ°Ð½ ===" << endl;
    cout << "ÐÐ¾Ð»Ð¸ÑÐµÑÑÐ²Ð¾ ÑÑÑÐ¾Ðº: " << lines.size() << endl;

    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }

    cout << "============================" << endl;
}

// Ôóíêöèÿ 3: Çàïèñü ñòðîê â ôàéë
void writeLinesToFile(const vector<string>& lines, const string& filename) {
    if (lines.empty()) {
        cout << "ÐÐ½Ð¸Ð¼Ð°Ð½Ð¸Ðµ: Ð½ÐµÑÐµÐ³Ð¾ Ð·Ð°Ð¿Ð¸ÑÑÐ²Ð°ÑÑ - Ð²ÐµÐºÑÐ¾Ñ ÑÑÑÐ¾Ðº Ð¿ÑÑÑ." << endl;
        return;
    }

    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cerr << "ÐÑÐ¸Ð±ÐºÐ°: Ð½Ðµ ÑÐ´Ð°Ð»Ð¾ÑÑ Ð¾ÑÐºÑÑÑÑ ÑÐ°Ð¹Ð» Ð´Ð»Ñ Ð·Ð°Ð¿Ð¸ÑÐ¸: " << filename << endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Ð£ÑÐ¿ÐµÑÐ½Ð¾ Ð·Ð°Ð¿Ð¸ÑÐ°Ð½Ð¾ " << lines.size() << " ÑÑÑÐ¾Ðº Ð² ÑÐ°Ð¹Ð»: " << filename << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Ïðîãðàììà äëÿ ðàáîòû ñ òåêñòîâûìè ôàéëàìè" << endl;

    // Ôóíêöèÿ 1: ×òåíèå èç ôàéëà
    vector<string> lines = readLinesFromFile("input.txt");

    // Ôóíêöèÿ 2: Âûâîä íà ýêðàí
    printLinesToConsole(lines);

    // Ôóíêöèÿ 3: Çàïèñü â ôàéë
    writeLinesToFile(lines, "output.txt");

    cout << "Ïðîãðàììà çàâåðøåíà" << endl;
    return 0;
}