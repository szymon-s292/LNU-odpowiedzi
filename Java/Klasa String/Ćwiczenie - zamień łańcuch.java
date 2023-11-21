public class Catalogue
{
    public String[] opList;
    public int calcString( String s ) {
        int sum = 0;
        for(String x: opList)
	    {
	        if(x.endsWith(s) == true)
	            sum++;
	    }
	    return sum;
    }
}
