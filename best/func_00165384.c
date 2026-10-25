typedef struct { u8 pad[0x4DC]; u16 x; u8 p4de[2]; u16 y; u8 p4e2[0xA]; s32 index; u8 p4f0[0xB0]; s32 xBase; s32 yBase; u8 p5a8[4]; s32 width; s32 height; u8 p5b4[0x20]; s32 yOffset; } Obj;
typedef struct { u8 pad[0x10]; s16 x,y; u8 tail[0xC]; } Rec;
extern f32 func_0014C97C(s32); extern f32 func_0014CA18(s32);
void func_00165384(Obj *p) {
 s32 i=0,n=29,hx=p->width>>1,hy=p->height>>1;
 s32 bx=p->xBase+p->yOffset+hx,by=p->yBase+p->yOffset+hy;
 Rec *r=(Rec*)((u8*)p+0x910+p->index*0x480+0x80);
 r[0].x=p->x+bx;r[0].y=p->y+by;
 r++;
 do { r->x=p->x+bx+(s32)((f32)hx*func_0014CA18(i));
      r->y=p->y+by+(s32)((f32)hy*func_0014C97C(i));
      i+=0x888;--n;r++; } while(n>=0);
 r->x=p->x+bx+(s32)((f32)hx*func_0014CA18(0));
 r->y=p->y+by+(s32)((f32)hy*func_0014C97C(0));
}
