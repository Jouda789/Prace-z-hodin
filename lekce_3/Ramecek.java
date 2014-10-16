public class Ramecek {
    public static void main(String[] args) {
    
        // nejdriv zadavam sirku, pak vysku
       
       for (int vyska = Integer.parseInt(args[1]); vyska > 0; vyska--)     {
       
                              for(int sirka = Integer.parseInt(args[0]); sirka > 0; sirka--){
                              
                                     System.out.printf("X");
                             }                 
                            System.out.printf("\n");
    
        } 
    }
    
}