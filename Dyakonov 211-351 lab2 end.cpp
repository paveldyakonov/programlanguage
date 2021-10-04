// Dyakonov 211-351 2222.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void task1()
{
    int n, i = 0;
    std::cout << "Введите число: \n";
    std::cin >> n;
    for (i = 0; i != (n + 1); i++)
    {
        for (int k = 0; k != (i + 1); k++)
        {
            std::cout << k;

        }

        std::cout << "\n";
    }
    std::cout << "\n\n\n";

}
double fact(int g)
{
    if (g<0)
    {
        return 0;
    }
    if (g==0)
    {
        return 1;
    }
    else
    {
        return g*fact(g-1);
    }
}
void task2()
{
    int g,z;
    std::cout<<"Введите число для вычисления бинома: \n";
    std::cin>>g;
    for (int k=0;k<=g;k++)
    {
        z=g-k;
        std::cout<<"Бином = "<<fact(g)/(fact(z)*fact(k))<<"\t k= "<<k<<"\n";
    }
    std::cout << "\n\n\n";
    
}


void task3()
{
    int x = 0, y = 0, h = 0, sum = 0;
    double ans;
    while ((x != 1234) and (y != 1234))
    {
        std::cout << "Для получения ответа введите 1234 и любое число\n";
        std::cout << "Введите координаты точки: " << "\n";
        std::cin >> x >> y;
        if ((x != 1234) and (y != 1234))
        {
            sum = sum+x + y;
            h += 1;
        }
        else
        {
            break;
        }

    }
    
    ans = float(sum) / h;
    std::cout << "Среднее арифметическое: " << ans << std::endl<<"\n\n\n";
    
    
}

int task4()
{
    return 0;
}

int main()
{
    int q;
    setlocale(LC_ALL, "Rus");
    while (true)
    {
        std::cout << "Выберете действие: \n"
            << "Числовой треугольник - 1\n"
            << "Биномиальные коэффициенты - 2\n"
            << "Среднее арифметическое - 3\n"
            << "Выход - 4\n";
        std::cin >> q;
        switch (q)
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
