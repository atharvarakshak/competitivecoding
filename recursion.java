
import java.util.*;

public class recursion {
    
    public static int binarySeacrh(int[] arr,int l,int r,int val) {
        int mid=(l+r)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]<val){
            l=mid-1;
        }
        else{
            r=mid+1;
        }

        
        
        return binarySeacrh(arr,l,r,val);
        // return 0;

    }
    public static void main(String[] args) {
        // int n=1;
        int[] arr={1,2,3,4,5,6,7,8,9};
        // HashMap map = new HashMap();
        // map.put(1,1 );

        // HashSet set = new HashSet();
        // set.add(set); 
        System.out.print(binarySeacrh(arr,0,8,7));
        
    }
    
}