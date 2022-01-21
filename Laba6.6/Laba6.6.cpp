// Laba6.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <map>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::pair;
void Mymap()
{
    cout << "Введите строку: \n";
    string s,s1;
    map <string, int> mp;
    int a,b,c=5,k=1;

    getline(cin, s);
    for (int i = 0; i < s.length(); i++)          //кол-во слов
    {
        if (s[i] == ' ') k += 1;
    }
    for (int i=0;i<k;i++)
    {
        a = 1;
        b = s.find(' ');
        //c = s.length() - b - 1;
        s1 = s.substr(0, b);
        //pair <string, int> p1 = make_pair(s1, a+1);
        mp[s1] += a;
        s.erase(0, b+1);
    }
    mp[s1] = c;
    map <string, int> ::iterator it = mp.begin();
    cout << "Список: " << endl;
    for (int i = 1; it != mp.end(); it++, i++) {  // выводим их
        cout << "\n" << i << ") Слово: " << it->first << " \nЧастота встречи: " << double(it->second)*100/k<<"%" << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Rus");
    Mymap();
}

