public class Check_palindrome {
    public static Boolean check_Palindrome(int number){
        int reverse_number=0,reminder=0,original_Number=number;

        while (number!=0) {
            reminder = number%10;
            reverse_number=reverse_number*10+reminder;
            number=number/10;
        }
        if (original_Number==reverse_number) {
            return true;
        }
        return false;

    }
    public static void main(String[] args) {
        System.out.println(check_Palindrome(21112));
    }
}
