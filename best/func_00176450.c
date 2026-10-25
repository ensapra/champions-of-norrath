typedef struct { s32 a,b,c,d; } S_func_00176450_arg0;
void func_00176450(S_func_00176450_arg0 *out, u32 flags, s32 a2, s32 a3) {
 u32 field=flags&0x3ff;
 s32 a=(flags>>8)&1, b=(flags>>4)&1, c=flags&7;
 s32 v0=0; u64 v2=0; s32 v1=0;
 s32 t=a?3:2;
 if(c<8) { if(c==0) { v2=t|0x410; v1=a2; v0=3; } }
 u64 value=((u64)(field|8|(b<<4))<<47)|0x8000000000000000ULL;
 value|=(u64)v1;
 out->a=(s32)value|0x8000; out->b=(s32)(value>>32)|(v0<<28); out->c=v2; out->d=a3;
}
