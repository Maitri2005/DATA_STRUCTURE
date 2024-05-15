// A
// BA
// CBA
// DBCA
// EDCBA
public class Pattern17 {
    public static void main(String[] args) {
        for (int i = 1; i <=5; i++) {
            for (int j =i; j>=1; j--) {
                System.out.print((char)('A'+j-1));
            }
            System.out.println();
        }
    }
}
