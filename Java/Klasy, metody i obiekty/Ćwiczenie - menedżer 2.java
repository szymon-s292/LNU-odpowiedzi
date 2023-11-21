class Player {

    private int number;
    private int height;
    private int weight;
    private int strength = 100;
    private int shootingSkill;
    private int passingSkill;
    private int defenceSkill;

// constructor
    Player(int nr, int h, int w, int sS, int pS, int sD)
    {
        this.number = nr;
        this.height = h;
        this.weight = w;
        this.shootingSkill = sS;
        this.passingSkill = pS;
        this.defenceSkill = sD;
    }
}
