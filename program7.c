#include <stdio.h>
#define max 50
int arr[max];
int start = 0, end = 0;
void insert(){
   if(end>=max-1){
      printf("Queue Overflow!\n");
   }else{
      printf("Enter your value: ");
      scanf("%d", &arr[end]);
      end++;
   }
}
void delete(){
   if(start >= end){
      printf("Queue is Empty!\n");
   }else{
      printf("First Element is deleted  \n", arr[start]);
      start++;
   }
}
void display(){
   for(int i=start; i<end; i++){
      printf("%d ", arr[i]);
   }
   printf("\n");
}

void main(){
   int cmd;
   int flag = 1;
   while(flag){
      printf("Enter 1(insert), 2(delete), 3(display), 4(quit): ");
      scanf("%d", &cmd);
      switch (cmd) {
      case 1:
         insert();
         break;
      case 2:
         delete();
         break;
      case 3:
         display();
         break;
      case 4:
         flag = 0;
         break;
      
      default:
         printf("Wrong Command! Try again.\n");
         break;
      }
   }
}


