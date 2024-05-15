// A
// BC
// CDE
// DEFG
public class Pattern16 {
     int val = 64;
    public static void main(String[] args) {
        for (int i = 1; i <=4; i++) {
            for (int j =1; j <=i; j++) {
                System.out.print((char)('A'+i+j-2));
            }
            System.out.println();
        }
    }
}
