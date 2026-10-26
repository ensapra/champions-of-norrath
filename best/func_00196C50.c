typedef unsigned char U8;
extern char D_00464D98[];
extern void *D_0034B440[];
#define S16(p,o) (*(s16*)((U8*)(p)+(o)))
#define S32(p,o) (*(s32*)((U8*)(p)+(o)))
void func_00196C50(void *a, void *b) {
 s32 i; void *p;
 if (S16(a,0x49e)>0 || !b) return;
 if (func_003044FC(b, D_00464D98)) return;
 i=S16(b,0x20);
 p=D_0034B440[i];
 if ((((S32(p,4)^1)&1)==0) && !(S32(a,0xc)&0x20000)) return;
}
