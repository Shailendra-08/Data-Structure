#include<stdio.h>

int fact(int a){
    int factorial;
    if (a==0)
    {
        return 0;
    }else if(a==1){
        return 1;
    }else{
        return a*fact(a-1);
    
    }


    
}

int main(){
    int a,f;
    printf("Enter the number to get the factorial -->");
    scanf("%d",&a);
    f=fact(a);
    printf("The factorial of %d is -->%d",a,f);


    return 0;
}