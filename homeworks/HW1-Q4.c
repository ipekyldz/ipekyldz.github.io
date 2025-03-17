#include <stdio.h>
#include <math.h>
int computeHomeValue();
int main(void)
{
    int popularity, size, z;
     
    printf("enter popularity and size \n");
    scanf("%d%d", &popularity, &size);
     z = computeHomeValue(popularity, size) * 10000 ;
    printf("%f", z);
    
    return 0;
}
     int computeHomeValue(int x, int y) {
         return(pow(x,3) + pow(y,2));}