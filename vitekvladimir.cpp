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
    
}

// Функция 3: Запись строк в файл
void writeLinesToFile(const vector<string>& lines, const string& filename) {
    
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