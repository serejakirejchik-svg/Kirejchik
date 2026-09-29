#include <iostream>
#include <Windows.h>

int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int row = 3, col = 4;
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
	else if (v == '/' && b != 0)
	{
		std::cout << "Частное:\n\n" << a / b;
	}
	else
	{
		std::cout << "Ошибка";
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
	}*/



























































