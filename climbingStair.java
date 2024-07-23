public class climbingStair {
    public static void func(int n,int jumps,int curr,String ans){

        if (curr > n) {
            return;
        }

        if (curr == n) {
            System.out.println(ans);
            return;
        }
        for(int option = 1; option <= jumps; option++){
            func(n, jumps, curr + option, ans+option+" ");
        }



    }
    public static void main(String[] args) {
        func(2,3,0,"");        
    }
}
