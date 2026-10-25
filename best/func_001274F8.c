extern u8 D_010C9160[], D_010C92C8[], D_010C92CC[], D_010C92D0[], D_010C9CD0[];
extern u8 func_001C6788[], func_001B9FD8[], jtbl_004C006C[];
extern void func_001A42B8(void *, void *, s32, void *);
extern s32 func_001A4174(void *, void *);
extern s32 func_0013B6F0(void *, s32);
extern void *func_0013B698(void *);
extern void func_0013B5F8(void *, void *);
extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118160(void *);
extern void func_0013DE70(s32);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32,s32,s32,s32,void *,s32);
extern void func_00127440(void);
extern void func_00127710(void);
extern void func_0013E198(void),func_0013E1C0(void),func_0013E2B0(void);
void func_001274F8(void) {
    u8 scratch[288]; u8 *sp100=scratch+256; void (*sp108)(void); s32 sp120=0, n, offset; u8 *p;
    s32 idx = *(s32 *)(D_010C92CC) + *(s32 *)(D_010C92C8);
    n = *(s32 *)(D_010C9160 + idx*4);
    func_001A42B8((void *)sp100, (void *)(func_001C6788+0xA8 + n*0x20C + 0xC), idx*4, func_001C6788+0xA8);
    n = *(s32 *)D_010C9CD0;
    if (n < *(s32 *)(func_001C6788+0xAC)) {
      p=D_010C92D0+n*0x100; offset=n*0x20C;
      do {
        if (func_001A4174(p,scratch)!=0) { n++; offset+=0x20C; }
        else {
          if (func_0013B6F0(jtbl_004C006C+0xA13C,-1)==1 &&
              func_001A4174(*(void **)(func_001C6788+0xA0)+offset+0x10C,func_0013B698(jtbl_004C006C+0xA14C))==0)
            func_0013B5F8(jtbl_004C006C+0xA15C,jtbl_004C006C+0xA16C);
          *(s32 *)D_010C9CD0=n; sp120=1; break;
        }
        p+=0x100;
      } while(n < *(s32 *)(func_001C6788+0xAC));
    }
    if(sp120) {
      func_00118140(sp100,1,func_0013E198,func_0013E1C0,func_0013E2B0);
      sp108=func_00127710;
      func_0013DE70(*(s32 *)D_010C9CD0);
      func_00118160(sp100);
      (*(s32 *)D_010C9CD0)++;
    } else func_00114948(0,0x1F4,0xFA,func_0011BA18(0x32),func_00127440,*(s32 *)(func_001B9FD8+0x16EC));
}
