typedef struct { s32 type; s64 p; } Item; s32 func_0014CBF4(s32,Item*,s32);
void func_0016F828(u8 *o) { Item it[8]; s32 w; if (*(s32*)(o+0x988)!=0)return; w=*(s32*)(o+0x984);
if (*(s32*)(o+0x918)!=0) { it[0]=(Item){0x6a,(s32)(o+0x9c0)}; it[1]=(Item){0x39,(s32)(o+0x9e0)}; it[4]=(Item){0xc8,(s32)(o+0xa00)}; }
else { it[0]=(Item){0x6a,(s32)(o+0x9d0)}; it[1]=(Item){0x39,(s32)(o+0x9f0)}; it[4]=(Item){0xc8,(s32)(o+0x960)}; } func_0014CBF4(w,it,2); }
