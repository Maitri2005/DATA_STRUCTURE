// ABCDE
// BCDE
// CDE
// DE
// E
public class Pattern19 {
    public static void main(String[] args) {
        for (int i = 1; i<=5; i++) {
            for (int j =i; j<=5; j++) {
                System.out.print((char)('A'+j-1));
            }
            System.out.println();
        }
    }
}
