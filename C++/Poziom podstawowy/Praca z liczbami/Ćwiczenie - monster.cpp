#define MONSTER unsigned char

const unsigned char monsterHasGun          =   1;
const unsigned char monsterIsAggresive     =   2;
const unsigned char monsterIsFireResistant =   4;
const unsigned char monsterLoseWeapon      =   8;
const unsigned char monsterSeeOponent      =  16;
const unsigned char monsterHearOponent     =  32;
const unsigned char monsterRunOponent      =  64;
const unsigned char monsterOpenDoor        = 128;

MONSTER setMonster ( bool param1, bool param2, bool param3, bool param4, bool param5, bool param6, bool param7, bool param8 )
{
    unsigned char monster = 0;
    if(param1) monster |= monsterHasGun;
    if(param2) monster |= monsterIsAggresive;
    if(param3) monster |= monsterIsFireResistant;
    if(param4) monster |= monsterLoseWeapon;
    if(param5) monster |= monsterSeeOponent;
    if(param6) monster |= monsterHearOponent;
    if(param7) monster |= monsterRunOponent;
    if(param8) monster |= monsterOpenDoor;
    return monster;
}
