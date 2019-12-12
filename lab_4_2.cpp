#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, f;
	f = 0;
	do
	{
		cout << "Вопрос 1. Столица Румынии." << endl;
		cout << "1)Бухарест" << endl;
		cout << "2)Клуж" << endl;
		cout << "3)Дева" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "Correct" << endl;
			f += 1;
			break;
		}
		case 2:
		case 3:
		{
			cout << "Incorrect" << endl;
			break;
		}
		default:
		{
			cout << "Error" << endl;
		}
		}
	} while (a < 1 || a > 3);

	do
	{
		cout << "Вопрос 2. Столица Молдавии." << endl;
		cout << "1)Орхей" << endl;
		cout << "2)Криково" << endl;
		cout << "3)Кишинев" << endl;
		cin >> a;
		switch (a)
		{
		case 3:
		{
			cout << "Correct" << endl;
			f += 1;
			break;
		}
		case 1:
		case 2:
		{
			cout << "Incorrect" << endl;
			break;
		}
		default:
		{
			cout << "Error" << endl;
		}
		}
	} while (a < 1 || a > 3);

	do
	{
		cout << "Вопрос 3. Столица Греции." << endl;
		cout << "1)Аттика" << endl;
		cout << "2)Афины" << endl;
		cout << "3)Кастория" << endl;
		cin >> a;
		switch (a)
		{
		case 2:
		{
			cout << "Correct" << endl;
			f += 1;
			break;
		}
		case 1:
		case 3:
		{
			cout << "Incorrect" << endl;
			break;
		}
		default:
		{
			cout << "Error" << endl;
		}
		}
	} while (a < 1 || a > 3);

	do
	{
		cout << "Вопрос 4. Столица Ирландии" << endl;
		cout << "1)Дроэда" << endl;
		cout << "2)Дублин" << endl;
		cout << "3)Бирр" << endl;
		cin >> a;
		switch (a)
		{
		case 2:
		{
			cout << "Correct" << endl;
			f += 1;
			break;
		}
		case 1:
		case 3:
		{
			cout << "Incorrect" << endl;
			break;
		}
		default:
		{
			cout << "Error" << endl;
		}
		}
	} while (a < 1 || a > 3);

	do
	{
		cout << "Вопрос 5. Столица Кубы" << endl;
		cout << "1)Санта-Клара" << endl;
		cout << "2)Варадеро" << endl;
		cout << "3)Гавана" << endl;
		cin >> a;
		switch (a)
		{
		case 3:
		{
			cout << "Correct" << endl;
			f += 1;
			break;
		}
		case 1:
		case 2:
		{
			cout << "Incorrect" << endl;
			break;
		}
		default:
		{
			cout << "Error" << endl;
		}
		}
	} while (a < 1 || a>3);
	if (f == 0)
	{
		cout << "Тест не пройден. Количество верных ответов равно: 0" << endl;
	}
	else
	{
		cout << "Тест пройден. Ваше количество верных ответов равно: " << f << endl;
	}
	system("pause");
	return 0;
}
