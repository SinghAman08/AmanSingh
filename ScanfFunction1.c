// here in this program we write about scanf() function 

/*

what is scanf() function ->>

    scanf() is predefine function in c lanuguge. its defined in stdio.h headerfile. its take input from user and assign to the variable.
    
syntax ->>

    scanf("formate modifire",address of variable);
    
*/

// simple scanf() function use

#include<stdio.h>
int main()
{
    int x;
    float y,z;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("x = %d\n",x);

    printf("enter two float value: ");
    // scanf("%f %f",&y,&z);
    // printf("y = %f z = %f",y,z);
    // scanf(".2%f .2%f",&y,&z);
    scanf("%f%f",&y,&z);
    printf("y = .2%f z = .2%f",y,z);
        
    return 0;

}



