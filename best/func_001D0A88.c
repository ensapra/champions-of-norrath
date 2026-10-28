typedef struct { char pad[0xAC]; f32 v; char pad2[0x5570-0xB0]; s32 flag; char rest[0x5DB0-0x5574]; } P;
void func_001682D0(s32, f32, f32);
extern P D_00408600[];
f32 D_00480688;
s32 D_00484538;
f32 D_00484F64;
void func_001D0A88(s32 arg0, f32 value)
{
  s32 i;
  if (D_00484F64 < value)
    D_00484F64 = value;
  if (arg0 == 0) {
    f32 scale = D_00480688;
    for (i = 0; i < D_00484538; i++) {
      if (D_00408600[i].flag != 0 && D_00408600[i].v > 0.0f)
        func_001682D0(i, value * 3.0f * scale, 1.0f);
    }
  }
}
