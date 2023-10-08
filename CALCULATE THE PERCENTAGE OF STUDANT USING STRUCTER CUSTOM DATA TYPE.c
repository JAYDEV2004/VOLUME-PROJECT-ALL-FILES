#include<stdio.h>
struct chatra{
	
	int rolln_no;
	char chatra_name[1000];
	int phy_marks;
    int chem_marks;
    int maths_marks;
};
int main()
{
	int n=5;
	printf("ENTER THE CHATRA SIZE = ");
	scanf("%d",&n);
	
	struct chatra c[n];
	int i,sum=0;
	float percentage=0;
	
	for (i=0;i<n;i++)
	{
		printf("ENTER THE CHATRA ROLL NUMBER = ");
		scanf("%d",&c[i].rolln_no);
		
		printf("ENTER THE CHTRA FULL NAME IN CAPITAL = ");
		scanf("%s",&c[i].chatra_name);
		
		printf("ENTER THE CHATRA PHYSICS NUMBER = ");
		scanf("%d",&c[i].phy_marks);
		
		printf("ENTER THE CHATRA CHEMESTRY NUMBER = ");
		scanf("%d",&c[i].chem_marks);
		
		printf("ENTER THE CHATRA MATHS NUMBER = ");
		scanf("%d",&c[i].maths_marks);
		printf("\n");
		printf("\n");
		printf("\n");
		
	}
	printf("\n\nHERE ARE THE CHATRA RESULTS\n\n");
	
	for(i=0;i<n;i++)
	{
		sum = c[i].chem_marks + c[i].maths_marks + c[i].phy_marks;
		
		percentage = sum * 100 / 300;
		
		printf("CHATRA ROLL NO = %d",c[i].rolln_no);
		printf("\n");
		printf("CHATRA  NAME  = %s\n",c[i].chatra_name);
		printf("PHYSICS MARKS = %d\n",c[i].phy_marks);
		printf("PHYSICS MARKS = %d\n",c[i].chem_marks);
		printf("PHYSICS MARKS = %d\n",c[i].maths_marks);
		
		printf("total marks of three subjects = %d",sum);
		printf("\n");
		printf("PERCENTAGE OF THREE SUBJECT IS = %.2f",percentage);
		printf("\n");
		printf("\n");
		printf("\n");
	}
	
	return 0;
}