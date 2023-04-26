#include <stdio.h>

int main()
{
    int rows,space,star=1,space_prime,num;
    scanf("%d\n%d",&num,&rows);
    space_prime = rows;
    space = rows/2;
    for(int  i = 0;i<rows;i++){
        for( int j = 0;j<space;j++){
            printf(" ");
        }
        for( int k= 0;k<star;k++){
            printf("*");
        }
        if(num>1){
            for(int i_prime =1;i_prime<num;i_prime++){
                for(int j_prime =1;j_prime<=space_prime;j_prime++){
                    printf(" ");
                }
                for(int k_prime =1;k_prime<=star;k_prime++){
                    printf("*");
                }
            }}
        printf("\n");

        if(i < rows/2){
            space -= 1;
            space_prime -=2;
            star += 2;
        }
        else{
            space += 1;
            space_prime +=2;
            star -= 2;
        }
    }



    return 0;
}
