#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int numsRemoved = 0;
    int i = 0;
    while (i < numsSize - numsRemoved) {
        if (nums[i] == val) {
            for (int j = i; j < numsSize - numsRemoved - 1; j++ ) {
                nums[j] = nums[j + 1];
            }
            if (val != 0) nums[numsSize - numsRemoved - 1] = 0;
            else nums[numsSize - numsRemoved - 1] = 1;
            numsRemoved++;
            i--;
        }
      i++;
    }
    return numsSize - numsRemoved;
}

int main(int argc, char *argv[]) {
  int nums[8] = {0,1,2,2,3,0,4,2};
  for (int i = 0; i < 8; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
  
  int rt = removeElement(nums, 8, 2);
  printf("Fn returns %d\n", rt);

  for (int i = 0; i < 8; i++) {
    printf("nums[%d] = %d\n", i, nums[i]);
  }
  return 0;
}