/* Write a Program to generate mark sheets for a student. Enter the marks of 5 students in 
Chemistry, Mathematics, and Physics (each out of 100) using a Structure having 
attributes: roll no, name, chem_marks, maths_marks, and phy_marks. 
Display the percentage of each student.*/

#include<stdio.h>
#include<string.h>

struct student
{
	int	roll_no;
    char name[100];
	int	chem_marks;
	int maths_marks;
	int phy_marks;
};
void main(){
	struct student s1;
	struct student s2;
	struct student s3;
	struct student s4;
	struct student s5;
	
	printf("Roll Number :- ");
	scanf("%d",&s1.roll_no);	
	printf("Student Name:- ");
	scanf("%s",&s1.name);	
	printf("Chemistry:- ");
	scanf("%d",&s1.chem_marks);	
	printf("Mathematics :- ");
	scanf("%d",&s1.maths_marks);	
	printf("Physics  :- ");
	scanf("%d",&s1.phy_marks);
		
	printf("\n");
	
	printf("Roll Number :- ");
	scanf("%d",&s2.roll_no);	
	printf("Student Name:- ");
	scanf("%s",&s2.name);	
	printf("Chemistry:- ");
	scanf("%d",&s2.chem_marks);	
	printf("Mathematics :- ");
	scanf("%d",&s2.maths_marks);	
	printf("Physics  :- ");
	scanf("%d",&s2.phy_marks);
	
	printf("\n");
		
	printf("Roll Number :- ");
	scanf("%d",&s3.roll_no);	
	printf("Student Name:- ");
	scanf("%s",&s3.name);	
	printf("Chemistry:- ");
	scanf("%d",&s3.chem_marks);	
	printf("Mathematics :- ");
	scanf("%d",&s3.maths_marks);	
	printf("Physics  :- ");
	scanf("%d",&s3.phy_marks);
	
	printf("\n");
	
	printf("Roll Number :- ");
	scanf("%d",&s4.roll_no);	
	printf("Student Name:- ");
	scanf("%s",&s4.name);	
	printf("Chemistry:- ");
	scanf("%d",&s4.chem_marks);	
	printf("Mathematics :- ");
	scanf("%d",&s4.maths_marks);	
	printf("Physics  :- ");
	scanf("%d",&s4.phy_marks);
	
	printf("\n");
			
	printf("Roll Number :- ");
	scanf("%d",&s5.roll_no);	
	printf("Student Name:- ");
	scanf("%s",&s5.name);	
	printf("Chemistry:- ");
	scanf("%d",&s5.chem_marks);
	printf("Mathematics :- ");
	scanf("%d",&s5.maths_marks);
	printf("Physics  :- ");
	scanf("%d",&s5.phy_marks);

	printf("\n");
	
	int i;
	float total;
	float pr;
	total = s1.chem_marks + s1.maths_marks + s1.phy_marks;
	pr=(total*100)/300;
	
	printf("Roll Number => %d \n", s1.roll_no);
	printf("Student Name => %s \n", s1.name);
	printf("chemestry => %d \n", s1.chem_marks);
	printf("maths => %d \n", s1.maths_marks);
	printf("physics => %d \n", s1.phy_marks);
	printf("Total of all subject = %.2f\n",total);
    printf("pr:-%.2f",pr);
	
	printf("\n");
		
	printf("Roll Number => %d \n", s2.roll_no);
	printf("Student Name => %s \n", s2.name);
	printf("chemestry => %d \n", s2.chem_marks);
	printf("maths => %d \n", s2.maths_marks);
	printf("physics => %d \n", s3.phy_marks);
	printf("Total of all subject = %.2f\n",total);
    printf("pr:-%.2f",pr);
	
	printf("\n");
		
	
	printf("Roll Number => %d \n", s3.roll_no);
	printf("Student Name => %s \n", s3.name);
	printf("chemestry => %d \n", s3.chem_marks);
	printf("maths => %d \n", s3.maths_marks);
	printf("physics => %d \n", s3.phy_marks);
	printf("Total of all subject = %.2f\n",total);
    printf("pr:-%.2f",pr);
	
	printf("\n");
		
	printf("Roll Number => %d \n", s4.roll_no);
	printf("Student Name => %s \n", s4.name);
	printf("chemestry => %d \n", s4.chem_marks);
	printf("maths => %d \n", s4.maths_marks);
	printf("physics => %d \n", s4.phy_marks);
	printf("Total of all subject = %.2f\n",total);
    printf("pr:-%.2f",pr);
	
	printf("\n");
		
	printf("Roll Number => %d \n", s5.roll_no);
	printf("Student Name => %s \n", s5.name);
	printf("chemestry => %d \n", s5.chem_marks);
	printf("maths => %d \n", s5.maths_marks);
	printf("physics => %d \n", s5.phy_marks);
	printf("Total of all subject = %.2f\n",total);
    printf("pr:-%.2f",pr);
												
}
