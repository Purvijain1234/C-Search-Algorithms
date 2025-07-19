#include<stdio.h>
#include<stdlib.h>

int main(){
  int arr[5] = {10,20,30,40,50};
  int item;
  printf("Enter searching item : ");
  scanf("%d",&item);

  int i=0;
  while(i<5){
    if(arr[i] == item){
      printf("Item %d is found at %d",item,i+1);
      exit(0);
    }
    i++;
  }

  if(i>=5){
    printf("Item %d is not found",item);
    exit(0);
  }
  return 0;

//   Time Complexity;
//   Best case = o(1);   item at i=start
//   Average case = o(n);  item at i=mi==d
//   Worst case = o(n);   item at i=end
}