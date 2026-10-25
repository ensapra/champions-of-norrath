extern void *D_00480488; extern u8 D_010F64A0[]; extern u8 D_010F66E0[];
typedef struct { s32 x,y; u8 pad[4]; u16 w,h; } Rect;
s32 func_00198800(void *unused, s32 *p) {
 s32 x=((s32 (*)(s32))(*(u32*)((u8*)D_00480488+0xE8)))(p[0]);
 s32 y=((s32 (*)(s32))(*(u32*)((u8*)D_00480488+0xE4)))(p[1]);
 s32 n=*(s32*)D_010F64A0;
 s32 unused2=((s32 (*)(void))(*(u32*)((u8*)D_00480488+0x14)))();
 for(s32 i=0;i<n;i++) { Rect *r=(Rect*)(D_010F66E0+i*16);
   if(x>=r->x && y>=r->y && x<r->x+r->w && y<r->y+r->h) return i-unused2;
 }
 return 15;
}
