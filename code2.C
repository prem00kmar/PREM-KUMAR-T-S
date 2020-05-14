#include<stdio.h>

int main(){
int a, b, c, big;
printf("Enter three numbers to find the largest among them\n");
scanf("%d %d %d", &a, &b, &c);
big = (a>b)?(a>c?a:c):(b>c?b:c);
printf("%d is the largest among the given numbers\n", big);
return 0;
}
