#include<stdio.h>
void findMinMax(int arr[],int lenth, int *min, int *max){
    *min = *max = arr[0];
    for (int i = 0; i < lenth; i++)
    {
      if (arr[i]>*max)
      {
        *max = arr[i];
      }
      if (arr[i]<*min)
      {
        *min = arr[i];
      }
    }
}

int findMinMax2(int arr[],int lenth){
  int min = arr[0];
  int max = arr[0];
  for (int i = 0; i < lenth; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
    
  }
  printf("Min = %d, Max = %d\n",min,max);
  return min;
  return max;
}

int main(){
    int arr[7]= {100,5,1,20,9999,2,10};
    int min,max;
    // findMinMax(arr,7,&min,&max);
    findMinMax2(arr,7);
    // printf("Min = %d, Max = %d\n",min,max);
    // int result =0;
    // result = min + max;
    // printf("Tong min + max = %d\n",result);
    return 0;
}