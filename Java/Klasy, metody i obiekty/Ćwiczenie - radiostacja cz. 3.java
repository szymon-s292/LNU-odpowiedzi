
class RSComm {
    Device dev = new Device();
    public void displayStatus() {

        int s = dev.getStatus();
        int mask = 1;

        for (int i = 0; i < 8; i++)
        {
            if((s & mask) > 0)
                dev.setLightOn(i+1);
            else
                dev.setLightOff(i+1);

            mask *= 2;
        }
    };
}
