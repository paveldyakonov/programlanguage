#include <iostream>
#include <string>
#include <fstream>

using std::string;

void output(string arr)                      //вывод массива 
{
    std::cout << "\n";
    std::cout << arr;
    std::cout << "\n";
    return;
}

string poiskk(char che1, char che2, string sarr) {
    int i, j1, j2;
    j2 = sarr.length();
    for (i = 0; i < sarr.length(); i++)
    {
        if (sarr[i] == che1) j1 = i;
        if (sarr[i] == che2) j2 = i;
    }
    if (che1 == '@') j1 = -1;                         //символ границы фрагмента с 1 символа
    string s;
    for (i = j1 + 1; i < j2; i++) s.push_back(sarr[i]);
    return s;
}

string file_format(string file_path_full)
{

    return poiskk('.', '\0', file_path_full);            //расширение
}

string file_name(const string file_path_full)
{
    
    return poiskk(char(92), '.', file_path_full);    //имя
}

string file_path(const string file_path_full)
{

    return poiskk(char(64), char(92), file_path_full);    //расположение
}

char file_disk(const string file_path_full)
{

    return file_path_full[0];                           //диск
}

bool file_rename(string* file_path_full)                 //переименовать
{
    string s, s1;
    int i = 0;
    std::cout << "Введите новое имя файла: ";
    std::cin.ignore();
    getline(std::cin, s);
    s1 = file_path(*file_path_full) + char(92) + s + '.' + file_format(*file_path_full);    //построение нового полного имени
    if (s1 != *file_path_full) i++;
    *file_path_full = s1;
    return i;
}

bool file_copy(const string file_path_full)
{
    std::ifstream oldf(file_path_full.c_str());        //открытие старого файла
    string nf = file_path(file_path_full) + char(92) + file_name(file_path_full) + "_copy." + file_format(file_path_full);     //создание полного имени нового файла
    std::ofstream newf(nf.c_str());                    //открытие нового файла
    int a = 0;
    if (oldf.is_open() && newf.is_open()) {            //проверка на открытость файлов
        a = 1;
        while (getline(oldf, nf)) {                            //проверка конца файла, чтение из старого
            newf << nf << "\n";                                 //запись в новый файл
            nf = "";
        }
    }
    oldf.close();                                       //закрытие старого файла
    newf.close();                                      //закрытие нового файла
    return a;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    string s, s2;
    std::cout << "Введите полное имя файла\n";
    getline(std::cin, s);
    char a = 0;
    int i;
    while (a != '8')
    {
        std::cout << "\n\nВыберете действие:  \n1.Расширение  "
            << "\n2.Имя \n3.Расположение \n4.Диск \n5.Переименовать \n6.Создать копию \n"
            << "7.Вывод полного имени файла \n8.Выход\n\n";
        std::cin >> a;
        s2 = "";
        switch (a)
        {
        case '1':
        {
            s2 = file_format(s);
            break;
        }
        case '2':
        {
            s2 = file_name(s);
            break;
        }
        case '3':
        {
            s2 = file_path(s);
            break;
        }
        case '4':
        {
            s2 = file_disk(s);
            break;
        }
        case '5':
        {
            i = file_rename(&s);
            if (i) std::cout << "Имя изменено\n";
            else std::cout << "Ошибка\n";
            s2 = s;
            break;
        }
        case '6':
        {
            i = file_copy(s);
            break;
            if (!i) std::cout << "Error!\n";
        }
        case '7':
        {                                //вывод полного имени файла
            output(s);
            break;
        }
        default:
        {
            break;
        }
        };
        if (a != '8') output(s2);                //вывод фрагмента
    };
    return 0;
}
