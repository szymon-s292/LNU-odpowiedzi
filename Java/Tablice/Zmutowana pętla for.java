public class RallySweden
{
    public double[] stageResults;

    public double bestTime(){
        double min = stageResults[0];
        for (double i: stageResults)
        {
            if(i < min) min = i;
        }
        return min;
    }
}
