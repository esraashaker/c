#include <stdio.h>
#include <stdlib.h>


int main()
{
    //fill array
     int arr_grade[5];
     int *ptr=arr_grade;

    for(int i=1;i<=5;i++){
        printf("enter grade of the student:%i : ",i);
        scanf("%i",ptr);
     ptr++;
    }

          printf("----------------------------------------- \n ");

ptr=arr_grade;
 for(int i=1;i<=5;i++){
        printf("enter grade of the student:%i is %i \n ",i,*ptr);
        ptr++;

    }

    return 0;
}
