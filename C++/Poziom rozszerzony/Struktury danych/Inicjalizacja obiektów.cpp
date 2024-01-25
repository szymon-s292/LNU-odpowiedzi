// Write your functions below...
Triangle createTriangle(Point p1, Point p2, Point p3)
{
    Triangle t{p1, p2, p3};
    return t;
}

Triangle createTriangle(float a, float b, float c, float d, float e, float f)
{
    Triangle t;
    t.p1 = (Point){a,b};
    t.p2 = (Point){c,d};
    t.p3 = (Point){e,f};
    return t;
}
