int set_angle( unsigned short int counter )
{
    switch(counter)
    {
        case 0:
        return 0;
            break;
        case 1:
        return 5;
            break;
        case 2:
        return 12;
            break;
        case 3:
        return 20;
            break;
        case 4:
        return 30;
            break;
        case 5:
        return 45;
            break;
        case 6:
        return 60;
            break;
        case 7:
        return 72;
            break;
        case 8:
        return 83;
            break;
        case 9:
        return 90;
            break;
        default:
            return 0;
    }
}
