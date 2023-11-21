public class Twirl
{
    public static int capacity( byte nrOfContainers, float containerDiameter, int containerHeight ) {
        final double PI = 3.14;
        double all = (containerDiameter/2.0) * (containerDiameter/2.0) * PI * containerHeight;
        all *= nrOfContainers;
        return (int) all ;
    }
}
