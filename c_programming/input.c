#include <stdio.h>
#include <stdlib.h>

int main(){


    char name[100];
    fgets(name,100,stdin);
   // scanf("%s",&name);
    printf("%s",name);

    /**
     * @brief  Input With Integer no decaimal;
     * 
     */
    int age;
    printf("what's your age bro\n ");
    scanf("%d",&age);
    printf("here is your age bruh %d",age);


    /**
     * @brief input with decimal 
     * 
     */

    double gpa;
    printf("what's your gpa son ? ");
    scanf("%lf",&gpa);
    printf("here is your gpa bruh %f",gpa);

    
    /**
     * @brief taking input char string
     * 
     */

    return 0;




}