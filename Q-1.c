#include<stdio.h>

void main()
{
	int i;
	FILE *p,*q;
	
//	even file is open here 

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
				fprintf(p,"%d ",i);	
			}			
		}
		fputs("\n",p);
		fclose(p);
	}
	
//	odd file open here 

	p = fopen("odd_file.txt","w");
	if(p == NULL)
	{
		printf("file can't open...");
	}
	else{
		for(i=50;i<=70;i++)
		{
			if(i%2 != 0)
			{
				printf("%d ",i);
				fprintf(p,"%d ",i);	
			}			
		}
		fclose(p);
	}
}
