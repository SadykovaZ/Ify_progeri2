#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <Windows.h>
#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

start:
	printf("����� �� ������ ������� ����������������?\n 1 - ��� �����;\n 2 - � �� ���� ������ �� ����;\n 3 - ������������;\n 4 - ���������;\n 5 - ������������;\n 6 - ����������.\n ");
	int n = 0;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("������� �� Scratch, �����...\n");
		printf("--------------------------------------------------------\n");
		SetConsoleTextAttribute(hConsole, 13);
		printf("Python!\n");
		SetConsoleTextAttribute(hConsole, 15);
		printf("--------------------------------------------------------\n");
	}

	else if (n == 2)
	{
		printf("--------------------------------------------------------\n");
		SetConsoleTextAttribute(hConsole, 13);
		printf("Python!\n");
		SetConsoleTextAttribute(hConsole, 15);
		printf("--------------------------------------------------------\n");
	}

	else if (n == 3)
	{

	next2:
		printf("��� ���� ���� �� �������? 1 - ���. ������ ���� ������; 2 - ��\n");
		scanf("%d", &n);

		if (n == 1)
		{
			printf("��� �������� �������.\n 1 - ������� ��������.\n 2 - ������ ��������.\n 3 - ����������� ��������.\n 4 - ����� ������� ���� (�� ����� ����� �����)\n");
			scanf("%d", &n);

			if (n == 1)
			{
				printf("--------------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, 13);
				printf("Python!\n");
				SetConsoleTextAttribute(hConsole, 15);
				printf("--------------------------------------------------------\n");

			}

			else if (n == 2)
			{
				printf("--------------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, 13);
				printf("Python!\n");
				SetConsoleTextAttribute(hConsole, 15);
				printf("--------------------------------------------------------\n");
			}

			else if (n == 3)
			{
				printf("����� ������� �������.\n 1 - �������.\n 2 - ������.\n ");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Java!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 2)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("C!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

			}

			else if (n == 4)
			{
				printf("--------------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, 13);
				printf("C!\n");
				SetConsoleTextAttribute(hConsole, 15);
				printf("--------------------------------------------------------\n");
			}
		}
		else if (n == 2)
		{
		next3:

			printf("����� ���������/�����.\n 1 - ���.\n 2 - ����.����.\n 3 - ���������.\n 4 - 3D ����.\n");
			scanf("%d", &n);

			if (n == 1)
			{
				printf("��� ������ ����� �������� � �������� �������, ��� twitter.\n 1 - ��.\n 2 - ���.\n ");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("JavaScript!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 2)
				{
				next6:
					printf("������ ����������� ���-�� �����, �� �� ����� ����������.\n 1 - ��.\n 2 - ���.\n 3 - �� ���� \n ");
					scanf("%d", &n);

					if (n == 1)
					{
						printf("--------------------------------------------------------\n");
						SetConsoleTextAttribute(hConsole, 13);
						printf("JavaScript!\n");
						SetConsoleTextAttribute(hConsole, 15);
						printf("--------------------------------------------------------\n");
					}

					else if (n == 2)
					{
					next1:
						printf("����� � ��� ������� �������.\n 1 - Lego.\n 2 - ���������.\n 3 - ����������, �� ������� ����� \n ");
						scanf("%d", &n);

						if (n == 1)
						{
							printf("--------------------------------------------------------\n");
							SetConsoleTextAttribute(hConsole, 13);
							printf("Python!\n");
							SetConsoleTextAttribute(hConsole, 15);
							printf("--------------------------------------------------------\n");
						}

						else if (n == 2)
						{
							printf("--------------------------------------------------------\n");
							SetConsoleTextAttribute(hConsole, 13);
							printf("Ruby!\n");
							SetConsoleTextAttribute(hConsole, 15);
							printf("--------------------------------------------------------\n");
						}

						else if (n == 3)
						{
							printf("--------------------------------------------------------\n");
							SetConsoleTextAttribute(hConsole, 13);
							printf("Php!\n");
							SetConsoleTextAttribute(hConsole, 15);
							printf("--------------------------------------------------------\n");
						}
					}

					else if (n == 3)
					{
						goto next1;
					}
				}
			}
			else if (n == 2)
			{
			next5:
				printf("��� ������� � Microsoft?\n 1 - ����� ���.\n 2 - �������.\n 3 - ���.\n ");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("C#!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 2)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Java!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 3)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Java!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}
			}

			else if (n == 3)
			{
			next4:
				printf("����� OS?\n 1 - iOS.\n 2 - Android.\n ");
				scanf("%d", &n);

				if (n == 1)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Objective-C!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");

				}

				else if (n == 2)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Java!\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}
			}

			else if (n == 4)
			{
				printf("--------------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, 13);
				printf("�++\n");
				SetConsoleTextAttribute(hConsole, 15);
				printf("--------------------------------------------------------\n");
			}


		}
	}
	else if (n == 4)
	{
		goto next2;
	}
	else if (n == 5)
	{
		goto next2;
	}

	else if (n == 6)
	{
		printf("1 - � ���� ���� ���� ��� ��������\n2 - ����� ������\n");
		scanf("%d", &n);

		if (n == 1)
		{
			goto next3;
		}

		else if (n == 2)
		{
			printf("����� ���������/�����? \n 1 - 3D ���� \n 2 - ���������\n 3 - ����.����\n 4 - ���\n 5 - � ������ ���� $$$\n 6 - � ���� �������� � ������� IT-��������.\n  ");
			scanf("%d", &n);

			if (n == 1)
			{
				printf("--------------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, 13);
				printf("�++\n");
				SetConsoleTextAttribute(hConsole, 15);
				printf("--------------------------------------------------------\n");
			}

			else if (n == 2)
			{
				goto next4;
			}

			else if (n == 3)
			{
				goto next5;
			}

			else if (n == 4)
			{
				printf(" 1 - �������� (���-��������) \n 2 - ������ (��, ��� �� ���������)\n");
				scanf("%d", &n);
				if (n == 1)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("JavaScript\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}
				else if (n == 2)
				{
					printf("���� �������� ��... \n 1 - �����������\n 2 - �������\n");
					scanf("%d", &n);

					if (n == 1)
					{
						goto next5;
					}

					else if (n == 2)
					{
						goto next6;
					}

				}
			}
			else if (n == 5)
			{
				printf("--------------------------------------------------------\n");
				SetConsoleTextAttribute(hConsole, 13);
				printf("Java\n");
				SetConsoleTextAttribute(hConsole, 15);
				printf("--------------------------------------------------------\n");
			}

			else if (n == 6)
			{
				printf("1 - Microsoft\n2 - Apple\n3 - Google\n4 - Facebook\n");
				scanf("%d",&n);

				if (n == 1)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("C#\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 2)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Objective - C\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 3)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Python\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}

				else if (n == 4)
				{
					printf("--------------------------------------------------------\n");
					SetConsoleTextAttribute(hConsole, 13);
					printf("Python\n");
					SetConsoleTextAttribute(hConsole, 15);
					printf("--------------------------------------------------------\n");
				}
			}
		}

	}
	goto start;
}