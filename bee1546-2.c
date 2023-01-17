#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j;
for(i=0;i<n;i++){
    int k,x;
scanf("%d",&k);

    for(j=0; j<k;j++){
        scanf("%d",&x);

      if(x==1){
        printf("Rolien\n");
      }
      if(x==2){
        printf("Naej\n");
      }
      if(x==3){
        printf("Elehcim\n");
      }
      if(x==4){
        printf("Odranoel\n");
      }
    }
}


return 0;
}

