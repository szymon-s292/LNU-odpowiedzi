public class WordProcessor
{
    public static int calcChars(String text,char char1) {
        char[] arr = text.toCharArray();
        int i = 0;
        for(char x: arr)
        {
            if(x == char1)
            {
                i++;
            }
        }
        return i;
    }
}
