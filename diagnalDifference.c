// Diagnal Difference 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()  {
    int num,arr[100][100],i,j,left_diag_sum=0,right_diag_sum=0,diff;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&arr[i][j]);
            
            if(i==j){
                left_diag_sum = left_diag_sum+arr[i][j];
            }
            if(i==num-j-1){
                right_diag_sum = right_diag_sum+arr[i][j];
            }
        }
    }
    
    diff = abs(left_diag_sum-right_diag_sum);
    printf("%d",diff);
    
    return 0;
}
