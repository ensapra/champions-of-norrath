typedef struct{s32 size;s32 count;u8 *rd;u8 *wr;u8 data[1];}Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if(r->wr==r->data+r->size) r->wr=r->data; }

extern s32 D_01107D58[8];
s32 func_001AFAB8(s32 a,s32 b){s32 old=D_01107D58[3];D_01107D58[4]=b;D_01107D58[3]=a;return old;}

void func_001AFAD0(s32 index,s32 a,s32 b){
 s32 n; s32 *base;
 if(index<0){n=(index&0x7fffffff)*12;base=(s32*)((char*)D_01107D58+12); *((s32*)((char*)base+n+4))=b; *((s32*)((char*)base+n))=a; n+=*(s32*)((char*)D_01107D58+12);}
 else {n=index*12;base=(s32*)((char*)D_01107D58+20);*((s32*)((char*)base+n+4))=b;*((s32*)((char*)base+n))=a;n+=*(s32*)((char*)D_01107D58+20);}
 *(s32*)((char*)n+8)=(s32)__builtin_frame_address(0);
}

extern s32 D_01107D64;
extern s32 D_01107D6C;
void func_001AFB48(s32 i){
 if(i<0){ *(s32*)(D_01107D64+(i&0x7fffffff)*12)=0; }
 else { *(s32*)(D_01107D6C+i*12)=0; }
}
