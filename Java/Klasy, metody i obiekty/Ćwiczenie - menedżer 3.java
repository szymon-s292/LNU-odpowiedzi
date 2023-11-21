class Player {

    private int number;
    private int height;
    private int weight;
    private int strength = 100;
    private int shootingSkill;
    private int passingSkill;
    private int defenceSkill;

// constructor
    public Player( int number, int height, int weight, int shootingSkill, int passingSkill, int defenceSkill ) {
        if (number > 99) this.number = 99;
        else if (number < 0) this.number = 0;
        else this.number = number;

        if (height > 230) this.height = 230;
        else if (height < 150) this.height = 150;
        else this.height = height;

        if (weight > 150) this.weight = 150;
        else if (weight < 70) this.weight = 70;
        else this.weight = weight;

        if (shootingSkill > 100) this.shootingSkill = 100;
        else if (shootingSkill < 0) this.shootingSkill = 0;
        else this.shootingSkill = shootingSkill;

        if (passingSkill > 100) this.passingSkill = 100;
        else if (passingSkill < 0) this.passingSkill = 0;
        else this.passingSkill = passingSkill;

        if (defenceSkill > 100) this.defenceSkill = 100;
        else if (defenceSkill < 0) this.defenceSkill = 0;
        else this.defenceSkill = defenceSkill;
    }
}
