public class Reverse_number {
    public static int reverse_Number(int number){
        int reverse_number=0,reminder=0;
        while (number!=0) {
            reminder = number%10;
            reverse_number=reverse_number*10+reminder;
            number=number/10;
        }
        return reverse_number;
    }
    public static void main(String[] args) {
        System.out.println(reverse_Number(123));
    }
}
