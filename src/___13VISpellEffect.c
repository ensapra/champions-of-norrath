void ___16VISpellEventList(void*a,int b){ Destroy__16VISpellEventList(a); if(b&1) __builtin_delete(a); }
void ___13VISpellEffect(void*a,int b){ Destroy__13VISpellEffect(a); Destroy__16VISpellEventList((char*)a+0x24); Destroy__16VISpellEventList((char*)a+0x18); Destroy__16VISpellEventList((char*)a+0xC); if(b&1) __builtin_delete(a); }
s32 Destroy__13VISpellEffect(void*a){ if(*(int*)((char*)a+8)){ Destroy__16VISpellEventList((char*)a+0xC); Destroy__16VISpellEventList((char*)a+0x18); Destroy__16VISpellEventList((char*)a+0x24); *(int*)((char*)a+8)=0; return 0;} return -1; }
s32 VICdSearchFile__FPCcPUiT1(const char*a,unsigned*b,unsigned*c){ return 0; }
