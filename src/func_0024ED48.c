typedef struct {s8 used; u8 pad[79];} E; E *func_0024F6C8(void);
s32 func_0024ED48(s32 idx) { E *base=func_0024F6C8(), *p; s32 i, result; if(base!=0) goto have; i=0; goto tail; have: i=0; if(idx<0) goto compute; p=base; do {if(!p->used){i=0;goto tail;} p++; i++;}while(idx>=i); compute:i=(s32)(base+idx); tail: result=0; if(i) result=*(s32*)((u8*)i+0x90)-*(s32*)((u8*)i+0x40); return result;}
