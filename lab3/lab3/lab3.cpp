#include <iostream>
#include <fstream>

using namespace std;

class Pet {
public:
    string name;
    string type;
    int age;

    void save() {
        ofstream file("pets.txt", ios::app);
        file << name << " " << type << "" << age << endl;
        file.close();
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Pet pet;

    cout << "Имя питомца: ";
    cin >> pet.name;
    cout << "Вид питомца: ";
    cin >> pet.type;
    cout << "Возраст: ";
    cin >> pet.age;

    pet.save();
    cout << "Сохранено в файл" << endl;

    return 0;
}