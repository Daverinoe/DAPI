#pragma once
#include<optional>
#include<string>

namespace DAPI
{
  enum struct MonsterType {
    NZOMBIE = 0x0,
    BZOMBIE = 0x1,
    GZOMBIE = 0x2,
    YZOMBIE = 0x3,
    RFALLSP = 0x4,
    DFALLSP = 0x5,
    YFALLSP = 0x6,
    BFALLSP = 0x7,
    WSKELAX = 0x8,
    TSKELAX = 0x9,
    RSKELAX = 0xA,
    XSKELAX = 0xB,
    RFALLSD = 0xC,
    DFALLSD = 0xD,
    YFALLSD = 0xE,
    BFALLSD = 0xF,
    NSCAV = 0x10,
    BSCAV = 0x11,
    WSCAV = 0x12,
    YSCAV = 0x13,
    WSKELBW = 0x14,
    TSKELBW = 0x15,
    RSKELBW = 0x16,
    XSKELBW = 0x17,
    WSKELSD = 0x18,
    TSKELSD = 0x19,
    RSKELSD = 0x1A,
    XSKELSD = 0x1B,
    INVILORD = 0x1C,
    SNEAK = 0x1D,
    STALKER = 0x1E,
    UNSEEN = 0x1F,
    ILLWEAV = 0x20,
    LRDSAYTR = 0x21,
    NGOATMC = 0x22,
    BGOATMC = 0x23,
    RGOATMC = 0x24,
    GGOATMC = 0x25,
    FIEND = 0x26,
    BLINK = 0x27,
    GLOOM = 0x28,
    FAMILIAR = 0x29,
    NGOATBW = 0x2A,
    BGOATBW = 0x2B,
    RGOATBW = 0x2C,
    GGOATBW = 0x2D,
    NACID = 0x2E,
    RACID = 0x2F,
    BACID = 0x30,
    XACID = 0x31,
    SKING = 0x32,
    CLEAVER = 0x33,
    FAT = 0x34,
    MUDMAN = 0x35,
    TOAD = 0x36,
    FLAYED = 0x37,
    WYRM = 0x38,
    CAVSLUG = 0x39,
    DVLWYRM = 0x3A,
    DEVOUR = 0x3B,
    NMAGMA = 0x3C,
    YMAGMA = 0x3D,
    BMAGMA = 0x3E,
    WMAGMA = 0x3F,
    HORNED = 0x40,
    MUDRUN = 0x41,
    FROSTC = 0x42,
    OBLORD = 0x43,
    BONEDMN = 0x44,
    REDDTH = 0x45,
    LTCHDMN = 0x46,
    UDEDBLRG = 0x47,
    INCIN = 0x48,
    FLAMLRD = 0x49,
    DOOMFIRE = 0x4A,
    HELLBURN = 0x4B,
    STORM = 0x4C,
    RSTORM = 0x4D,
    STORML = 0x4E,
    MAEL = 0x4F,
    BIGFALL = 0x50,
    WINGED = 0x51,
    GARGOYLE = 0x52,
    BLOODCLW = 0x53,
    DEATHW = 0x54,
    MEGA = 0x55,
    GUARD = 0x56,
    VTEXLRD = 0x57,
    BALROG = 0x58,
    NSNAKE = 0x59,
    RSNAKE = 0x5A,
    BSNAKE = 0x5B,
    GSNAKE = 0x5C,
    NBLACK = 0x5D,
    RTBLACK = 0x5E,
    BTBLACK = 0x5F,
    RBLACK = 0x60,
    UNRAV = 0x61,
    HOLOWONE = 0x62,
    PAINMSTR = 0x63,
    REALWEAV = 0x64,
    SUCCUBUS = 0x65,
    SNOWWICH = 0x66,
    HLSPWN = 0x67,
    SOLBRNR = 0x68,
    COUNSLR = 0x69,
    MAGISTR = 0x6A,
    CABALIST = 0x6B,
    ADVOCATE = 0x6C,
    GOLEM = 0x6D,
    DIABLO = 0x6E,
    NUM_MTYPES,
  };

  struct MonsterData
  {
    int index;
    int x;
    int y;
    int futx;
    int futy;
    int uniqueResistences;
    int immunities;
    int kills;
    int minHP;
    int maxHP;
    int resists[3];
    MonsterType type;
    std::string name;
    bool unique;
  };
}