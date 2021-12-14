// laba6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::stack;

void task(string& s)
{
    int g;
    g = s.length();
    stack <char> st;
    for (int i = 0; i < g; i++)
    {
        if ((s[i] == '(') or (s[i] == '[') or (s[i] == '{'))
        {
            st.push(s[i]);
        }
        if (s[i] == ')')
        {
            if (st.top() == '(') st.pop();
        }
        if (s[i] == ']')
        {
            if (st.top() == '[') st.pop();
        }
        if (s[i] == '}')
        {
            if (st.top() == '{') st.pop();
        }
    }

    if (st.empty() == true) cout << "Выражение верное";
    else cout << "Выражение неверное";
}
int main()
{
    int g;
    setlocale(LC_ALL, "Rus");
    string s;
    cout << "Введите строку: \n\n";
    getline(cin, s);
    cout << "\n\n";
    task(s);
    
}

