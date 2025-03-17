#include <stdio.h>
#include <math.h>
double homeValue();
int main(void)
{
    int popularity, size;
    double z;
    
    printf("enter popularity and size \n");
    scanf("%d%d", &popularity, &size);
     z = homeValue(popularity, size) * 10000 ;
    printf("%f", z);
    
    return 0;
}
     double homeValue(int x, int y) {
         return(pow(x,3) + pow(y,2));