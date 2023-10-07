#include<stdio.h>
enum week{
	monday=1,tuseday,wednesday,thursday,friday,saturday,sunday
};
int main()
{
	enum week w = monday;
	
	while(w>0 && w<=7 )
	{	
	printf("WEEK = %d\n",w++);

	}
}