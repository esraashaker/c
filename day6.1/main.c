#include <stdio.h>
#include <stdlib.h>



int Add(int , int );
int subtract(int , int );
int multiply(int , int );
float divide(float , float);


int main()
{
  int x, y, sum,sub,mult,divid;
   printf("enter the first number : ");
   scanf("%i",&x);
   printf("enter the sacend number : ");
   scanf("%i",&y);
  sum= Add(x,y);
  sub= subtract(x,y);
  mult= multiply(x,y);
  divid=divide(x,y);
   printf("sum of x&y is %i \n ",sum);
  printf("subtract of x&y is %i \n ",sub);
 printf("miltiply of x&y is %i \n ",mult);
 printf("divide of x&y is %i \n ",divid);

    return 0;
}
//implemantion
int Add(int x , int y )
{
  int sum=x+y;
return sum;
}
int subtract(int x , int y )
{
  int sub=x-y;
return sub;
}
int multiply(int x , int y )
{
  int mult=x*y;
return mult;
}
float divide(float  x , float y )
{
         float divid;

  if(y==0){
    printf("please enter the number greater than zero");
  }
  else{
    divid= x/y;

   return divid;

  }

}

