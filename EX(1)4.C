// Program to check the entered character is vowel or not
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter a charcter:\n");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'&& c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("%c is vowel",c);
	else
		printf("%c is not a vowel",c);
	getch();
}
