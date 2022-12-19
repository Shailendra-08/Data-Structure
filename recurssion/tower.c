#include<stdio.h>
int tower(int n,char a, char b ,char c ){
    if (n>0)
    {
        tower(n-1,a,c,b);
        printf("move disk %d from %c to %c\n",n,a,c);
        tower(n-1,b,a,c);
    }
    
  
    
}
int main(){
    int n;
    printf("Enter the number of Disk-->");
    scanf("%d",&n);
    tower(n,'A' ,'B' ,'C');

    return 0;
}