extern "C" { extern f32 D_0042DE48[]; s32 func_0024C1C0(void); }
void func_0024F5B8(s32 i, f32 x) { f32 *p=&D_0042DE48[i]; f32 v=0.0f >? x; v=1.0f <? v; if (v != *p) { *p=v; func_0024C1C0(); } }
