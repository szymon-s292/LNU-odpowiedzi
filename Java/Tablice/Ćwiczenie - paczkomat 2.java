class MailMachine {
    Box [] mailMachine = new Box[10];
    public int chooseBox( int pWidth, int pLength, int pDepth ) {
        int minVolume = 0;
        int id = 0;
        for ( Box x: mailMachine )
        {
            if (x.checkFit( pWidth, pLength, pDepth) && (minVolume == 0 || x.calcVolume() < minVolume ))
            {
                minVolume = x.calcVolume();
                id = x.getBoxID();
            }
        }
        return id;
    }
}
