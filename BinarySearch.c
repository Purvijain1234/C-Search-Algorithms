#include<stdio.h>
#include<stdlib.h>

// In Binary search all items in array must be in ascending order
int main(){
  int arr[5] = {10,20,30,40,50};
  int item;
  printf("Enter searching item : ");
  scanf("%d",&item);

  int mid;
  int f=0;
  int lr=0; //Lower
  int up=4; //Upper
  while(lr<=up){
    mid = (lr+up)/2;
    if(arr[mid] == item){
       f = 1;
       break; 
    }
    if(arr[mid]<item){
        lr = mid+1;
    }
    else{
        up = mid-1;
    }
  }

  if(f == 1){
    printf("Item %d is found at %d",item,mid);
  }
  else{
    printf("Item %d is not found",item);
  }
  return 0;

//   Time Complexity
//   Best case = o(1);  item == mid
//   Average case = o(log n);  item == upper or lower
//   Worst case = o(log n);   item == upper or lower
}