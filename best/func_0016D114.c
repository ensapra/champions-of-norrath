typedef struct {s32 id; s64 value;} ParamD114;
typedef struct { u8 p0[0x58]; u8 b58[0x4D0-0x58]; s32 f4d0; u8 p4d4[0xCC]; s32 v5a0, v5a4, v5a8, v5ac, v5b0; u8 p5b4[0x910-0x5b4]; s32 r910, r914; u8 p918[8]; u8 b920[0x10]; u8 b930[0x30]; u8 b960[0x10]; s32 v970; s32 p974; s32 v978; } O;
extern s32 func_0015FC94(s32,void*,void*,s32);
void func_0016D114(O *p){
ParamD114 a[64]; ParamD114 *b=&a[1];
p->f4d0=0;
a[0].id=9; a[0].value=p->v5a0;
b[0].id=11; b[0].value=p->v5a4;
a[2].id=14; a[2].value=p->v5ac;
a[3].value=p->v5b0;
a[4].id=109; a[4].value=0;
a[5].value=10;
a[6].id=108; a[6].value=(u32)p->b920;
a[7].id=57; a[7].value=(u32)p->b930;
a[5].id=71;
a[3].id=16;
p->r914=func_0015FC94(0,p->b58,a,8);
a[0].id=9; a[0].value=p->v5a0;
b[0].id=11; b[0].value=p->v5a4;
a[2].id=14; a[2].value=p->v978;
a[3].value=p->v5b0;
a[4].id=109; a[4].value=p->v970;
a[5].id=108; a[5].value=(u32)p->b960;
a[6].value=0;
a[6].id=71;
a[3].id=16;
p->r910=func_0015FC94(0,p->b58,a,7);
}
