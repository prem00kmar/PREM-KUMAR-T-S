#include<stdio.h>
#include<stdint.h>

int main(){
int32_t i;
printf("Enter the IP address in 32-bit format\n");
scanf("%i", &i);
printf("%i.%i.%i.%i", (i>>24)&0xFF, (i>>16)&0xFF, (i>>8)&0xFF, i&0xFF);
return 0;
}
