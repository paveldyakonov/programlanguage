// laba6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <deque>
using std::cin;
using std::cout;
using std::string;
using std::deque;
using std::endl;
void palind(string& s)
{
    cout << "\n\n";
    int g, n;
    string r;
    deque <int> dq;
    g = s.length();
    for (int i = 0; i < g; i++)
    {
        if (s[i] != char(32))
        {
            s[i] = tolower(s[i]);
            r = r + s[i];
        }
    }
    n = r.length();
    for (int i = 0; i < n; i++)
    {
        r[i] = tolower(r[i]);
        dq.emplace_back(r[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (dq.front() == dq.back())
        {
            dq.pop_back();
            dq.pop_front();
        }
    }
    if (dq.size() == 1)
    {
        dq.pop_front();
    }

    if (dq.empty() == true)
    {
        cout << "Является палиндромом\n\n";
    }
    else cout << "Не является палиндромом\n\n";
}
int main()
{
    setlocale(LC_ALL, "Rus");
    string s;
    deque <int> dq;
    cout << "Введите строку:\n";
    getline(cin, s);
    cout << "\n";
    int a;

    while (true)
    {
        int a;
        cout << "Выберете дейтвие: \n"
            << "1. Проверка на палиндром\n"
            << "2. Алгоритм Грэхэма\n"
            << "3. Выход\n";
        cin >> a;
        switch (a)
        {
        case 1:
        {
            palind(s);
            break;
        }
        case 2:
        {
            break;
        }
        default:
            return 0;
        }

    }
}
