// Dyakonov351Lab3_09.10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void task1()
{
    int k,s;
    cout << "Введите размер массива: ";
    cin >> k;
    cout << endl;
    int mas[1000];
    for (int i = 0; i < k; i++)
    {
        cout << "Введите " << i + 1 << " элемент массива: " << endl;
        cin >> mas[i];

    }
    
    for (int i = 0; i < k; i++)
     {
        for (int j = 0; j < (k - i - 1); j++)
        {
            if (mas[j] > mas[j + 1])
            {
                s = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = s;
            }
        }

    }
    
    for (int i = 0; i < k; i++)
    {
        cout << mas[i];
    }

    cout <<"\n" << endl;

    
}


void task2()
{
    int k,i=0,j;
    k = 26;
    char mas[1000];
    int sort[26];
    for (int i = 0; i < k; i++)
    {
        cout << "Введите " << i + 1 << " из 26 символов: ";
        cin >>  mas[i];
        cout << endl;
    }
    for (int i = 0; i < k; i++)
    {
        j = int(mas[i] - 'a');
        sort[j]++;
    }
    i = 0;
    while (j <= k)
    {
        if (sort[j] > 0)
        {
            mas[i] = char(int('a') + j);
            i++;
            sort[j]--;
        }
        else
        {
            j++;
        }
    }
    i = 0;
    for (int i = 0; i < k; i++)
    {
        cout <<mas[i];
    }
}
bool task3()
{
    return 0;
}
int main()
{
    
    setlocale(LC_ALL, "Rus");
    int x, a=0, k, s;
    

    while (true)
    {

        cout << "Выберете действие: \n"
             << "1. Пузырьковая сортировка\n"
             << "2. Сортировка подсчетом\n"
             << "3. Сортировка слиянием\n"
             << "4. Выход\n"
             << endl;
        cin >> x;
        switch (x)
        {
        case 1:
        {
            task1();
            break;
        }
        case 2:
        {
            task2();
            break;
        }
        case 3:
        {
            task3();
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            return 0;
        }
        }

    }
    
    

  
}

