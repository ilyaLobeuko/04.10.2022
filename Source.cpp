#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
		//Case1. Дано целое число в диапазоне 1–7.
		//Вывести строку — название дня
		//недели, соответствующее данному числу(1 — «понедельник», 2 — «вторник» и т. д.)
	/*int day;
	cin >> day;
	switch (day) {
	case 1: cout << "понедельник" << endl; break;
	case 2: cout << "вторник" << endl; break;
	case 3: cout << "среда" << endl; break;
	case 4: cout << "четверг" << endl; break;
	case 5: cout << "пятница" << endl; break;
	case 6: cout << "суббота" << endl; break;
	case 7: cout << "воскресенье" << endl; break;
	default: cout << "Ошибочный номер дня" << endl;*/
	//Case2.
	/*int K;
	cin >> K;
	switch (K) {
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "неудовлетварительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4: cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default: cout << "Ошибка" << endl;*/
	//Case3.
	/*int month;
	cin >> month;
	switch (month) {
	case 1:
	case 2:
	case 12: cout << "зима" << endl; break;
	case 3:
	case 4:
	case 5: cout << "весна" << endl; break;
	case 6:
	case 7:
	case 8: cout << "лето" << endl; break;
	case 9:
	case 10:
	case 11: cout << "осень" << endl; break;
	}*/
	//Case4.Дан номер месяца — целое число в диапазоне 1–12
	//(1 — январь, 2 —февраль и т.д.).
	//Определить количество дней в этом месяце для невисокосного года.
	/*int month;
	cin >> month;
	switch (month) {
	case 1: cout << "31" << endl; break;
	case 2: cout << "28" << endl; break;
	case 3: cout << "31" << endl; break;
	case 4: cout << "30" << endl; break;
	case 5: cout << "31" << endl; break;
	case 6: cout << "30" << endl; break;
	case 7: cout << "31" << endl; break;
	case 8: cout << "31" << endl; break;
	case 9: cout << "30" << endl; break;
	case 10: cout << "31" << endl; break;
	case 11: cout << "30" << endl; break;
	case 12: cout << "31" << endl; break;
	}*/
	//1.
	/*int a;
	cin >> a;
	if (a == 10) {
		cout << "Верно" << endl;
	}
	else (a != 0) {
		cout << "Неверно" << endl;
	}*/
	//2.
	/*int a;
	cin >> a;
	if (a > 0) {
		cout << "Верно" << endl;
	}
	else if(a <= 0) {
		cout << "Неверно" << endl;
	}*/
	//3.
	/*int a;
	cin >> a;
	if (a < 0) {
		cout << "Верно" << endl;
	}
	else if (a >= 0) {
		cout << "Неверно" << endl;
	}*/
	//4.
	/*int a;
	cin >> a;
	if (a >= 0) {
		cout << "Верно" << endl;
	}
	else if (a < 0) {
		cout << "Неверно" << endl;
	}*/
	//5.
	/*int a;
	cin >> a;
	if (a <= 0) {
		cout << "Верно" << endl;
	}
	else if (a > 0) {
		cout << "Неверно" << endl;
	}*/
    //6.
//int a;
//cin >> a;
//if (a != 0) {
//	cout << "Верно" << endl;
//}
//else if (a == 0) {
//	cout << "Неверно" << endl;
//}
//9.
bool test;
cin >> test;
if (test == true) {
	cout << "Верно" << endl;
}
else {
	cout << "Неверно" << endl;
}

	return 0;
}