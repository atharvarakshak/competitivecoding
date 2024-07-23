/**
 * ruler
 */
public class ruler {
    public static void createScale(int ticklength) {
        if(ticklength==0){
            return;
        }
        createScale(ticklength-1);
        for(int i=0;i<ticklength;i++){
            System.out.print("-");
        }
        System.out.println();
        createScale(ticklength-1);
    }

    public static void main(String[] args) {
        

        createScale(4);
    }
}