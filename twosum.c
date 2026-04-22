//twosum 
//this solution is not the best one 
//but as there is no hash maps in c we have to compromise till we go for c++

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = malloc(2*sizeof(int));
    *returnSize = 2;

    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i] + nums[j]) == target){
                res[0] = i;
                res[1] = j;
                break;
            }
        }
    }
    return res;
}
