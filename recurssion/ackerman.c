#include<stdio.h>

int acker(int m ,int n){
    if (m==0)
    {
      return (n+1);

    }else if(n==0){
        return acker(m-1,1);
    }else{
        return acker(m-1,acker(m,n-1));
    }
    
}
int  main(){
    int m,n;
    printf("Enter the two number-->");
    scanf("%d , %d",&m,&n);
    printf("output--> %d\n",acker(m,n));

    return 0;
}




