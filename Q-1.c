#include<stdio.h>

void main()
{
	char data[1000];
	int i;
	FILE *p;
	p = fopen("even_file.txt","w");
	if(p == NULL)
	{
		printf("file can't open...");
	}
	else{
		for(i=50;i<=70;i++)
		{
			if(i%2 == 0)
			{
				printf("%d ",i);
				i==data;	
			}			
		}
//			printf("enter any number:-");
//			gets(data);
		fputs(data,p);
	}
}
