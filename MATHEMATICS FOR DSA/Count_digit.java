public class Count_digit {
    public static int count_Digit(int number){
        int no_of_digit=0;
        while(number!=0){
            no_of_digit+=1;
            number/=10;
        }
        return no_of_digit;

    }
    public static void main(String[] args) {
        System.out.println(count_Digit(89));
    }
}
