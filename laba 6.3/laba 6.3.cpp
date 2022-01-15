// laba 6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::endl;
using std::queue;

unsigned Div(unsigned a) 
{
    while (a % 2 == 0)
        a /= 2;
    while (a % 3 == 0)
        a /= 3;
    while (a % 5 == 0)
        a /= 5;
    return a;
}

void queue_task()
{
    int a,b=0;
    cout << "Введите кол-во натуральных чисел: \n";
    cin >> a;
    int s=1;
    queue <int> q1;
    queue <int> q2;
    queue <int> q3;
    queue <int> q;
    q1.push(2);
    q2.push(3);
    q3.push(5);
    
    
    while (q.size() != a)
    {
        if ((q1.front() < q2.front()) and (q1.front() < q3.front()))
        {
            
            if (Div(q1.front()) == 1)
            {
                q.push(q1.front());
                q1.pop();
            }
            else q1.pop();
        }
        else if ((q1.front() > q2.front()) and (q2.front() < q3.front()))
        {
            if (Div(q2.front()) == 1)
            {
                q.push(q2.front());
                q2.pop();
            }
            else q2.pop();
        }
        else if ((q1.front() > q3.front()) and (q2.front() > q3.front()))
        {
            if (Div(q3.front()) == 1)
            {
                q.push(q3.front());
                q3.pop();
            }
            else q3.pop();
        }
        else if ((q1.front() == q2.front()) and (q2.front() < q3.front()))
        {
            if (Div(q1.front()) == 1)
            {
                q.push(q1.front());
                q1.pop();
                q2.pop();
            }
            else
            {
                q1.pop();
                q2.pop();
            }
        }
        else if ((q1.front() > q2.front()) and (q2.front() == q3.front()))
        {
            if (Div(q3.front()) == 1)
            {
                q.push(q3.front());
                q3.pop();
                q2.pop();
            }
            else
            {
                q3.pop();
                q2.pop();
            }
        }
        else if ((q1.front() == q3.front()) and (q2.front() > q3.front()))
        {
            if (Div(q1.front()) == 1)
            {
                q.push(q1.front());
                q1.pop();
                q3.pop();
            }
            else
            {
                q1.pop();
                q3.pop();
            }
        }
        else if ((q1.front() == q2.front()) and (q2.front() == q3.front()))
        {
            if (Div(q1.front()) == 1)
            {
                q.push(q1.front());
                q1.pop();
                q2.pop();
                q3.pop();
            }
            else
            {
                q1.pop();
                q2.pop();
                q3.pop();
            }
        }
        s=q.back();
        
        q1.push(2 * s);
        q2.push(3 * s);
        q3.push(5 * s);
        b += 1;
    }
    
    cout << q.size()<<"\n";
    
    int y;
    while (q.empty()==false)
    {
        y = q.front();
        if (Div(y) == 1)
        {
            cout << q.front() << " ";
            q.pop();
        }
        else q.pop();

    }
    
}
int main()
{
    setlocale(LC_ALL, "Rus");
    queue_task();



}

