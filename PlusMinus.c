// Plus Minus

#include<stdio.h>
int main() {
    int num,i,arr[100],pos=0,neg=0,zero=0;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else zero++;
    }
    printf("%6f\n",  (float)pos/num);
    printf("%6f\n",(float)neg/num);
    printf("%6f",(float)zero/num);
    return 0;
}
