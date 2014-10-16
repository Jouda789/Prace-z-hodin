public class Kvadraticka_rovnice {
    public static void main(String[] args) {
    
    
    double a = Double.parseDouble(args[0]);
    double b = Double.parseDouble(args[1]);
    double c = Double.parseDouble(args[2]);
       
       
    System.out.printf("\n");
       
    System.out.printf("Zadali jste rovnici %4fx^2 + %4fx + %4f = 0", a, b, c);
    
    System.out.printf("\n\n");
    
    double D = b*b - 4*a*c;
    
    if(D > 0.00001){  double x1 = (-b + Math.sqrt(D))/(2*a);
                double x2 = (-b - Math.sqrt(D))/(2*a);
                
                System.out.printf("Rovnice ma dva realne koreny, %f a %f .", x1, x2);
             }
                          
    else if (D > -0.00001) {double x3 = (-b)/(2*a);
                                        
                System.out.printf("Rovnice ma jeden realny (dvojnasobny) koren, %f .", x3);
             }
                  
    else {  D = -D;
            
            double x4 =  -b/(2*a);
            double x5 =  Math.sqrt(D)/(2*a);
            
             
          System.out.printf ("Rovnice ma reseni v oboru C: %f + i*%f  a  %f - i*%f", x4, x5, x4, x5);
         }
    System.out.printf("\n");     
         
    }
         
}