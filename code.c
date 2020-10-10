
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *newArray = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    int i;
    int j;
    for(i=0; i<numsSize; i++){
        for(j=i+1; j<numsSize; j++){
            //if(j != (numsSize-1)){
                
    
            
            if(nums[j]+nums[i]==target){
                newArray[0]= i;
                newArray[1] = j;
                break;
      
            }
            //}
        }
    }
    return newArray;
}
