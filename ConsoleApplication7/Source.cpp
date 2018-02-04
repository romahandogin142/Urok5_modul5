#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
#define size 10
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int task, length = size;
	do
	{
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			/*1.	Дан целочисленный квадратный массив 10×10.Найти сумму элементов каждой строки.*/
			int m[size][size], sum;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = -50 + rand() % 100;
					cout <<i<<" - "<< m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < length; i++)
			{
				sum = 0;
				for (int j = 0; j < length; j++)
				{
					sum += m[i][j];
				}
				cout << "Сумма элементов " << i << "-й строки = " << sum << endl;
			}
		} break;

		case 2:
		{
			/*2.	Дан целочисленный квадратный массив 4×4.Найти строку с наименьшей суммой элементов*/
			int m[4][4], sum = 0, min = 0;
			for (int i = 0; i < 4; i++)
			{
				cout << i + 1 << ". ";
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = -50 + rand() % 100;
					cout << i << " - " << m[i][j] << "\t";
				} cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += m[i][j];
				}
				if (i == 0)
					min = sum;
				if (sum <= min)
					min = sum;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += m[i][j];
				}
				if (sum == min)
				{
					cout << " Summa - " << i + 1 << endl;
					cout << "Summa1 = " << sum << endl;
				}

			}
		} break;

		case 3:
		{
			/*3.	Дана целочисленная матрица 6× 8. Найти произведение положительных элементов первого столбца.*/
			int m[6][8], all = 1;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					m[i][j] = -50 + rand() % 100;
					if (j == 0)
						if (m[i][j] > 0)
							all *= m[i][j];
					cout << m[i][j] << "\t";
				} cout << endl;
			}
			cout << "Proizvedenie 1 ctolba  = " << all << endl;
		} break;

		case 5:
		{
			/*5.	Дан двухмерный целочисленный массив A(M, N).Составить одномерный массив B из номеров строк этого массива*/
			int m[size][size], m2[size];
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = -100 + rand() % 200;
					cout <<i<<" - "<< m[i][j] << "\t";
				} cout << endl;
			}
			for (int i = 0; i < length; i++)
			{
				m2[i] = i + 1;
				cout << m2[i] << endl;
			}

		} break;

		case 6:
		{
			/*6.	Написать программу, которая в матрице чисел A(N, M) находит все элементы,
			превышающие по абсолютной величине заданное число B.Подсчитать число
			таких элементов и записать их в массив C.*/
			int m[size][size], b = 1 + rand() % 100, count = 0, a, m2[100];
			cout << "b = " << b << endl;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = -100 + rand() % 200;
					if (m[i][j] > b)
					{
						a = m[i][j];
						m2[count] = a;
						count++;
					}
					cout << m[i][j] << "\t";
				} cout << endl;
			} cout << "Kol-vo elementov " << b << " -- " << count << endl;
			for (int i = 0; i < count; i++)
			{
				cout << m2[i] << endl;
			}
		} break;

		case 7:
		{
			/*7.	Дана целочисленная матрица размера 8х5.Определить:
			a.сумму всех элементов второго столбца массива;
			b.сумму всех элементов 3 - й строки массива.*/
			int m[8][5], sum1 = 0, sum2 = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					m[i][j] = -50 + rand() % 100;
					if (j == 1)
						sum1 += m[i][j];
					if (i == 2)
						sum2 += m[i][j];
					cout << m[i][j] << "\t";
				} cout << endl;
			} cout << "Summa 2 ctolba = " << sum1 << endl;
			cout << "Summa 3 ctolb = " << sum2 << endl;
		} break;

		case 8:
		{
			/*8.	Дана целочисленная прямоугольная матрица размера M·N.
			Сформировать одномерный массив, состоящий из элементов, лежащих в интервале[1, 10].
			Найти произведение елементов полученного одномерного массив*/
			int m[5][6], m2[30], count = 0, mas, all = 1;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					m[i][j] = -50 + rand() % 100;
					cout << m[i][j] << "\t";
				} cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					if (m[i][j] >= 1 && m[i][j] <= 10)
					{
						mas = m[i][j];
						m2[count] = mas;
						count++;
					}
				}
			} cout << "Odnomerniy massiv " << count << "-и элементов\n" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << m2[i] << " ";
				all *= m2[i];
			} cout << "Proizvedenie = " << all << endl;
		} break;

		case 9:
		{
			/*9.	Дана целочисленная квадратная матрица.Указать столбец(назвать его номер),
			где минимальное количество элементов, кратных сумме индексов*/
			int m[size][size], index = 0, min = 0, count = 0;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = 100 + rand() % 400;
					cout << m[i][j] << "\t";
				}
				cout << endl;
				index += i;
			}
			cout << "Summa index  = " << index << endl;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					if (m[i][j] % index == 0)
						count++;
					if (i == 0)
						min = count;
					if (j == length - 1)
						if (count <= min)
							min = count;
				}
			}
			cout << min << "    " << count << endl;
			for (int i = 0; i < length; i++)
			{
				count = 0;
				for (int j = 0; j < length; j++)
				{
					if (m[i][j] % index == 0)
						count++;
					if (j == length - 1)
						if (count > min)
						{
							cout << "Summa kratna index  " << index << " - " << i << endl;
							break;
						}
				}
			}
		} break;

		case 10:
		{
			/*10.	Дана целочисленная квадратная матрица.Найти сумму элементов матрицы, лежащих выше главной диагонали*/
			int m[size][size], sum = 0;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = 1 + rand() % 100;
					cout << m[i][j] << "\t";
				} cout << endl;
			}

			for (int i = 0; i < length - 1; i++)
			{
				sum += m[i][i + 1];
				cout << m[i][i + 1] << endl;
			}
			cout << "Summa = " << sum << endl;
		} break;
		}
	} while (exit> 0);


	system("pause");
}