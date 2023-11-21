public class WeatherStation
{
    public WeatherData data = new WeatherData();
    public float calculateMean () {
        float avg = 0;
        for(int i = 0; i < 7; i++)
        {
            avg += data.weekTemp[i];
        }
        return avg/7;
    }
}
