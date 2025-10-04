#include<stdio.h>
int main() {
    int n,i, arr[n] ;
    printf("Enter the n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        if(arr[i]%2==0) {
            printf("Even : %d\n",arr[i]);
        } else {
            printf("Odd : %d\n",arr[i]);
        }
    }
}
