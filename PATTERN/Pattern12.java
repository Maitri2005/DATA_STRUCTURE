// AAA
// BBB
// CCC
public class Pattern12 {

    public static void main(String[] args) {
        //int count=65;
        for (int i = 1; i <=3; i++) {
            
            for (int j = 1; j<=3 ; j++) {
                // System.out.print((char)count);
               
                System.out.print( (char) ('A'+i-1));
            }
            //count++;
            System.out.println();
        }
    }
}
