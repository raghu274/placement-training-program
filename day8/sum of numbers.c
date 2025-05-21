#include <stdio.h>
#include<math.h>
//return_type funcname();//declaration
//datatype var_name;
int add(){
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x+y;
    return sum;
}
int main()
{
 int x=add();
 printf("%d",x);
}