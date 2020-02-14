#include<stdio.h>

void main()
{
	int i;
	FILE *fp;
	char str[20];
	printf("Enter a string: ");
	gets(str);
	fp=fopen("string.txt","w");
	for(i=0;i<strlen(str);i++)
	{
		fputc(str[i],fp);
	}
}

