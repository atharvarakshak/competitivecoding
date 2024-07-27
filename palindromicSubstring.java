public class palindromicSubstring {
    
        
        
        

    
    public static void main(String[] args) {
        String s="nitin";

        double axis=0.5,c=0;
        while(axis<s.length()){
            double orbit=0.5;
         
            while((int)axis-orbit>=0.5 && (int)axis+orbit<s.length()-0.5){
           
                if(s.charAt((int)(axis-orbit))!=s.charAt((int)(axis+orbit))){
                    break;
                }
                orbit++;
                c++;

                

            }
            // System.out.println(s.substring((int)(axis-orbit+1),(int)(axis+orbit)));
            axis++;

        }
        System.out.println(c);
    }
}
