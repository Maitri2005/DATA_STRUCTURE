// E
// DE
// CDE
// BCDE
// ABCDE

public class Pattern18 {
    public static void main(String[] args) {
        for (int i = 5; i >=1; i--) {
            for (int j =i; j<=5; j++) {
                System.out.print((char)('A'+j-1));
            }
            System.out.println();
        }
    }
}
