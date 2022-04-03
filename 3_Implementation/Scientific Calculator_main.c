#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void addition();
void subtraction();
void multiplication();
void division();
void power();
void square();
void cube();
void root();
void squareroot();
void factorial();
void modulus();
void sinc();
void cosc();
void tanc();
void logc();

int main()
{
	int choice;
	printf("\t      SCIENTIFIC CALCULATOR \n ---------------------------------------------------\n");
	printf("\n WHAT OPERATION DO YOU WANT TO PERFORM? \n");
	printf("\n ---------------------------------------------------\n 	PRESS\t\t\t OPERATION\n ---------------------------------------------------");
	printf("\n\t 0\t\t\t QUIT");
	printf("\n\t 1\t\t\t ADDITION");
	printf("\n\t 2\t\t\t SUBTRACTION");
	printf("\n\t 3\t\t\t MULTIPLICATION");
	printf("\n\t 4\t\t\t DIVISION");
	printf("\n\t 5\t\t\t MODULUS");
	printf("\n\t 6\t\t\t POWER");
	printf("\n\t 7\t\t\t SQUARE");
	printf("\n\t 8\t\t\t CUBE");
	printf("\n\t 9\t\t\t SQUAREROOT");
	printf("\n\t10\t\t\t FACTORIAL");
	printf("\n\t11\t\t\t SIN");
	printf("\n\t12\t\t\t COS");
	printf("\n\t13\t\t\t TAN");
	printf("\n\t14\t\t\t LOG");
	printf("\n ---------------------------------------------------");
	while(1)
	{
		printf("\n ENTER YOUR CHOICE :: ");
		scanf("%d",&choice);
		printf("\n ***************************************************\n");
		switch(choice)
		{
			case 0:
				exit(0);
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5:
				modulus();
				break;
			case 6:
				power();
				break;
			case 7:
				square();
				break;
			case 8:
				cube();
				break;
			case 9:
				squareroot();
				break;
			case 10:
				factorial();
				break;
			case 11:
				sinc();
				break;
			case 12:
				cosc();
				break;
			case 13:
				tanc();
				break;
			case 14:
				logc();
				break;
			default:
				printf(" WRONG CHOICE!!!! KINDLY PRESS THE RIGHT ONE!!!!\n ");
				printf("\n ***************************************************\n");
				break;
		}
	}
	return 0;
}

void addition()
{
	int n,i;
	float a[100],b=0;
	printf(" ADDITION OPERATION\n ---------------------------------------------------\n");
	printf(" HOW MANY NUMBERS DO YOU WANT TO ADD?? :: ");
	scanf("%d",&n);
	printf("\n PLEASE ENTER THE NUMBERS :: \n");
	for(i=1; i<=n ; i++)
	{
		printf(" NO %d NUMBER :: ",i);
		scanf("%f",&a[i]);
	}
	printf("\n RESULT IS ::\n");
	printf(" SUMMATION OF\t ");
	for(i=1;i<=n; i++)
	{
		printf("%0.2f\t", a[i]);
	}
	printf("is :: ");
	for(i=1;i<=n;i++)
	{
		b+=a[i];
	}
	printf("%0.2f",b);
	printf("\n ***************************************************\n");
	
}

void subtraction()
{
	float a,b;
	printf(" SUBTRACTION OPERATION\n ---------------------------------------------------\n");
	printf(" ENTER THE TWO NUMBERS :: ");
	scanf("%f %f",&a,&b);
	printf("\n RESULT IS :: %0.2f - %0.2f = %0.2f",a,b,(a-b));
	printf("\n ***************************************************\n");
}

void multiplication()
{
	int n,i;
	float a[100],b=1;
	printf(" MULTIPLICATION OPERATION\n ---------------------------------------------------\n");
	printf(" HOW MANY NUMBERS DO YOU WANT TO MULTIPLY?? :: ");
	scanf("%d",&n);
	printf("\n PLEASE ENTER THE NUMBERS :: \n");
	for(i=1; i<=n ; i++)
	{
		printf(" NO %d NUMBER :: ",i);
		scanf("%f",&a[i]);
	}
	printf("\n RESULT IS ::\n");
	printf(" MULTIPLICATION OF\t ");
	for(i=1;i<=n; i++)
	{
		printf("%0.2f\t", a[i]);
	}
	printf("is :: ");
	for(i=1;i<=n;i++)
	{
		b*=a[i];
	}
	printf("%0.2f",b);
	printf("\n ***************************************************\n");	
}

void division()
{
	float a,b;
	printf(" DIVISION OPERATION\n ---------------------------------------------------\n");
	printf(" ENTER THE TWO NUMBERS :: ");
	scanf("%f %f",&a,&b);
	printf("\n RESULT IS :: %0.2f / %0.2f = %0.2f",a,b,(a/b));
	printf("\n ***************************************************\n");
}

void modulus()
{
	int a,b;
	printf(" MODULUS OPERAION\n ---------------------------------------------------\n");
	printf(" ENTER THE TWO NUMBERS :: ");
	scanf("%d %d",&a,&b);
	printf("\n RESULT IS :: %d",(a%b));
	printf("\n ***************************************************\n");
}

void power()
{
	float number, power;
	printf(" POWER OPERATION\n ---------------------------------------------------\n");
	printf(" ENTER THE NUMBER :: ");
	scanf("%f",&number);
	printf("\n ENTER THE POWER :: ");
	scanf("%f",&power);
	printf("\n RESULT IS :: %0.2f ^ %0.2f = %0.2f",number,power,pow(number,power));
	printf("\n ***************************************************\n");
}

void square()
{
	float number;
	printf(" SQUARE OPERATION\n ---------------------------------------------------\n");
	printf(" ENTER THE NUMBER :: ");
	scanf("%f",&number);
	printf("\n RESULT IS :: %0.2f ^ 2 = %0.2f",number,pow(number,2));
	printf("\n ***************************************************\n");
}

void cube()
{
	float number;
	printf(" CUBE OPERATION \n ---------------------------------------------------\n");
	printf(" ENTER THE NUMBER :: ");
	scanf("%f",&number);
	printf("\n RESULT IS :: %0.2f ^ 3 = %0.2f",number,pow(number,3));
	printf("\n ***************************************************\n");
}

void squareroot()
{
	float number;
	printf(" SQUAREROOT OPERATION \n ---------------------------------------------------\n");
	printf(" ENTER THE NUMBER :: ");
	scanf("%f",&number);
	printf("\n RESULT IS :: squareroot(%0.2f) = %0.2f",number,pow(number,0.5));
	printf("\n ***************************************************\n");
}

void factorial()
{
	int number,i;
	long int factorial = 1;
	printf(" FACTORIAL OPERATION\n ---------------------------------------------------\n");
	printf(" ENTER THE NUMBER :: ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		factorial*=i;
	}
	printf("\n RESULT IS :: %d ! = %ld",number,factorial);
	printf("\n ***************************************************\n");
}

void sinc(){
	float a,b;
	printf(" SIN OPERATION\n ---------------------------------------------------\n");
	printf("\n ENTER THE ANGLE(DEGREE) :: ");
	scanf("%f",&a);
	b=a*0.0175;
	printf(" sin(%0.2f) = %0.2f",a,sin(b));
	printf("\n ***************************************************\n");
}

void cosc(){
	float a,b;
	printf(" COS OPERATION\n ---------------------------------------------------\n");
	printf("\n ENTER THE ANGLE(DEGREE) :: ");
	scanf("%f",&a);
	b=a*0.0175;
	printf(" cos(%0.2f) = %0.2f",a,cos(b));
	printf("\n ***************************************************\n");
}

void tanc(){
	float a,b;
	printf(" TAN OPERATION\n ---------------------------------------------------\n");
	printf("\n ENTER THE ANGLE(DEGREE) :: ");
	scanf("%f",&a);
	b=a*0.0175;
	printf(" tan(%0.2f) = %0.2f",a,tan(b));
	printf("\n ***************************************************\n");
}

void logc(){
	float a;
	printf(" LOG OPERATION\n ---------------------------------------------------\n");
	printf("\n ENTER THE NUMBER :: ");
	scanf("%f",&a);
	printf(" log(%0.2f) = %f",a,log(a));
	printf("\n ***************************************************\n");
}
