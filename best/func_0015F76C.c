typedef struct { u8 pad[0x92c]; } Obj;
extern void func_0014CE60(s32,s32,s32);
void func_0015F76C(Obj *p) {
 s32 off=*(s32*)(p->pad+0x5d4), x=*(s32*)(p->pad+0x5a0), y=*(s32*)(p->pad+0x5a4), h=*(s32*)(p->pad+0x914);
 func_0014CE60(*(s32*)(p->pad+0x894),x+off-h,y+off-h);
 s32 a=*(s32*)(p->pad+0x92c)*3;
 s32 adj=(a<0?a+3:a)>>2;
 func_0014CE60(*(s32*)(p->pad+0x898),x+adj+off-h,y+adj+off-h);
 func_0014CE60(*(s32*)(p->pad+0x89c),x+off-h,y+off-h);
 s32 t=*(s32*)(p->pad+0x888);
 func_0014CE60(*(s32*)(p->pad+0x890),x+off,y+off+t-*(s32*)(p->pad+0x910));
 func_0014CE60(*(s32*)(p->pad+0x8a0),x+off+t+0x10,y+off);
 func_0014CE60(*(s32*)(p->pad+0x8a4),x+off+0x10,y+off+0x10);
 func_0014CE60(*(s32*)(p->pad+0x8a8),x+off+*(s32*)(p->pad+0x5ac)-t-0x10,y+off+0x10);
}
