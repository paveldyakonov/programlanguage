// Laba6.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#include <string>
#include <map>
using std::cout;
using std::cin;
using std::endl;
using std::list;
using std::string;
using std::pair;
using std::map;
void Mylist()
{
    
    string s,s1;
    list <string> l1;
    map <string,string> mp;
    cout << "Введите текст: \n";
    while ((s != ".")and(s1 != "."))
    {
        getline(cin, s);
        getline(cin, s1);
        if (s == ".") break;
        if (s1 == ".") break;
        //l1.push_back(s);
        pair <string, string> p1 = make_pair(s, s1);
        
        mp[s] +="\n"+s1;
        //l1.push_back(s1);
        //mp.insert(p1);
        //l1.push_back(s1);
    }
    map <string, string> ::iterator it = mp.begin();
    cout << "Список: " << endl;
    for (int i = 1; it != mp.end(); it++, i++) {  // выводим их
        cout <<"\n"<< i << ") Группа: " << it->first << " \nУчастники: " << it->second << endl;
    }
    /*while (mp.empty() == false)
    {
        cout << mp.begin();
        mp.erase(mp.begin());
    }
    l1.sort();
    while (l1.empty() == false)
    {
        cout << "\n" << l1.front();
        l1.pop_front();
    }*/
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int i=0;
    Mylist();

}

