class Box
{
    int length;
    int width;
    int depth;
    Box ( int l, int w,  int d ) {
        length = l;
        width = w;
        depth = d;
    }
    int calcVolume () {
        return width * length * depth;
    }
}

public class Mailbox
{
    Box box1 = new Box(2,3,10);
    int volume = box1.calcVolume();
}

