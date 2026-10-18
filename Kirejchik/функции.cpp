#include <iostream>
#include <Windows.h>

//1 Задание
const int size = 12;
int MONTH[size]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isLeap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Data(int day, int month, int year, int day1, int month1, int year1)
{
	if (year > year1 || (year == year1 && month > month1) || (year == year1 && month == month1 && day > day1))
	{
		std::swap(day, day1);
		std::swap(month, month1);
		std::swap(year, year1);
	}
	int daysCount = 0;
		while (day != day1 || month != month1 || year != year1)
		{
			int maxDays = MONTH[month - 1];
			if (month == 2 && isLeap(year))
			{
				maxDays = 29;
			}
			day++;
			daysCount++;

			if (day > maxDays)
			{
				day = 1;     
				month++;      
			}

			if (month > 12) 
			{
				month = 1;    
				year++;      
			}
		}

	return daysCount;
}

// 2 Задание
const int size = 5;
int arr[size]{4, 3, 6, 5, 1};

double Arif(int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

// 3 Задание

const int size = 10;
int arr[size]{ 1, 2 ,3 , -1, -2, -3, -4, 0, 0, 0 };

	void Kol(int arr[], int size)
	{
		int pol = 0;
		int otr = 0;
		int nol = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				pol++;
			}
			else if (arr[i] < 0) 
			{
				otr++;            
			}
			else                 
			{
				nol++;           
			}
		}
		std::cout << "Кол-во положительных элементов: " << pol << "\n";
		std::cout << "Кол-во отрицательных элементов: " << otr << "\n";
		std::cout << "Кол-во нулевых элементов: " << nol << "\n";
	}


int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	// 1 Задание
	
	int day = 0;
	int month = 0; 
	int year = 0; 
	int day1 = 0; 
	int month1 = 0; 
	int year1 = 0;


	std::cout << "Введите 1 дату(через пробел):" << "\n";
	std::cin >> day >> month >> year;
	std::cout << "Введите 2 дату(через пробел):" << "\n";
	std::cin >> day1 >> month1 >> year1;

	std::cout << Data(day, month, year, day1, month1, year1);


	// 2 Задание
	std::cout << "Среднее Арифметическое:" << Arif(arr, size);


	// 3 Заданиe
	Kol(arr, size);
	
	
	return 0;
}
