public class Company
{
    public static int calcYears (float debt, int rate, float companyValue) {
        int years= 0;
        for (;;) {
            debt += debt * (rate/100f);
            years++;
            if (debt > companyValue) {
                break;
            }
        }
        return years;
    }
}
