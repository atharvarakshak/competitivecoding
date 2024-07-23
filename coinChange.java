public class coinChange {

    public static void recursion(int[] coins,int curr,String s) {
        if(curr<0) return;

        if(curr==0){

            System.out.println(s);
            return ;
        }

        for(int indx=0;indx<coins.length;indx++){
            if(curr-coins[indx]>=0){
                recursion(coins,curr-coins[indx],s+coins[indx]);
            }
        }




    }
    
    public static void main(String[] args) {
        int[] coins = {2,3,5};

        recursion(coins,8,"");

    }
}
