public class permutation {
    public static boolean isPali(String s){
        // String t=s;
        // reverseStr(.begin(),t.end());
        int l=0,r=s.length()-1;
        while(l<r){
            if(s.charAt(l)!=s.charAt(r)) return false;
            l++;
            r--;
        }
        return true;

    }

    public static void palindromeSubstring(String inp,String op,String c){

        if(inp.length()==0){
            System.out.println(op);
            return;
        
        }

        for(int i=0;i<inp.length();i++){
           c += inp.charAt(i);
          String left = inp.substring(0, i)+inp.substring(i+1);
          
          if(isPali(c)){

              palindromeSubstring(left, op+c,c );
          }
        }
    }
    public static void main(String[] args) {
        palindromeSubstring("abcd","","");
    }
}
