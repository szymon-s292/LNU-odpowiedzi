public class Smoke
{
    public static boolean setAlarm( int temperature, int smoke ) {
        final int MAXTEMPERATURE = 75;
        final int MAXSMOKE = 150;
        if (temperature > MAXTEMPERATURE || smoke > MAXSMOKE) return true;
        return false;
    }
}
