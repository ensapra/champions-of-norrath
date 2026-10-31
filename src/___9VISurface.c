/* identical to ___16VISpellEventList (matched), with its names changed by decompdecomp */
void ___9VISurface(void*a,int b){ Deallocate__9VISurface(a); if(b&1) __builtin_delete(a); }
void ___13VISpellEffect(void*a,int b){ Destroy__13VISpellEffect(a); Deallocate__9VISurface((char*)a+0x24); Deallocate__9VISurface((char*)a+0x18); Deallocate__9VISurface((char*)a+0xC); if(b&1) __builtin_delete(a); }
s32 Destroy__13VISpellEffect(void*a){ if(*(int*)((char*)a+8)){ Deallocate__9VISurface((char*)a+0xC); Deallocate__9VISurface((char*)a+0x18); Deallocate__9VISurface((char*)a+0x24); *(int*)((char*)a+8)=0; return 0;} return -1; }
s32 VICdSearchFile__FPCcPUiT1(const char*a,unsigned*b,unsigned*c){ return 0; }
