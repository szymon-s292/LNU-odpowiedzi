class RSComm {
    Device dev = new Device();
    public void updateStatus() {
        dev.changeBitStatus(0,0);
        dev.changeBitStatus(1,0);
        dev.changeBitStatus(2,0);
        dev.changeBitStatus(3,0);
        dev.changeBitStatus(4,0);
        dev.changeBitStatus(5,0);
        dev.changeBitStatus(6,0);
        dev.changeBitStatus(7,0);


        if(dev.processorTemperature()<70)
        {
            dev.changeBitStatus(0,1);
        }
        if(dev.batteryLevel()>10)
        {
            dev.changeBitStatus(1,1);
        }
        if(dev.externalPower())
        {
            dev.changeBitStatus(2,1);
        }
        if(dev.memoryUsage()<80)
        {
            dev.changeBitStatus(3,1);
        }

        dev.changeBitStatus( 4, ( dev.usedDiskSpace() * 100.0 / dev.diskCapacity() <= 90 ) ? 1 : 0 );

        if(dev.connection())
        {
            dev.changeBitStatus(5,1);
        }
        if(dev.synchronization())
        {
            dev.changeBitStatus(6,1);
        }
        if(dev.authentication())
        {
            dev.changeBitStatus(7,1);
        }
    };
}
