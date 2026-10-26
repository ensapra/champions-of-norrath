typedef struct { char pad0[8]; s32 unk8; char padC[0x28]; s32 unk34; char pad38[0x14]; s32 unk4C; s32 unk50; char pad54[0xAC]; f32 scale110; char pad114[0x2C]; f32 scale140; char pad144[0x420]; void *draw564; } DrawState;
typedef struct { char pad0[8]; s32 (*fn)(void *, s32); } Callback;
s32 D_00480430; s32 D_00480440;
s32 func_00180F0C(void *a, Callback *cb, s32 c) {
 DrawState *p=(DrawState *)D_00480430;
 s32 mask=p->unk4C & D_00480440;
 f32 top=0.0f, bottom=0.0f;
 if (p->unk34 != 0) goto update;
 if (p->unk8 != 0) mask=0;
 if (mask != 0) goto update;
 if (p->unk50 == 0) return cb->fn(a,c);
update:
 func_0018B0B0(a,&top);
 bottom=top;
 if (p->unk34 != 0) return 0;
 {
 s32 tmp[4];
 if (func_0018AEA8(a,c,tmp)>=0) goto ok;
 if (func_0018AEA8(a,0xD818,tmp)<0) return 0;
ok:
 return (s32)(top+bottom)+1;
 }
}
