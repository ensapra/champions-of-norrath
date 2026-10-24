/* identical to func_002A8F58 (matched), with its names changed by decompdecomp */
extern s32 D_0044E670[12],D_00452A20[12]; u32 D_00483E5C;
void func_00194390(void*,s32,s32);
typedef struct Obj {s8 a; s32 b,c,d; u32 seed; u32 vt; s32 list;} Obj;
s32 func_002B56A8(Obj *o,s8 a,s32 b,s32 c,s32 d){
s32 *p;
o->vt=(u32)D_0044E670;
o->a=a;o->b=0;o->c=c;o->d=b;
D_00483E5C=D_00483E5C*0x19660D+0x3C6EF35F;
o->seed=D_00483E5C>>16;
o->vt=(u32)D_00452A20;
p=&o->list;
*p=0;
if(d)func_00194390(p,d,d);
}

void func_002ADDB8(s32 unused, void *p) {
 volatile s16 *q=(volatile s16 *)p;
 s16 a=0x44, b=0xE, c=0x18, d=0x40;
 q[0x8c/2]=a; q[0x9a/2]=d; q[0x8e/2]=b; q[0x90/2]=c;
 q[0x94/2]=a; q[0x96/2]=b; q[0x98/2]=c; q[0x92/2]=d;
}

const f32 D_00482C44;
extern u8 D_008D7720[];
void func_00180D78(u8 *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_002AE3C0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_008D7720, 0x66, 0x79, 0x12F, 0xC8, 0x14, 0x14, 0x7E,
                          12.0f, 0.0f, D_00482C44, 0x2E, 0, 2, 4, 0);
        }
    }
}

typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam2;
extern f32 D_00482C48, D_00482C4C, D_00482C50;
void func_002AE470(ObjParam2 *o) {
    s16 one = 1;
    f32 a = D_00482C48;
    f32 b = D_00482C4C;
    f32 c = D_00482C50;
    o->f18 = 5;
    o->f34 = c;
    o->f24 = a;
    o->f1A = 10;
    o->f28 = b;
    o->f16 = one;
    o->f20 = 0x18;
    o->f0E = one;
    o->f10 = one;
}
