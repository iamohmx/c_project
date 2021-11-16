#include<stdio.h>
 
int main()
{
    int hexagonSize;
    int r, s, i;
     
    printf("  Enter number for Hexagon size : ");
    scanf("%d", &hexagonSize);
     
    for(r=0; r<hexagonSize; r++)
    {
        for(s=0; s<=hexagonSize-r; s++){
            printf(" ");
        }
         
        for(i=0; i<hexagonSize; i++){
            if(r==0){
                printf("* ");
            }
            else if(r>0 && hexagonSize == 2){
                printf("*");
                for(s=0; s<(hexagonSize*2-3)+r*2; s++){
                    printf(" ");
                }               
            }
            else if(r>0){
                if(i==0 || i == hexagonSize-1){
                    printf("*");    
                }else{
                    for(s=0; s<(hexagonSize*2-3)+r*2; s++){
                        printf("*");
                    }
                    i=hexagonSize-2;    
                }
            }
        }
        printf("\n");
    }
     
    for(r=0; r<=hexagonSize; r++)
    {
        for(s=0; s<=r; s++){
            printf(" ");
        }
 
        for(i=0; i<hexagonSize; i++){
            if(r==hexagonSize){
                printf("* ");
            }
            else if(r==0 && hexagonSize == 1){
                printf("* *");
            }
            else if(r>=0 && hexagonSize == 2){
                printf("*");
                for(s=0; s<(hexagonSize*4-3)-r*2; s++){
                    printf(" ");
                }               
            }
            else if(r>=0){
                if(i==0 || i == hexagonSize-1){
                    printf("*");    
                }else{
                    for(s=0; s<(hexagonSize*4-3)-r*2; s++){
                        printf("*");
                    }
                     
                    i=hexagonSize-2;
                }
            }
        }
         
        printf("\n");
    }
     
    return 0;
}
