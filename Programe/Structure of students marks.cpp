#include<stdio.h>

struct student{
	
	char name[10];
	int roll;
	float marks;	

}sum[10];

int main()

{
	
int i;
printf("Enter the details of the students:");


for(i=0 ; i< 4 ; i++)

{
	sum[i].roll = i + 1;
	printf("\n For roll number is: %d\n",sum[i].roll);

	printf("\nEnter the name of the student: ");
	scanf("%s",&sum[i].name);
	
	printf("\nEnter the marks: ");
	scanf("%f",&sum[i].marks);
	}
	
	printf("\n\t\t\t\t Your enterd details is:\n");
	
	for(i=0 ; i< 4 ; ++i)

	{
		printf("\nFor roll number: %d",i+1);
		
		printf("\nName of the student: ");
		puts(sum[i].name);
		
	printf("\nMarks is:%f ",sum[i].marks);
	printf("\n");
		
	}
	return 0;
}
	
	
	
	
	
