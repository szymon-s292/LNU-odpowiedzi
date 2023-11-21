public class Tools
{
    public static int sum ( int firstNumber, int lastNumber ) {
        int sum = 0;
        for(int i = firstNumber; i <= lastNumber; i++)
        {
            sum += i;
        }
        return sum;
    }
}
