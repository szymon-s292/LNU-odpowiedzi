public class Spy
{
	public String encodeText(String text){
	    String ans = text.replace('a','@').replace('s','$').replace('o','0').replace('e','3');
	    return ans;
	}
}
