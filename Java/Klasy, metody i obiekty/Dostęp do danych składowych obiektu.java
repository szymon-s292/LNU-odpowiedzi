class Box
{
    int length;
    int width;
    int depth;
}

public class Mailbox
{
    public static Box checkBox() {
        Box box1 = new Box();
        box1.length = 2;
        box1.width = 3;
        box1.depth = 10;
        return box1;
    }
}

