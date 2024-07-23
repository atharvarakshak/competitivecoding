/**
 * MaximumSubarray
 */
public class MaximumSubarray {

    public static void main(String[] args) {
        
        int[] arr = {-2,-3,-6,-1,-2,-3,-4,-5,-10,-6};
        int maxsofar = Integer.MIN_VALUE;
        int max_ending_here = 0;

        for(int i=0;i<10;i++){

            max_ending_here = max_ending_here+arr[i];
            if(maxsofar<max_ending_here){
                maxsofar=max_ending_here;
            }
            if(max_ending_here<0){
                max_ending_here=0;
            }
            
        }

        System.out.println(maxsofar);
    }
}