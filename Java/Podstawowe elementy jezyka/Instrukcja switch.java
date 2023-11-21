public class Dial
{
    public static long dialNumber ( byte code ) {
        long ans = 0;
        switch(code){
            case 1:
                ans = 3689334843L;
                break;
            case 2:
                ans = 3688024012L;
                break;
            case 3:
                ans = 3788098923L;
                break;
            case 4:
                ans = 3776651231L;
                break;
            case 5:
                ans = 3690034761L;
                break;
            case 6:
                ans = 3776878888L;
                break;
            case 7:
                ans = 3503343298L;
                break;
            case 8:
                ans = 3786090881L;
                break;
            case 9:
                ans = 3510109835L;
                break;
            default:
                return ans;
        }
        return ans;
    }
}
