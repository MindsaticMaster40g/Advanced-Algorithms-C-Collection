//* kabuk sıralama yapan program **/

#include <stdio.h>
#include <conio.h>

int main(){
    int dizi[100]={0} ,T ,N ,a ;
    dizi[0]=101 ;
    dizi[1]=13 ;
    dizi[2]=21 ;
    dizi[3]=49 ;
    dizi[4]=69 ;
    dizi[5]=78 ;
    N=0 ;
    while (dizi[N]!=0)
    {
        N=N+1 ;
    }
    
    for ( T = 0; T<N-2 ; T++)
    {
        if (dizi[T]>dizi[T+2])
        {
            a=dizi[T+2] ;
            dizi[T+2]=dizi[T] ;
            dizi[T]=a ;
        }
        
    }
    
    for ( T = 0; T<N-1 ; T++)
    {
        if (dizi[T]>dizi[T+1])
        {
            a=dizi[T+1] ;
            dizi[T+1]=dizi[T] ;
            dizi[T]=a ;
        }

    }
    for ( T = 0; T<N ; T++)
    {
        printf("%d\n",dizi[T]) ;
    }
    
    return 0 ;
}