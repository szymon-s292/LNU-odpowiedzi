public class Cheese
{
    public static double calcCheese( float height, float cheeseR, float bubbleR, int bubbleNumber ) {
        double ser = height * cheeseR * cheeseR * 3.1415;
        double buble = 4.0 / 3.0 * bubbleR * bubbleR * bubbleR * 3.1415 * bubbleNumber;
        return ser - buble;
    }
}
