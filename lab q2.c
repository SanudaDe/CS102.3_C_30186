#include <stdio.h>

int main()
{
    int marks[10],total=0;

    for(int i=0; i<10; i++){
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
        total += marks[i];
    }

    printf("Total:%d\n",total);
    printf("Average:%.2f\n",(float)total/10);

    float avg=total/10;

    if(avg>50){
            printf("pass\n");

    }
    else{
        printf("pass\n");

    }
    return 0;
    }
