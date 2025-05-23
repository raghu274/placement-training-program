#include <stdio.h>
#define z 50
void swap(int a,int b){
    a=900;
    b=1000;
    printf("\nswapping:%d %d",a,b);
}
int main(){
int a=7,b=5;
printf("%d %d",a,b);
swap(a,b);
printf("%d %d",a,b);
return 0;
}