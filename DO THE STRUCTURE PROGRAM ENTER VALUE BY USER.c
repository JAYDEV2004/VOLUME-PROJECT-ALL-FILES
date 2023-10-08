#include<stdio.h>
struct distance{
	int feet;
	int inch;
};
int main()
{
    struct distance j1,j2,j3;
	
	printf("_________ ENTER TWO DISTANCE IN INCH AND FEET_________");
	printf("\n");
	printf("\n");
	printf("_________ENTER THE FIRST FEET DISTANCE = ");
	scanf("%d",&j1.feet);
	printf("\n");
	printf("_________ENTER THE FIRST INCH DISTANCE = ");
	scanf("%d",&j1.inch);
	printf("\n");
	printf("_________ENTER THE SECOND FEET DISTANCE = ");
	scanf("%d",&j2.feet);
	printf("\n");
	printf("_________ENTER THE SECOND INCH DISTANCE = ");
	scanf("%d",&j2.inch);
	printf("\n");
	j3.feet = j1.feet + j2.feet;
	j3.inch = j2.inch + j1.inch;
	
	while(j3.inch>=12)
	{
		j3.feet++;
		j3.inch-=12;
	}
	printf("\n");
	printf("_________FEET_________ = %d",j3.feet);
	printf("\n");
	printf("_________INCH_________ = %d",j3.inch);
	printf("\n");
		return 0;
}