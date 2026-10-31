extern s32 func_0011BA18(s32);
extern s32 func_001107E8(s32, void *, s32, void *, void *);

extern s32 D_010CD0F8;
extern char D_010CD100[];
extern char D_010CD120[];
extern char D_010CD124[];

void func_0012A838(void) {
    D_010CD0F8 = func_001107E8(func_0011BA18(0x109), (void *)D_010CD100, 3, (void *)D_010CD120, (void *)D_010CD124);
}
