/* identical to ___16VISpellEventList (matched), with its names changed by decompdecomp */
void ___6VIFile(void*a,int b){ Close__6VIFile(a); if(b&1) __builtin_delete(a); }
void ___13VISpellEffect(void*a,int b){ Destroy__13VISpellEffect(a); Close__6VIFile((char*)a+0x24); Close__6VIFile((char*)a+0x18); Close__6VIFile((char*)a+0xC); if(b&1) __builtin_delete(a); }
s32 Destroy__13VISpellEffect(void*a){ if(*(int*)((char*)a+8)){ Close__6VIFile((char*)a+0xC); Close__6VIFile((char*)a+0x18); Close__6VIFile((char*)a+0x24); *(int*)((char*)a+8)=0; return 0;} return -1; }
s32 VICdSearchFile__FPCcPUiT1(const char*a,unsigned*b,unsigned*c){ return 0; }
