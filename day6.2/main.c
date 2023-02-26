#include <stdio.h>
#include <stdlib.h>


//prototypt
void swap(int * , int * );

int main()
{
  int x=5;
  int y=7;
  printf("the value is x=%i and  y=%i \n  ",x,y) ;
  swap(&x,&y);
  printf("the value is x=%i and  y=%i \n  ",x,y) ;

    return 0;
}
//implemantion
void swap(int *x , int *y ){
  int temp;
  temp= *x;
    *x = *y;
    *y = temp;
printf("the value is x=%i and  y=%i \n ",*x,*y);

}





