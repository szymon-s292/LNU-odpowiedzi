public class Bicycle
{
    public static double calcSpeed( float rotationTime, float diameter ) {
        final double PI = 3.1416;
        double obwod = PI * diameter;
        double predkosc = obwod / rotationTime;

        return predkosc * 0.036;
    }
}
