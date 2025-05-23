#include <stdio.h>
int main(){
int s[]={1,2,3,4,5};
int *arr= s;
int n=5;
int c=0;
for(int i=0;i<5;i++){
    c++;
    arr++;
    
}
printf("%d",c);
return 0;

}