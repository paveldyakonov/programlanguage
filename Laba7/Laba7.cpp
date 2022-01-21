// Laba7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using std::swap;
using std::cin;
using std::cout;
using std::endl;
using std::string;
template<typename T>
void sort(T a,T b)
{
    if (a > b)
    {
        cout << b <<"\t" << a;
    }
    else
    {
        cout << a <<"\t" << b;
    }
    //return a+b;
}
template<typename Tb>
void usort(Tb a, Tb b)
{
    if (a > b)
    {
        cout << a << "\t" << b;
    }
    else
    {
        cout << b << "\t" << a;
    }
}

bool three()
{
    int x;
    while (true)
    {
        cout << "1 - Сортировка int\n"
            << "2 - Сортировка double\n"
            << "3 - Сортировка char\n"
            <<"4 - Сортировка string\n"
            <<"5 - Выход\n";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            int a, b,k,i,c;
            cout << "Введите числа: \n";
            cin >> a >> b;
            cout << "Выберете сортировку: \n"
                << "1 - От меньшего к большему\n"
                << "2 - От большего к меньшему\n";
            cin >> c;
            switch (c)
            {
            case 1:
            {
                sort(a, b);
                break;
            }
            case 2:
            {
                usort(a, b);
                break;
            }
            default:
                break;
            }
            cout << "\n";
            break;
        }
        case 2:
        {
            int c;
            double a, b;
            cout << "Введите дробные числа: \n";
            cin >> a >> b;
            cout << "Выберете сортировку: \n"
                << "1 - От меньшего к большему\n"
                << "2 - От большего к меньшему\n";
            cin >> c;
            switch (c)
            {
            case 1:
            {
                sort(a, b);
                break;
            }
            case 2:
            {
                usort(a, b);
                break;
            }
            default:
                break;
            }
            cout << "\n";
            break; 
            cout << "\n";
            break;
        }
        case 3:
        {
            int c;
            char a, b;
            cout << "Введите символы: \n";
            cin >> a >> b;
            cout << "Выберете сортировку: \n"
                << "1 - От меньшего к большему\n"
                << "2 - От большего к меньшему\n";
            cin >> c;
            switch (c)
            {
            case 1:
            {
                sort(a, b);
                break;
            }
            case 2:
            {
                usort(a, b);
                break;
            }
            default:
                break;
            }
            cout << "\n";
            break; cout << "\n";
            break;
        }
        case 4:
        {
            int c;
            string a, b;
            cout << "Введите символы: \n";
            cin >> a >> b;
            //getline(cin, a);
            //getline(cin, b);
            cout << "Выберете сортировку: \n"
                << "1 - От меньшего к большему\n"
                << "2 - От большего к меньшему\n";
            cin >> c;
            switch (c)
            {
            case 1:
            {
                sort(a, b);
                break;
            }
            case 2:
            {
                usort(a, b);
                break;
            }
            default:
                break;
            }
            cout << "\n";
            break; cout << "\n";
            break;
        }
        default:
            return 0;
            break;
        }
    }
}
int main()
{
    int a, b;
    setlocale(LC_ALL, "Rus");
    
    while (true)
    {
        cout << "Выберете действие: \n"
                << "1 - on 3\n"
                << "2 - on 4\n"
                << "3 - on 5\n"
                <<"4 - Выход\n";
        cin >> a;
        switch (a)
        {
        case 1:
        {
            three();
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        default:
            return 0;
            break;
        }
    }
}

