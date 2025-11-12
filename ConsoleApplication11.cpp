// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Person
{
    string Family;
    string Name;
};

vector<string> read_file(const
    string& path) {
    ifstream file;
    file.open(path);
    vector<string> result;
    string line;
    while (getline(file, line)) {
        result.push_back(line);

    }
    file.close();
    return result;

  }
void split(const string& source, char delim, string& Family, string& Name) {
    auto pos = source.find(delim);
    Family = source.substr(0, pos);
    Name = source.substr(0, pos);
}
void record_struct(const string& path, Person Pers) {
    auto lines = read_file(path);
    for (auto names : lines) {
        
        split(names, '|', Pers.Family, Pers.Name);
    }
}

void record_file(const string& path, Person Pers) {
    ofstream file;
    file.open(path);

    file<< Pers.Family << endl;
    file.close();
}
int main()
{
    string path0 = "C:/Users/Student/Desktop/family1.txt";
    Person Bunny;
    auto lines = read_file(path);



    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
