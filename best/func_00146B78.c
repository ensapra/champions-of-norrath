extern s32 D_001C6890;
extern char func_001C6788[];
extern char jtbl_004C006C[];
extern void func_00118140(void *,s32,void *,void *,void *);
extern s32 func_00118160(void *);
extern void func_0013E948(void *);
extern void func_0013E918(s32);
extern void func_00147018(void);
extern s32 func_001A4174(void *,void *);
extern void func_0013E968(void);
extern void func_0013E9A0(void);
extern void func_0013EC58(void);
extern void func_0013EC90(void);
extern void func_00146CB8(void);
void func_00146B78(s32 arg0) {
    char ctx[0x50];
    s32 result;
    if (arg0 < 0) { func_00147018(); return; }
    if (D_001C6890 == 0) {
        func_00118140(ctx,1,func_0013E968,func_0013E9A0,func_0013EC58);
        func_0013E948(jtbl_004C006C+0xB0FC);
        result=func_00118160(ctx);
        *(s32 *)(ctx+8)=result;
        return;
    } else {
        s32 i=0;
        s32 count;
        char *ctx2=ctx+0x20;
        *(void **)(ctx2+8)=func_00146CB8;
        func_00118140(ctx2,1,func_0013EC90,func_0013E9A0,func_0013EC58);
        count=*(s32 *)(func_001C6788+0xB0);
        while(i<count){s32 x=*(s32 *)(func_001C6788+0xA4+i*0x20C);if(func_001A4174((void *)(x+0x10C),jtbl_004C006C+0xB0FC)==0)func_0013E918(i);i++;}
        func_0013E948(jtbl_004C006C+0xB0FC);
        func_00118160(ctx2);
    }
}
