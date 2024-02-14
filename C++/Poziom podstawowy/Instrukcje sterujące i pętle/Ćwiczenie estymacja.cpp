int estimate_victims( unsigned short int imperator_anger )
{
    switch(imperator_anger)
    {
        case 0:
            return 100;
            break;
        case 1:
            return 1000;
            break;
        case 2:
            return 5000;
        case 3:
            return 10000;
            break;
        default:
            return 10000000;
    }
}
