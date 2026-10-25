typedef struct { u8 pad0[0x30]; s32 size; } NetBuf;
extern char *func_00304640(char *, char *);
s32 func_002E5040(NetBuf *arg0, char *arg1, s32 arg2, s32 arg3) { arg3 *= 4; if (arg1 == 0) return 0; func_00304640(arg1, (char *)(arg2 + arg3)); return 0; }
