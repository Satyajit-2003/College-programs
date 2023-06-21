class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = new int[2];
        int start = 0;
        int end = nums.length-1;
        int mid;
        int index = -1;
        while (start <= end){
            mid = (start + end)/2;
            if (nums[mid] == target){
                index = mid;
                break;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid + 1;
            }
        }
        if (index == -1){
            return new int[]{-1,-1};
        }
        start = index;
        end = index;
        while ((start-1)>= 0 && nums[start-1] == target){
            start--;
        }
        while (((end +1)< nums.length) && nums[end+1] == target){
            end ++;
        }

        return new int[]{start, end};
    }
}

class Main{
    static void print(int[] li){
        System.out.println(li[0]+" "+li[1]);
    }
    public static void main(String[] args) {
        Solution s = new Solution();
        print(s.searchRange(new int[] {5,7,7,8,8,10}, 8));        
        print(s.searchRange(new int[] {5,7,7,8,8,10}, 6));        
        print(s.searchRange(new int[] {}, 0));        
        print(s.searchRange(new int[] {1}, 1));        
        print(s.searchRange(new int[] {2,2}, 2));        
        print(s.searchRange(new int[] {1,3},1));        
    }
}