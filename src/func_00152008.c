typedef struct { u16 type; u8 pad[0x12]; s32 value; } Ev152;
s32 func_00152008(Ev152 *e) {
 Ev152 *p=e; s32 x;
 if(p->type!=0x11) return 0;
 x=p->value;
 if(x<4) { if(x>=0) return 1; }
 return 0;
}
