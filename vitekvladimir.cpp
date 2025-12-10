#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция 1: Чтение строк из файла в вектор
vector<string> readLinesFromFile(const string& filename) {
    vector<string> lines;

    return lines;
}

// Функция 2: Вывод строк на экран
void printLinesToConsole(const vector<string>& lines) {
    if (lines.empty()) {
        cout << "Внимание: вектор строк пуст. Файл input.txt пуст или не существует." << endl;
        return;
    }

    cout << "=== Вывод строк на экран ===" << endl;
    cout << "Количество строк: " << lines.size() << endl;

    for (size_t i = 0; i < lines.size(); ++i) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }

    cout << "============================" << endl;
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const vector<string>& lines, const string& filename) {
    if (lines.empty()) {
        cout << "Внимание: нечего записывать - вектор строк пуст." << endl;
        return;
    }

    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cerr << "Ошибка: не удалось открыть файл для записи: " << filename << endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Успешно записано " << lines.size() << " строк в файл: " << filename << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Программа для работы с текстовыми файлами" << endl;

    // Функция 1: Чтение из файла
    vector<string> lines = readLinesFromFile("input.txt");

    // Функция 2: Вывод на экран
    printLinesToConsole(lines);

    // Функция 3: Запись в файл
    writeLinesToFile(lines, "output.txt");

    cout << "Программа завершена" << endl;
    return 0;
}