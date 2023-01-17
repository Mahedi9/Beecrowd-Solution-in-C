#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j;
for(i=0;i<n;i++){
    int k;
scanf("%d",&k);
        int ar[k];
    for(j=0; j<k;j++){
        scanf("%d",&ar[j]);
    }for(j=0; j<k; j++){
      if(ar[j]==1){
        printf("Rolien\n");
      }
      if(ar[j]==2){
        printf("Naej\n");
      }
      if(ar[j]==3){
        printf("Elehcim\n");
      }
      if(ar[j]==4){
        printf("Odranoel\n");
      }
    }
}

return 0;
}
