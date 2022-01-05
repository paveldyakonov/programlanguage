// Laba6.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::list;
using std::string;
void Mylist()
{
    string s;
    list <string> l1;
    cout << "Введите текст: \n";
    while (s != ".")
    {
        getline(cin, s);
        if (s == ".") break;
        l1.push_back(s);
    }
    
    l1.sort();
    while (l1.empty() == false)
    {
        cout << "\n" << l1.front();
        l1.pop_front();
    }
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int i=0;
    Mylist();

}

