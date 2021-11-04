#include<stdio.h>
int main()
{
    int n1,n2,i,j,k;
    scanf("%d %d",&n1,&n2);
    int a1[n1],a2[n2],a3[n1+n2];
    for(i=0;i<n1;++i){
    scanf("%d",&a1[i]);}
    for(i=0;i<n2;++i){
    scanf("%d",&a2[j]);}
    for( i=0,j=0,k=0; i<n1 && j<n2;)
    {
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            i++;
            k++;
        }
        else if(a1[i]>a2[j]){
            a3[k]=a2[j];
            j++;
            k++;
        }
        else{
            a3[k]=a1[i];
            i++;
            j++;
            k++;
        }
    }
if(i<n1){
    for(;i<n1;++i){
        a3[k]=a1[i];
        k++;
    }}
else if (j<n2){
    for(;j<n2;++j){
        a3[k]=a2[j];
        k++;
    }}
for(i=0;i<k;++i){
    printf("%d ",a3[i]);
}
return 0;
}