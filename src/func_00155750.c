void func_001083E8(void*); void func_00108408(void*); s32 func_0014B690(void*,void*);
typedef struct { s64 q[9]; } B72;
s32 func_00155750(u8 *arg0, u8 *p) {
 u8 *start = p;
 B72 *s = (B72*)(arg0+0x148);
 func_001083E8(s);
 *(B72*)p = *s;
 p += sizeof(B72);
 func_00108408(s);
 p += func_0014B690(arg0, p);
 return p - start;
}
