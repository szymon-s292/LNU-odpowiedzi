public class Bank
{
    public static int calcYears (float creditValue, int interestRate, float installment) {
        int z = 0;
        double y;
        while (creditValue> 0)
        {
            z++;
            y = creditValue * (interestRate / 100.0);
            creditValue += y;
            creditValue -= installment;
        }
        return z ;
    }
}
