class Box
{
    int length;
    int width;
    int depth;

    boolean checkFit(int packageWidth, int packageLength, int packageDepth) {
        if ( packageWidth <= width && packageLength <= length && packageDepth <= depth ) return true;
        if ( packageWidth <= width && packageLength <= depth && packageDepth <= length ) return true;
        if ( packageWidth <= width && packageLength <= width && packageDepth <= width ) return true;
        if ( packageWidth <= width && packageLength <= width && packageDepth <= width ) return true;
        if ( packageWidth <= length && packageLength <= length && packageDepth <= length ) return true;
        if ( packageWidth <= length && packageLength <= length && packageDepth <= length ) return true;
        if ( packageWidth <= depth && packageLength <= depth && packageDepth <= depth ) return true;
        if ( packageWidth <= depth && packageLength <= depth && packageDepth <= depth ) return true;
        return false;
    }
}
