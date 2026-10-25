typedef struct { f32 f0; s16 f4; s8 pad[2]; s8 b8,b9,bA,bB,bC,bD,bE; } P;
extern f32 D_0034BA08[], D_0047FF58, D_0047FF5C, D_006CB078[];
extern u32 D_00483E58;
extern f32 func_002F16D0(f32,f32);
extern s32 func_0024C6A8(s32,s32,f32,f32,f32);
#define RND(n) (D_00483E58 = D_00483E58 * 0x19660D + 0x3C6EF35F, ((s32)(D_00483E58 >> 16)) % (n))
s64 func_00160490(s32 a0,s32 a1,P *p,s32 idx) { s32 x,y,c; f32 f20,f21,f14; if (!a0) return; x=p->bC*2; if(p->bD>0)x+=RND(p->bD*4+1)-p->bD*2; x+=64; y=p->bA+64; if(x<0)x=0;if(y<0)y=0;if(x>=128)x=127;if(y>=128)y=127; f21=D_006CB078[x];f20=D_006CB078[y];c=p->bB;if(c>0)f20*=func_002F16D0(D_0047FF58,(f32)(RND(c*16)-c*8)*0.125f);if(p->bE)f14=(f32)RND(p->bE+1)*D_0047FF5C;else f14=0.0f;return func_0024C6A8(a0,a1,f20,f21*D_0034BA08[idx],f14);}
