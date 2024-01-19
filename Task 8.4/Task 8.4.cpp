#include <iostream>

using namespace std;

class Student
{
private:
    string FIO;
    int number_of_gradebook;
public:
    Student()
    {
        set_FIO("Иванов Иван Иванович");
        set_number_of_gradebook(1488);
    }
    void set_FIO(string FIO) { this->FIO = FIO; }
    void set_number_of_gradebook(int number_of_gradebook) { this->number_of_gradebook = number_of_gradebook; }
    string get_FIO() { return FIO; }
    int get_number_of_gradebook() { return number_of_gradebook; }
    friend ostream& operator<<(ostream& out, Student& student)
    {
        out << "ФИО: " << student.get_FIO() << endl;
        out << "Номер зачётной книжки: " << student.get_number_of_gradebook();
        return out;
    }
};

class Aspirant :Student
{
private:
    string dissertation_topic;
public:
    Aspirant()
    {
        set_FIO("Иванов Иван Иванович");
        set_number_of_gradebook(1488);
        set_dissertation_topic("Решение загадки про два стула");
    }
    void set_dissertation_topic(string dissertation_topic) { this->dissertation_topic = dissertation_topic; }
    string get_dissertation_topic() { return dissertation_topic; }
    friend ostream& operator<<(ostream& out, Aspirant& aspirant)
    {
        out << "ФИО: " << aspirant.get_FIO() << endl;
        out << "Номер зачётной книжки: " << aspirant.get_number_of_gradebook() << endl;
        out << "Тема диссертации: " << aspirant.get_dissertation_topic();
        return out;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Student student;
    cout << student << endl << endl;
    Aspirant aspirant;
    cout << aspirant << endl << endl;

    return 0;
}