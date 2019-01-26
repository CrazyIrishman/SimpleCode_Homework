#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int SymbolCount;
	cout << "Введите ширину фигуры : " << endl;
	cin >> SymbolCount;

	int StringCount;
	cout << "Введите высоту фигуры : " << endl;
	cin >> StringCount;

	char Symbol;
	cout << "Введите символ, звездочку : " << endl;
	cin >> Symbol;

	cout << endl;

	if (Symbol != 42)
	{
		cout << "Не верный символ. Требуется ввести именно звездочку." << endl;
		_getch();
		return 0;
	}

	for (int i = 0; i < StringCount; i++)
	{
		cout << Symbol;	
		
		for (int j = 0; j < SymbolCount - 1; j++)
		{

			if (i > 0 && i < StringCount - 1)
			{
				for (int k = 0; k < SymbolCount - 2; k++)
				{
					cout << " ";
				}
			}

			cout << Symbol;


		} 

		cout << endl;
	}

	
	_getch();
}