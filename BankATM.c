#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<process.h>
int n, i;
float r;
char z[10];
struct customer
{
	int acc_no;
	char name[10];
	int passwd;
	float bal;
}c[10];
float cashwithdraw(float h)
{
	float b, x;
	printf("Enter the amount to be withdrawn\n");
	scanf("%f", &b);
	printf("%f", h);
	if (b > h)
	{
		printf("Balance too less\nPlease enter valid amount\n");
	}
	else
	{
		printf("Collect your amount\n");
		x = h - b;
		printf("Balance remaining is %f", x);
		r = x;
		return r;
	}
}
void balenq()
{
	float x;
	x = cashwithdraw();
	printf("Your current balance is %f", x);
}
int chngpin(int y)
{
	char key1, key2;
	printf("Enter the current pin\n");
	scanf("%d", &key1);
	if (key1 == y)
	{
		printf("Enter the new pin\n");
		scanf("%d", &key2);
		y = key2;
		return y;
	}
	else
	{
		printf("Invalid pin\n");
	}
}
void login(int l, int y, char z[10])
{
	int key, ch, p;
	printf(" acc %d\n", l);
	printf("Enter your account number\n");
	scanf("%d", &p);
	printf("Enter your password\n");
	scanf("%d", &key);
	printf("acc no %d\n", l);
	if ((p == l) && (key == y))
	{
		printf("Welcome %s!\n", z);
	}
	else
	{
		printf("Wrong pin\n");
	}
	while (1)
	{
		printf("MENU\n1.Cash Withdrawal\n2.Balance Enquiry\n3.Change pin\n");
		printf("Enter the choice\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1: cashwithdraw(r); break;
		case 2: balenq();  break;
		case 3: c[i].passwd = chngpin(y); break;
		default:printf("Enter valid choice\n");
		}
	}
}
void main()
{
	int i, n, w, l, y;
	printf("Enter the no. of customers\n");
	scanf("%d", &n);
	printf("Enter the customer details\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter customer %d details\n", i + 1);
		printf("Enter the account number\n");
		scanf("%d", &c[i].acc_no);
		printf("Enter the name\n");
		scanf("%s", c[i].name);
		fflush(stdin);
		printf("Enter the password\n");
		scanf("%d", &c[i].passwd);
		printf("Enter the account balance\n");
		scanf("%f", &c[i].bal);
		printf("%d is your assigned  number\n", i);
	}
	for (i = 0; i < n; i++)
		printf("%d\t%s\t%d\t%f\t%d\n", c[i].acc_no, c[i].name, c[i].passwd, c[i].acc_no, i);
	while (1)
	{
		printf("MENU\n10.Login\n20.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &w);
		switch (w)
		{
		case 10: login();
		case 20: exit(0);
		default: printf("Enter valid choice\n");
		}
	}
	getch();
}
