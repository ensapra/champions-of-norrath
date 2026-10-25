typedef struct { u8 pad[0x4DC]; u16 x; u8 pad2[2]; u16 y; } S;
extern f32 func_0014C97C(s32,s32); extern f32 func_0014CA18(s32);
void func_0016B0D8(S *p,s32 mode,s32 x,s32 y,s32 angleZ,s32 angleY,void *out) {
 s32 base=-0x4000, i, t; u16 xx, yy;
 if (mode != 1 && ((mode < 2) || ((base=0x4000, mode != 2) && (base=0, mode != 3)))) base=0x8000;
 xx=p->x; i=0; yy=p->y;
 *(u16*)((char*)out+0x10)=xx+x; *(u16*)((char*)out+0x12)=yy+y;
 out=(char*)out+0x20; *(u64*)((char*)out+0x10)=*(u64*)((char*)out-0x10);
 out=(char*)out+0x20; *(u64*)((char*)out+0x10)=*(u64*)((char*)out-0x10);
 out=(char*)out+0x20; *(u64*)((char*)out+0x10)=*(u64*)((char*)out-0x10); out=(char*)out+0x20;
 do { t=(i<<14)/7; i++; t+=base;
 *(u16*)((char*)out+0x10)=p->x+x+(s32)(func_0014CA18(t)*(f32)*(volatile s32*)&angleZ);
 *(u16*)((char*)out+0x12)=p->y+y+(s32)(func_0014C97C(t,7)*(f32)*(volatile s32*)&angleY);
 out=(char*)out+0x20; } while(i<8);
}
