
#include <iostream>
#include<bitset>
using std::cout;
using std::cin;
using std::endl;
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "1.\t";
	cout << "Дьяконов Павел Станиславович 211-351\n";

	cout << "2.\tИзвините,меня не было на занятии, я не понял как делать. \n";

	int d;
	cout << "3.\n";
	cout << "\tВведите число: ";
	cin >> d;
    cout << "\tВ двоичной системе: " << std::bitset<15>(d) <<endl;
	cout << "\tВ шестнадцатеричной: " << std::hex << d << std::dec << endl;
	cout << "\tBool: " << bool(d) << endl << "\tDouble: " << double(d) << endl << "\tChar: " << char(d) <<endl;

	
	int a, b;
	cout << "4.\n";
	cout<<"\tВведите \"a\" и \"b\" для уравнения a*x=b: "<<endl<<"\t";
	cin >> a ;
	cout << "\t";
	cin >> b;
	cout << "\ta*x=b"<<std::endl;
	cout<<"\t" << a << "*" << "x" << "=" << b << endl;
	cout << "\tx="<<b<<"/"<<a<<endl;
	cout <<"\tx="<< double(b)/a<<endl;
	

	int c, v;
	cout << "5.\n";
	cout << "\tВведите концы отрезка для нахождения его середины: "<<endl<<"\t";
	cin >> c;
	cout << "\t";
	cin >> v;
	cout << "\tСередина отрезка: " <<float((c + v)) / 2 ;

	
}