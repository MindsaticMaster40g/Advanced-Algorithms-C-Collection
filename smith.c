//* girilen sayının farklı asal çarpanlarının toplamanın sayının rakamları toplamı na eşit olup olmadığını söyleyen program *//

#include <math.h>
#include <stdio.h>
#include <conio.h>

int main(){
    int canta[1000]={0},x ,y ,r ,T ,N ,i ,a ,z ;
    printf("sayiyi girinz") ;
    scanf("%d",&x) ;
    N=1 ;
    y=x ;
    a=0 ;
    T=0 ;
    r=0 ;
    while (fmod(x,pow(10,N-1))!=x)
    {
        a=fmod((y-r),pow(10,N)) ;
        z=a/(pow(10,N-1)) ;
        r=r+a ;
        N=N+1 ;
        T=T+z ;
    }
    N=0 ;
    while (N<=x)
    {
        N=N+1 ;
        if (fmod(x,N)==0)
        {
            canta[N]=N ;
        }
    }
    i=0 ;
    a=0 ;
    r=0 ;
    y=0 ;
    while (i<=N)
    {
        i=i+1 ;
        if (canta[i]!=0)
        {
            while (a<=i)
            {
                a=a+1 ;
                if (i%a==0)
                {
                    r=r+1 ;
                } 
                
            }
            if (r==2)
            {
                y=y+i ;
            }
            
        }
        
    }
    if (y==T)
    {
        printf("esittir") ;
    }
    else
    {
        printf("esit degildir") ;
    } 
    return 0 ;
}