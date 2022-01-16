#include<stdio.h>
void mul(int arr[][], int temp[][], int i, int j, int n){
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
             temp[i][j]=temp[i][j]*arr[i][j];
            }
            }
}
int main(){
    int i,j,k,n,count,flag=0;
    printf("nodes=");
    scanf("%d",&n);
    int arr[n][n],temp[n][n];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        temp[i][j]=arr[i][j];
    }
    for(count=0;;count++)
    {
    mul(arr,temp,i,j,n);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        if(temp[i][j]!=arr[i][j]){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }
    if(flag==1)
        
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("%d ",arr[i][j]);
    }
        printf("\n");
    }
    
    return 0;
}