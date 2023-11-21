public class Bank
{
    public float[][] currencyTrade = new float[30][2];

    public float saleValue(){
        float sum = 0;
        for(int i = 0; i < 30; i++)
        {
            sum += currencyTrade[i][0]*currencyTrade[i][1];
        }
        return sum;
    }
}
