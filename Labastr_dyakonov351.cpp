// Labastr_dyakonov351.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void palindrom(char*text)
{
    int k=0,j;
    int length = strlen(text);
    j = length-1;
    for (int i = 0; i < j; i++)
    {
        for (j;i<j; j--) 
        {
            if (text[i] == ' ')
            {
                i++;
            }
            if (text[j] == ' ')
            {
                j--;
            }
            text[i] = tolower(text[i]);
            text[j] = tolower(text[j]);
            if (text[i] == text[j])
            {
                k=k+1;
            }
            else
            {
                k = 0;
            }
        }
    }
        
    if (k>0)
    {
        cout<<"Является палиндромом\n";
    }
    else
    {
        cout<<"Не является палиндромом\n";
    }

}

void cypher(char*strcypher,int key)
{
    for (int i = 0; i < strlen(strcypher); i++)
    {
        strcypher[i] = char(int(strcypher[i]) + key);
    }
}

void search(char*text)
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '"')
        {
            i++;
            while (text[i] != '"')
            {
                cout << text[i];
                i++;
            }
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b,i=0;
    char text[255];
    cout << "Введите текст: \n";
    cin >> text[i];
    while (text[i] != '.')
    {
        i++; cin >> text[i];
    }
    text[i] = '\0';
    /*
    for (int c = 0; c < i; c++)
    {
        cout << text[c];
    }
    */
    int x;
    while (true)
    {
        cout << "Выберите действие: \n"
            << "1. Проверка на палиндром\n"
            << "2. Поиск подстроки в строке\n"
            << "3. Шифр Цезаря\n"
            << "4. Кавычки\n"
            << "5. Выход\n";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            palindrom(text);
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            char strcypher[255];
            for (int b = 0; b < i; b++)
            {
                strcypher[b] = text[b];
            }
            int key,c;
            cout << "Введите кол-во сдвигов: ";
            cin >> key;
            cout << "\n";
            cypher(text,key);
            for (c = 0; c < i; c++)
            {
                cout << text[c];
            }
            text[c] ='\0';
            cout << "\n";
            break;

        }
        case 4:
        {
            search(text);
            break;
        }
        default:
        {
            delete[] text;
            return 0;
        }
                       
        }
    }




}
