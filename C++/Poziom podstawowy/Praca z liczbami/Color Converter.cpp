#define RGB16 unsigned short

#define GREEN_OFFSET 5
#define BLUE_OFFSET 11

RGB16 colorConvert(unsigned char r, unsigned char g, unsigned char b)
{
    unsigned short rgb = 0;
    rgb += (31 & (b / 8)) << BLUE_OFFSET;
    rgb += (63 & (g / 4)) << GREEN_OFFSET;
    rgb += (31 & (r / 8));
    return rgb;
}
