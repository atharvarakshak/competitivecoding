

public class nqueens {

    public static boolean check(boolean[][] mat, int r, int c) {
        int lr = r, lc = c;
        
        // Check upwards in the same column
        while (lr >= 0) {
            if (mat[lr][lc]) return false;
            lr--;
        }

        lr = r;
        
        // Check upwards diagonally to the right
        while (lr >= 0 && lc < mat.length) {
            if (mat[lr][lc]) return false;
            lr--;
            lc++;
        }
        lr=r;
        lc=c;
        while(lc<mat.length){
            if (mat[lr][lc]) return false;
            
            lc++;
        }
        lc=c;
        while(lc<mat.length && lr<mat.length){
            if (mat[lr][lc]) return false;
            lr++;
            lc++;
        }
        lc=c;
        lr=r;
        while(lr<mat.length){
            if (mat[lr][lc]) return false;
            lr++;
            
        }
        lc=c;
        lr=r;
        while(lr<mat.length){
            if (mat[lr][lc]) return false;
            lr++;
            lc--;
            
        }
        lr=r;
        lc=c;
        while(lc<mat.length){
            if (mat[lr][lc]) return false;
            
            lc--;
        }
        lc=c;
        lr=r;
        while(lr<mat.length){
            if (mat[lr][lc]) return false;
            lr--;
            lc--;
            
        }


        return true;



        // Check upwards diagonally to the left
      
    }

    public static void  nqueen(boolean[][] mat,int target,int placed,int r,int c){
        if(target==placed){
            System.out.println(mat);
        }
        for(int i=0;i<mat[0].length;i++){
            if(check(mat, r, c)){
            
            }
        }
    }

    public static void main(String[] args) {
        int n = 4;
        boolean[][] mat = new boolean[n][n];

       
        

        // Call the solve method
        nqueen(mat,n,0, n, n);
        // System.out.println("Result: " + result);
    }
}
