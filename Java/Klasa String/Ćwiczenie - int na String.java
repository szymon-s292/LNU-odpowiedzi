public class Product
{
    String productName;
    int productionDay;
    String elo = Integer.toString(productionDay);
    String ans = productName + elo;
    public String createLabel() {
        return productName + productionDay;
    }
}
