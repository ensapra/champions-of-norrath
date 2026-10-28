typedef struct { u8 pad[0x10]; s16 x,y; u8 tail[0xC]; } Rec;
typedef struct { u8 pad[0x80]; Rec pt[32]; u8 pad2[0x480-0x80-0x400]; } Blk;
typedef struct { u8 pad[0x4DC]; u16 x; u8 p4de[2]; u16 y; u8 p4e2[0xA]; s32 index; u8 p4f0[0xB0]; s32 xBase; s32 yBase; u8 p5a8[4]; s32 width; s32 height; u8 p5b4[0x20]; s32 yOffset; u8 p5d8[0x338]; Blk blk[1]; } Obj;
extern f32 func_0014C97C(s32); extern f32 func_0014CA18(s32);
void func_00165384(Obj *p) {
 Rec *r;
 s32 i=0,n=29,hx,hy,bx,by;
 Blk *b = &p->blk[p->index];
 hx=p->width>>1; hy=p->height>>1;
 bx=p->xBase+p->yOffset+hx; by=p->yBase+p->yOffset+hy;
 r=b->pt;
 r->x=p->x+bx; r->y=p->y+by;
 r++;
 do { r->x=p->x+(bx+(s32)((f32)hx*func_0014CA18(i)));
      r->y=p->y+(by+(s32)((f32)hy*func_0014C97C(i)));
      i+=0x888;r++; } while(--n>=0);
 r->x=p->x+(bx+(s32)((f32)hx*func_0014CA18(0)));
 r->y=p->y+(by+(s32)((f32)hy*func_0014C97C(0)));
}
