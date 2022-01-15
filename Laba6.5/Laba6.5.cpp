// Laba6.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <list>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::set;
using std::list;
void mset()
{
    
    string s;
    set <string> Myset;
    
    cout << "Введите результаты теста: \n";
    while (s != ".")
    {
        getline(cin, s);
        if (s == ".") break;
        if (s!="100") Myset.emplace(s);
    }
    cout << "\nРезультат:";
    
    for (int i = 0; i < 2; i++)
    {
        cout << "\n" << *Myset.begin();
        Myset.erase(Myset.begin());
    }
}
int main()
{
    setlocale(LC_ALL, "Rus");
    mset();
}

