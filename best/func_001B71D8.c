extern s32 D_00408600[];
extern s32 D_00408748[];
s32 D_00484544;
s32 D_0048491C;
extern s32 D_007CCBE0[];
extern s32 D_007D022C[];
s32 func_001084E0(void *, s32 *);
s32 func_001ADF38(s32, s32 *, s32);
void func_001B71D8(s32 a0, s32 a1) {
    s32 i, j, k, n, x;
    s32 *p;
    s32 *q;
    s32 *base;
    n = D_007D022C[a0 * 0x74 / 4];
    { s32 i,j,x; s32 *p; for (i=0,x=0; i<64; i++,x+=8) {
        p=(s32*)((u8*)D_00408600+(n*0xBB6+(x+i))*8); p=(s32*)((u8*)p+0x2558);
        for (j=2; j>=0; j--) { *p=0; p-=0x1208/4; }
    }
    }
    { s32 row; for (k=0,row=0;k<3;k++,row+=0x1208) {
        q = (s32 *)((char *)D_00408748 + n*0x5DB0 + row);
        base = (s32 *)((char *)(u32)D_00484544 + a0*0x23988+k*0xBDD8);
        if (a1) {
            q=(s32 *)((char *)D_007CCBE0+row);
            base=(s32 *)((char *)(u32)D_0048491C+a0*0x23988+k*0xBDD8);
        }
        *(s32 *)((char *)q+0x1200)=0;
        for (i=0;i<0x4B;i++) {
            p=base+i*18;
            for (j=8;j>=0;j--,p=(s32 *)((char *)p+0x1518)) {
                if (p && *p && func_001084E0((char *)p-0x48,p)==0)
                    func_001ADF38(n,p,1);
            }
        }
    }
}
}
