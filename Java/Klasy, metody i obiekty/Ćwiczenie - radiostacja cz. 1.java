// Copyright (C) 2017 Liga Niezwykłych Umysłów rev: 0.1
// This software is licensed under the LNU statements

class Device {
/*
    // Zgaś diodę o numerze number
    public native void setLightOff( int number );

    // Zapal diodę o numerze number
    public native void setLightOn( int number );

    // Temperatura procesora w stopniach Celsjusza
    public native int processorTemperature();

    // Poziom naładowania baterii w procentach
    public native int batteryLevel();

    // Podłączenie zasilania
    public native boolean externalPower();

    // Wykorzystanie pamięci w procentach
    public native int memoryUsage();

    // Wykorzystane miejsce na dysku w megabajtach
    public native int usedDiskSpace();

    // Pojemność dysku w megabajtach
    public native int diskCapacity();

    // Połaczenie z internetem
    public native boolean connection();

    // Synchronizacja urządzeniem
    public native boolean synchronization();

    // Autentykacja protokołu szyfrowania
    public native boolean authentication();

    public void changeBitStatus( int pos ) {
    };

*/
    // Getter do pobierania aktualnego statusu
    public int getStatus() {
        return status;
    }

    // Funkcja modyfikująca określony bit w statusie
    //   dla dir = 0  funkcja zeruje bit o pozycji pos
    //   dla dir = 1  funkcja ustawia bit o pozycji pos
    //   dla dir = -1 funkcja odwraca bit o pozycji pos
    public void changeBitStatus( int pos, int dir )
    {
        int mask = 1 << pos;
        switch(dir)
        {
            case 0:
                status &= ~ mask;
                break;
            case 1:
                status |= mask;
                break;
            case -1:
                status ^= mask;
                break;
        }
    };

    // Pole reprezentujące aktualny status
    private int status;
}
