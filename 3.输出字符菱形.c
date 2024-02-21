#include <stdio.h>
void main()
{
    char a=getchar();
    printf("  %c\n", a); 
    printf(" %c%c%c\n", a,a,a); 
    printf("%c%c%c%c%c\n", a,a,a,a,a);
    printf(" %c%c%c\n", a,a,a);
    printf("  %c\n", a);
}



#include<stdio.h> 
void drawQuadrangle(int side) 
{ 
	int triangleWidth = 1 + (side - 1) * 2;
	int middle = (triangleWidth + 1) / 2 - 1;
	int num = 0, sum = 0; 
for (num=0;num < side-1;num++) 
{ 
	for (sum = 0;sum < triangleWidth;sum++) 
		{
			if (sum >= middle - num && sum <= middle + num) 
				printf("* "); 
			else 
				printf("  "); 
		} 
	printf("\n"); 
} 
for (num=0;num < side;num++) 
{
	for (sum = 0;sum < triangleWidth;sum++) 
		{
			if (sum >= num && sum < triangleWidth - num) 
				printf("* "); 
			else 
				printf("  ");
		} 
		printf("\n"); 
} 
}
int main() 
{ 
	drawQuadrangle(6); 
	return 0; 
}

