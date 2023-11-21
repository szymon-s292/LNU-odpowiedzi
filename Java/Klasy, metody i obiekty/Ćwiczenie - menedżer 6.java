class Player {
    private int number;
    private int height;
    private int weight;
    private int strength;
    private int shootingSkill;
    private int passingSkill;
    private int defenceSkill;

// constructor
    Player ( int number, int height, int weight, int shootingSkill, int passingSkill, int defenceSkill ) {
        if ( number < 0 ) this.number = 0;
        else if (number > 99) this.number = 99;
        else this.number = number;

        if ( height < 150 ) this.height = 150;
        else if (height > 230) this.height = 230;
        else this.height = height;

        if ( weight < 70 ) this.weight = 70;
        else if (weight > 150) this.weight = 150;
        else this.weight = weight;

        if ( shootingSkill < 0 ) this.shootingSkill = 0;
        else if (shootingSkill > 100) this.shootingSkill= 100;
        else this.shootingSkill = shootingSkill;

        if ( passingSkill< 0 ) this.passingSkill = 0;
        else if (passingSkill> 100) this.passingSkill = 100;
        else this.passingSkill = passingSkill;

        if ( defenceSkill< 0 ) this.defenceSkill = 0;
        else if (defenceSkill> 100) this.defenceSkill = 100;
        else this.defenceSkill = defenceSkill;
    }

// rest
    void rest ( int time )
    {
        if(this.strength + time > 100) this.strength = 100;
        else this.strength += time;
        if(time > 48)
        {
            this.shootingSkill -= ((time - 48) / 24 );
            this.passingSkill -= ((time - 48) / 24 );
            this.defenceSkill -= ((time - 48) / 24 );
        }

        if(this.shootingSkill < 0) this.shootingSkill = 0;
        if(this.passingSkill < 0) this.passingSkill = 0;
        if(this.defenceSkill < 0) this.defenceSkill = 0;
    }
}
