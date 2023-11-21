public class WeatherData
{
    public float[] windSpeedDayStats = new float[24];
    public void getWindData() {
        for (int i = 0; i < 24; i++)
        {
            windSpeedDayStats[i] = WeatherStation.windSpeed();
        }
    }
}
