#include "StdAfx.h"
#include <stdlib.h>
#include <locale>
#include <string>
#define _CRT_SECURE_NO_WARNINGS

void second() {

	srand(time(NULL));
	int i;
	int	mas[20];
	printf("   ");
	for (i = 0; i < 20; i++) {
		mas[i] = rand() % 201 - 100;
		printf(" %d ", mas[i]);
	}
	printf("\n    ");
	system("pause");
}

void first() {
	int i, min, max;
	int	mas[20] = {-5, 0, -30, 6, 66, 73, 102, -37, 46, 74, -36, 88, -76, 76, 23, 98, 45, -65, 3, 6};
	max = mas[0];
	min = mas[0];
	printf("    ");
	for (i = 0; i < 20; i++) {
		printf(" %d ", mas[i]);
	}
	for (i = 1; i < 20; i++) {
		if (mas[i] > max)
			max = mas[i];
		if (mas[i] < min)
			min = mas[i];
	}
	printf("\n    �������� ������� ����� %d", max);
	printf("\n    ������� ������� ����� %d", min);
	printf("\n    �������� ����� ���������� � ��������� ����� %d", (max - min));
	printf("\n\n    ");
	system("pause");
}

void third() {
	int *head;
	int n, i;
	printf("\n    ������� ����������� �������: ");
	scanf_s("%d", &n);
	head = (int*)malloc(n * sizeof(int));

	printf("    ���������� ������: \n ");
	printf("  ");
	for (i = 0; i < n; i++) {
		head[i] = rand() % 201 - 100;
		printf(" %d ", head[i]);
	}
	printf("\n    ");
	free(head);
	system("pause");
}

void fourth() {
	srand(time(NULL));
	int a, b;
	int mas[10][10];
	int sumrows[10], sumcols;
	srand(time(NULL));
	printf("\n   ����� �������� � ����� ����������� �������:\n\n");
	for (a = 0; a < 10; a++) sumrows[a] = 0;
	for (a = 0; a < 10; a++) {
		sumcols = 0;
		for (b = 0; b < 10; b++) {
			mas[a][b] = rand() % 10;
			printf("%5d", mas[a][b]);
			sumcols += mas[a][b];
			sumrows[b] += mas[a][b];
		}
		printf("   | = %d\n", sumcols);
	}
	for (a = 0; a < 10; a++)
		printf("%5s", "--");
	printf("\n");
	for (a = 0; a < 10; a++)
		printf("%5d", sumrows[a]);
	printf("\n\n   ");
	system("pause");
}

void fifth() {
	int i;
	int num;
	bool stop = 0;
	char buff[20];

	struct student
	{
		char famil[20];
		char name[20];
		int Nomzach;
	} stud[3];

	for (i = 0; i < 3; i++)
	{
		printf("  ������� ������� ��������: \n");
		scanf("%20s", stud[i].famil);

		printf("  ������� ��� ��������: %s\n", stud[i].famil);
		scanf("%20s", stud[i].name);

		printf("  ������� ����� �������� ������ ��������: %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
	}

	system("cls");
	for (i = 0; i < 3; i++) {
		printf("  C������ %s %s ,weg ����� �������� ������ %d \n", stud[i].famil, stud[i].name,
			stud[i].Nomzach);
	}
	printf("\n   ");
	system("pause");
	while (1) {
		printf("\n  �� ������ �������� �� ������ ����������� �����: ������� (1) ��� (2) ����� ������ (3)\n     ��� ������� 0 ��� ������");
		scanf("%d", &i);
		switch (i) {
		case 0:
			return;
			break;
		case 1:
			stop = 0;
			printf("\n  ������� ������� ��������: ");
			rewind(stdin);
			scanf_s("%20s", buff);
			for (i = 0; i < 3; i++) {
				if (strcmp(buff, stud[i].famil) == 0) {
					printf("\n  ������� � ��������� �������� ����� ��������� ������: \n");
					printf("  C������ %s %s ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].Nomzach);
					stop = 1;
				}

			}
			if (stop == 0)
				printf("\n  �������� � ����� �������� �� ����������");
			printf("\n  ");
			system("pause");
			break;
		case 2:
			stop = 0;
			printf("\n  ������� ��� �������� - ");
			scanf("%20s", buff);
			for (i = 0; i < 3; i++) {
				if (strcmp(buff, stud[i].name) == 0) {
					printf("\n  ������� � ��������� ������ ����� ��������� ������: \n");
					printf("  C������ %s %s ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].Nomzach);
					stop = 1;
				}

			}
			if (stop == 0)
				printf("\n  �������� � ����� �������� �� ����������");
			printf("\n  ");
			system("pause");
			break;
		case 3:
			stop = 0;
			printf("\n  ����� �������� ������ ��������: ");
			scanf("%d", &num);
			for (i = 0; i < 3; i++) {
				if (num == stud[i].Nomzach) {
					printf("\n  ������� � �������� ������� �������� ������ ����� ��������� ������: \n");
					printf("  C������ %s %s ����� �������� ������ %d \n", stud[i].famil, stud[i].name, stud[i].Nomzach);
					stop = 1;
				}

			}
			break;

		}
	}


}


void main() {
	setlocale(LC_ALL, "Russian");
	bool stop = 0;
	int i;

	while (1) {
		printf("\n    �������� ����� ������ (������� 0 ��� ������) ");
		scanf_s("%d", &i);

		switch (i) {
		case 0:
			exit(0);
			break;
		case 1:
			first();
			system("cls");
			break;
		case 2:
			second();
			system("cls");
			break;
		case 3:
			third();
			system("cls");
			break;
		case 4:
			fourth();
			system("cls");
			break;
		case 5:
			fifth();
			system("cls");
			break;
		default:
			printf("\n    ������ ������ �� ����\n    ");
			system("pause");
			system("cls");
		}
	}
	return;
}