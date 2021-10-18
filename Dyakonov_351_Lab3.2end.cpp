// Dyakonov_351_Lab3.2end.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cout;
using std::cin;

void task1(int*& mas, int& size)
{
    if (mas != nullptr) delete[] mas;
    cout << "Ведите размер массива: \n";
    cin >> size;
    mas = new int[size];
    cout << "Введите элементы массива: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> mas[i];
    }
   
    

}

void task2(int* &mas,int &size)
{
    cout << "Массив размером: " << size << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << std::endl;
    }
}
int sum(int num)
{
    int x = 0;
    int r = num;
    int sum = 0;
    while (r > 0)
    {
        r = r / 10;
        x++;
    }
    int* mas = new int[x];
    for (int i = 0; i < x; i++)
    {
        mas[x - i - 1] = num % 10;
        num = num / 10;
    }
    for (int i = 1; i < x; i += 2)
    {
        sum += mas[i];
    }
    return sum;
}
void task3(int* mas,int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (sum(mas[i]) < sum(mas[j]))
            {
                std::swap(mas[i], mas[j]);
            }
        }
    }
}
void task4(int* mas,int& size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (mas[i] % 10 < mas[j] % 10)
            {
                std::swap(mas[i], mas[j]);
            }
            else if (mas[i] % 10 == mas[j] % 10)
            {
                if (mas[i] > mas[j])
                {
                    std::swap(mas[i], mas[j]);
                }
            }
        }
    }
}
int main()
{
    int q;
    setlocale(LC_ALL, "Rus");
    int mas_size;
    
    int* mas = nullptr;
    
    
    
    while (true)
    {
        cout << "Выберете действие: \n"
            << "Ввод массива - 1\n"
            << "Вывод массива - 2\n"
            << "Сортировка массива по сумме - 3\n"
            << "Сортировка по последней цифре- 4\n"
            <<"Выход - 5\n";
        std::cin >> q;
        switch (q)
        {
        case 1:
        {
            task1(mas,mas_size);
            break;
        }
        case 2:
        {
            task2(mas,mas_size);
            break;
        }
        case 3:
        {
            task3(mas,mas_size);
            break;
        }
        case 4:
        {
            task4(mas,mas_size);
            break;

        }
        case 5:
        {
            return 0;
        }
        default:
        {
            return 0;
        }

        }
        
    }


    delete[] mas;

}