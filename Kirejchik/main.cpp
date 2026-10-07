#include <iostream>
#include <Windows.h>

int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	// 1 Задание
	std::cout << "\t\tСчастливый билет:\n\n";

	int num = 0;
	std::cout << "Введите 6-ти значное число: \n";
	std::cin >> num;

	if (num < 100000 || num > 999999)
	{
		std::cout << "Ошибка! Число не шестизначное\n";
	}
	int first = num / 1000;
	int second = num % 1000;

	
	int sum1 = (first / 100) + ((first / 10) % 10) + (first % 10);

	int sum2 = (second / 100) + ((second / 10) % 10) + (second % 10);

	if (sum1 == sum2) 
	{
		std::cout << "Билет СЧАСТЛИВЫЙ!\n";
	}
	else 
	{
		std::cout << "Билет обычный\n";
	}

	// 2 Задание
	int num = 0;
	std::cout << "Введите 4-ех значное число: \n";
	std::cin >> num;

	if (num >= 1000 || num <= 9999)
	{
		int a = num / 1000;
		int b = (num / 100) % 10; 
		int c = (num / 10) % 10; 
		int v = num % 10;

		int result = b * 1000 + a * 100 + v * 10 + c;
		std::cout << "Результат: \n" << result;
	}
	else 
	{
	 std::cout << "Ошибка!! Введи 4-ех значное число";
	}
	


	// 3 Задание
	int a1, a2, a3, a4, a5, a6, a7;
	std::cout << "Введите 7 целых чисел: \n";
	std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;

	int max_num = a1;

	if (a2 > max_num) max_num = a2;
	if (a3 > max_num) max_num = a3;
	if (a4 > max_num) max_num = a4;
	if (a5 > max_num) max_num = a5;
	if (a6 > max_num) max_num = a6;
	if (a7 > max_num) max_num = a7;

	std::cout << "Максимальное число: " << max_num;
	

	return 0;



}


	/* тип_данных имя_переменной
	*/
	/*std::cout << "Серега\n";
		std::cout << "\tЧтобы есть\n";
		std::cout << "\t\tЧтобы просить попить\n";
		std::cout << "\t" << 2 << " тенге\n";
		std::cout << "что-то\n\n";
		std::cout << 655345345;*/
	/*double a = 4.3;
	double b = 4.3;
	

	if (a == b)
	{

		std::cout << "Cepera";
	}*/
	/*if (a == 0)
	{
		std::cout << "Hello\n";

	}
	else if (a != 0)
	{
		std::cout << 2;
	}
	else
	{
		std::cout << 1;


	}
	*/
	/*std::cout << "калькулятор\n\n";

	double a = 0;
	double b = 0;
	

	std::cout << "Введите 1 число:";
	std::cin >> a;
	std::cout << "Введите 2 число:";
	std::cin >> b;
	char v;
	std::cout << "Выберите действие:(+ - * /):";
	std::cin >> v;


	
	if (v == '+')
	{
		std::cout << "Cумма\n\n: " << a + b;

	}
	else if (v == '-')
	{
		std::cout << "Разность:\n\n" << a - b;
	}
	else if (v == '*')
	{
		std::cout << "Умножение:\n\n" << a * b;
	}
	else if (v == '/')
	{
		std::cout << "Частное:\n\n" << a / b;
	}
	else if (v == '/')
	{
		if ( b == 0)
		{
			std::cout << "Частное:\n\n" << a / b;
		}
		else
		{
			std::cout << "Ошибка вычисления!\n";
		}
	}
	else
	{
		std::cout << "Ошибка";
	}
	*/
	/*

типы данных:

	bool								true/false		0 - false

	char								'+'	- один символ	43     -128 - 127
	unsigned char						'#'				0 - 255

	short								123				-32768 -- 32767
	unsigned short						123				0 --65535

	int									456326			-2147483648 -- 2147483647
	long long int						12345678		дофига
	unsigned int						123465463		0 -- 42944967295

	float								12345.4561		+- 3.4Е+-38
	double								12345687.10536	1. 7E+-308
	long double							no comment		3.4e-4932 -- 1.1e+4932

	Операторы:

	математические: + - * / = -- += -= *= /= ()

	сравнительные: > < >= <= != == <=>

	логические: && (И)		|| (или)		! (нее)
	
	ТАБУ:	goto	and or not		int ИмяПеременной

	*/
	/*	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;
	
	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "Дискраминант: " << d << "\n\n";

	if (d < 0)
	{

		std::cout << "Нет корней\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b + std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n\n";
		std::cout << "Второй корень: " << x2 << "\n\n";
	}*/
	/*srand(time(NULL));

	int number = 0;
	int b = rand() % 10 + 1;
	std::cout << b << "\n\n";

	system("pause");

	int a = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25;
	int choose = 0;
	int chance = 30;

	system("cls");
	std::cout << "\n\n\n\t\tИгра Угадай число\n\n\n";
	std::cout << "1 - Начать\n\n";
	std::cout << "2 - Настройки\n\n";
	std::cout << "0 - Выход\n\n";
	std::cout << "Ввод: ";
	std::cin >> choose;
	
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";
				std::cout << "1 - Лёгкий (0 - 500)\n";
				std::cout << "2 - Сложный(0 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;
					while (true)
					{
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500:";
						std::cin >> number;


						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли! \n";
								std::cout << "Число компьютера было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}

							std::cout << "Не верно\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое чиисло - Нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли! \n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";

								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
						}
					}
				}

				else if (choose == 2)
				{
					while (true)
					{

						randomNumber = rand() % 5000 + 1;
						hp = maxHp;
						while (true)
						{
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Введите число от 1 до 5000:";
							std::cin >> number;


							if (number == randomNumber)
							{
								std::cout << "Вы угадали! Поздравляем!\n";

								system("pause");
								break;
							}
							else if (number < 1 || number > 5000)
							{
								std::cout << "Вы вышли за лимиты\n";
								Sleep(1000);

							}
							else
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли! \n";
									std::cout << "Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}

								std::cout << "Не верно\n";
								std::cout << "Кол-во жизней: " << hp << "\n";
								std::cout << "Взять подсказку за 1 жизнь?\n";
								std::cout << "1 - Да\nЛюбое чиисло - Нет\nВвод: ";
								std::cin >> choose;
								if (choose == 1)
								{

									if (rand() % 101 <= chance)
									{
										std::cout << "Бесплатная подсказка\n";
										Sleep(1000);
									}
									else
									{
										hp--;
										if (hp <= 0)
										{
											std::cout << "Вы проиграли! \n";
											std::cout << "Число компьютера было: " << randomNumber << "\n\n";
											system("pause");
											break;
										}
									}

									if (number < randomNumber)
									{
										std::cout << "Ваше число меньше числа компьютера\n";

									}
									else
									{
										std::cout << "Ваше число больше числа компьютера\n";
									}
									Sleep(1500);
								}
							}
						}
					}
				}

				while (true)
				{

					system("cls");
					std::cout << "\n\n\n\t\tНастройки игры\n\n\n";
					std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
					std::cout << "2 - Изменить кол-во жизей для сложной игры\n";
					std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
					std::cout << "0 - Выход\n\n";
					std::cout << "Ввод: ";
					std::cin >> choose;
					
					if (choose == 1)
					{
						while (true)
						{
							std::cout << "Введите кол-во жизней для легкой игры: ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 0 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
					else if (choose == 2)
					{
						while (true)
						{
							std::cout << "Введите кол-во жизней для сложной игры: ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 0 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
					else if (choose == 3)
					{
						while (true)
						{
							std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 0 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
					else if (choose == 0)
					{
						break;
					}
					else
					{
						std::cout << "Ошибка!.. Неккоректный ввод\n";
					}
				}

				if (choose == 0)
				{
					system("cls");
					std::cout << "\n\n\n\t\tСпасибо за игру!\n\n\n";
					break;
				}


			}*/
	/*	const int size = 10;
	double sumP = 0, sumO = 0;
	int igor[size]{};

	int a = rand() % 10 - 11;
	const int size = 10;
	// тип_данных имя_массива[кол-во ячеек]

	int igor[size]{};

	for (int i = 0; i < size; i++)
	{
		std::cin >> igor[i];
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << igor[i] << " ";
		std::cin >> a;
	}

	for (a; a > 0; a++)
	{
		std::cout << "Сумма всех положительных чисел: " << a << "\n";
	}

	for (a; a < 0; a--)
	{
		std::cout << "Сумма всеъ отрицательных чисел: " << a << "\n";
	}*//*long long factorial(int n)
{
	long long f = 1;
	for (int i = 2; i <= n; i++) f *= i;
	{
		return f;
	}
}*/

	/*	const int row = 3, col = 4;
	int arr[row][col];
	

	arr[0][0] = 100;
	std::cout << "\t\tМассив ранд. чисел\n\n";

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "ИГООООООООООООООООООООРЬ";*/
	/*	std::cout << "\t\tКалькулятор комбинаторики:\n\n";


	std::string a;
	int n = 0;
	int k = 0;
	int m = 0;
	//Aп - с повторениями, А - без и т.д
	std::cout << "Выберите тип задачи: \n";
	std::cout << "1.A" << "\n2.Aп" << "\n3.C" << "\n4.Cп" << "\n5.P" << "\n6.Pп" << "\n"; 
	std::cin >> a;
	//Вводить надо цифру
	if (a == "1")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "A:\n\n" << factorial(n) / factorial(n - m);
		
	}
	else if (a == "2")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "Aп:\n\n" << std::pow(n, m);
		
	}
	else if (a == "3")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "C:\n\n" << factorial(n) / (factorial(m) * factorial(n - m));
	}
	else if (a == "4")
	{
		std::cout << "Введите n и m:\n";
		std::cin >> n >> m;
		std::cout << "Cп:\n\n" << factorial(n + m - 1) / (factorial(m) * factorial(n - 1));
	}
	else if (a == "5")
	{
		std::cout << "Введите n: \n";
		std::cin >> n;
		std::cout << "P:\n\n" << factorial(n);
	}
	else if (a == "6")
	{
		std::cout << "Введите n и k: \n";
		std::cin >> n >> k;
		std::cout << "P:\n\n" << factorial(n) / (factorial(k) * factorial(n - k));
	}
	else
	{
		std::cout << "Ошибка!";
	}*/

























































