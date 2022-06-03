#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string file_string, max;

    ifstream file;
    file.open("Текст.txt");
    if (file.is_open()) {
        while (file.good()) {
            getline(file, file_string);
            if (max.length() < file_string.length()) {
                max = file_string;
            }
        }
        file.close();
        cout << "Максимальний рядок: " << endl << " " << max << endl;
    }
    else {
        cerr << "Неможливо відкрити файл!" << endl;
    }

   
    return 0;
}
