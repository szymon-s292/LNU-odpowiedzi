public class User
{
    public String generateTempPass(String text, int index1, int index2, int index3, int index4) {
        char c1 = text.charAt(index1);
        char c2 = text.charAt(index2);
        char c3 = text.charAt(index3);
        char c4 = text.charAt(index4);

        return "" + c1 + c2 + c3 + c4;
    }
}
