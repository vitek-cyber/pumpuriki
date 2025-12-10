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

    // ВРЕМЕННО: тестовые данные для отладки функций 2 и 3
    vector<string> testLines = { "Строка 1", "Строка 2", "Строка 3", "Тестовая строка" };

    // Функция 2: Вывод на экран
    printLinesToConsole(testLines);

    // Функция 3: Запись в файл
    writeLinesToFile(testLines, "output.txt");


    cout << "Программа завершена" << endl;
    return 0;
}