public class WordProcessor
{
	public String[] tempBasket;
	int sum = 0;
	public int countChars(){
	    for(String s: tempBasket)
	    {
	        sum+=s.length();
	    }
	    return sum;
	}
}
