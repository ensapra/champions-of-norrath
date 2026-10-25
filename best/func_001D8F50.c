struct S { char pad0[0x10]; f32 x,y,z; char pad1C[0x30]; s32 count; char pad50[8]; s32 a58,a5C; char pad60[0x18]; void *vptr; };
s32 D_004844A4; extern f32 D_004807EC;
f32 func_0015A070(s32); f32 func_0015A100(s32,f32);
void func_00183DD0(s32,void*); void func_001829D8(s32,s32,s32,s32,s32);
void func_001D8F50(struct S *p) {
 f32 tmp[3];
 f32 f=func_0015A070(D_004844A4<<11)*20.0f;
 f=func_0015A100(D_004844A4<<11,p->x+f)*20.0f;
 tmp[0]=p->x+f; tmp[1]=p->y+f; tmp[2]=p->z+(f32)((0x46-p->count)*2);
 func_00183DD0(p->a58,tmp);
 f=func_0015A070(D_004844A4<<11)*20.0f;
 f=func_0015A100(D_004844A4<<11,p->x-f)*20.0f;
 tmp[0]=p->x-f; tmp[1]=p->y-f;
 func_00183DD0(p->a5C,tmp);
 if(p->count<0x23) { f32 scale=(f32)p->count*D_004807EC; func_001829D8(p->a58,(s32)(scale*200.0f),(s32)(scale*86.0f),(s32)(scale*126.0f),(s32)(scale*250.0f)); func_001829D8(p->a5C,(s32)(scale*200.0f),(s32)(scale*86.0f),(s32)(scale*126.0f),(s32)(scale*250.0f)); }
 s32 count_next=p->count-1; p->count=count_next;
 if(count_next<=0 && p) { char *v=(char*)p->vptr+8; s16 off=*(s16*)v; void (*fn)(void*,s32)=*(void (**)(void*,s32))(v+4); fn((char*)p+off,3); }
}
