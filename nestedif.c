#include <stdio.h>
int main(){
    int age=20;
    int hasid=1;
    if(age>=18){
        if(hasid==1){
            printf("you are eligible");
        }
        else {
            printf("you need a hasid");
        }
    }
    else{
        printf("you are underage");
    } 
    return 0;
}