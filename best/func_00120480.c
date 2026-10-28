typedef struct { s8 a, b; } Pair;
typedef struct { Pair p; char pad[30]; } Ent;
extern s32 D_010C6E50[],D_010C5190[],D_010C5210[],D_010C5214[],D_010C6E38[];
extern u8 D_010C5194[];
extern Ent D_010C5218[];
extern Pair jtbl_004C006C[];
s32 func_001107E8(s32,void*,s32,void*,void*);
s32 func_0011BA18(s32);void func_0011E420(s32,s32);void func_0011CEF0(s32,s32,s32);
void func_00120480(void){
    s32 x=D_010C6E50[0];
    s32 i, j, k, r;
    Pair *dst;
    if(x>=0){if(x<7){
        r=func_001107E8(func_0011BA18(0x121),D_010C5194,3,D_010C5210,D_010C5214);
        D_010C6E38[0]=0;
        D_010C5190[0]=r;
        for (i = 0, j = 0; i < 3; i++, j += 75) {
            dst = &D_010C5218[j].p;
            for (k = 3; k >= 0; k--) {
                *dst = jtbl_004C006C[0x907C / 2];
                dst = (Pair *)((u8 *)dst + 600);
            }
        }
    }}
    func_0011E420(D_010C5210[0],D_010C5214[0]);
    func_0011CEF0(D_010C5190[0],D_010C6E50[0],0x12);
}
