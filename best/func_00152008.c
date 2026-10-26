typedef struct { u16 type; u16 pad; u8 unk[0x10]; s32 x14; } Ev; s32 func_00152008(Ev *e){ if(e->type==0x11){ if(e->x14<4){ if(e->x14>=0)return 1; } } return 0; }
