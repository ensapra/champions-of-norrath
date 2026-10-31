/* identical to func_001D4060 (matched), with its names changed by decompdecomp */
extern s8 D_007D35E8[];
extern s8 D_007D55E8[];
extern s32 func_00304CFC(s8 *);
extern s32 func_00304640(void *, s32);
extern s32 func_00135BB8(s32, s32, void *);
extern s32 func_00135DE8(s32, s32 *, s32, s32, s32);
s32 D_004844A8; s32 D_0048508C; s32 D_00486B94;
s8 *func_001D3F60(s32 n,s32 *out) { s8 *p=D_007D35E8; s32 i=0; if(*p) do { if(i==n) { s32 len=func_00304CFC(p); *out=p[len+1]; return p; } i++; p+=func_00304CFC(p)+2; } while(*p); return 0; }
void VIMemCardSetProductId__FPCc(s32 x) { volatile void *dummy; func_00304640(D_007D55E8,x); dummy=func_00304640; (void)dummy; }
void func_001D3F10(void) { s8 *p=D_007D35E8; if(*p) do { s32 len=func_00304CFC(p); p[len+1]=0; p+=len+2; } while(*p); }
s32 func_001D3E88(s32 arg0) {
    s32 slot;
    s32 id;
    s32 result=-1;
    if (arg0 == 0) return -1;
    id=D_00486B94;
    if(id==0) return -1;
    result=func_00135BB8(id,arg0,&slot);
    if(result==0) {
       func_00135DE8(id,&slot,*(s32 *)0,0,0);
       return slot;
    }
    if(D_0048508C < D_004844A8) D_0048508C=D_004844A8+0x14;
    return -1;
}
