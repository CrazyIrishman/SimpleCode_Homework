#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int SymbolCount;
	cout << "������� ������ ������ : " << endl;
	cin >> SymbolCount;

	int StringCount;
	cout << "������� ������ ������ : " << endl;
	cin >> StringCount;

	char Symbol;
	cout << "������� ������, ��������� : " << endl;
	cin >> Symbol;

	cout << endl;

	if (Symbol != 42)
	{
		cout << "�� ������ ������. ��������� ������ ������ ���������." << endl;
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