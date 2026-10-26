extern int func_001129F0(void *, void *); extern unsigned int func_00153FA8(void *);
extern void func_00143830(void *); extern void func_002853A8(void *, int); extern void func_00160128(void *, unsigned int, int, float); extern void func_00160010(void *, unsigned int, int, float, float); extern void func_001639E8(void *);
extern void func_0010C338(void *, void *, short, int, int, float, float, float, float, float, float); extern int func_001441B8(int); extern void func_00168A38(); extern void func_00149068(); extern float D_00482478,D_0048247C,D_00482480;
extern float D_00482440,D_00482448,D_0048244C,D_00482450,D_00482454,D_00482458,D_0048245C,D_00482460,D_00482464,D_00482468,D_0048246C,D_00482470,D_00482474;
void func_002861F8(void *obj, unsigned int cmd) {
 char buf[0xAF]; unsigned int n; char *o=(char*)obj; void *p=*(void**)(o+0x24); char *q=o+0x120;
 if(func_001129F0(obj,buf)) return; *(unsigned long long*)(o+0xA0)&=~0x200ULL;
 switch(cmd){
case 15: *(unsigned int*)(o+0xC)&=~9U; if(*(signed char*)(o+0x3C0)==0){n=func_00153FA8(obj);*(unsigned int*)(o+0x3C4)=(n&2)+0x1D;n=func_00153FA8(obj);*(unsigned int*)(o+0x450)=(n%3)*2+0x21;} *(unsigned long long*)(o+0xA0)|=0x100000000ULL;func_002853A8(obj,0);func_00143830(obj);*(short*)(o+0x8C)=0;*(short*)(o+0x92)=0x32;*(short*)(o+0x96)=0x80;*(short*)(o+0x98)=0xFF;*(short*)(o+0x9A)=0x96;*(short*)(o+0x8E)=0x80;*(short*)(o+0x90)=0xFF;*(short*)(o+0x94)=0;break;
case 0: func_00160128(q,*(unsigned int*)((char*)p+0xD4),3,D_00482440); *(unsigned int*)(o+0x100)=*(unsigned int*)(o+0x328)+0xB4; break;
case 7: func_00160128(q,*(unsigned int*)((char*)p+0x8C),0x803,D_00482448); func_001639E8(q); *(unsigned int*)(o+0x100)=*(unsigned int*)(o+0x328)+0x78; break;
case 3: func_00160128(q,*(unsigned int*)((char*)p+(*(signed char*)(o+0x3C0)==1?0xE4:0xDC)),0x803,*(signed char*)(o+0x3C0)==1?D_0048244C:D_00482450); func_001639E8(q); break;
case 5: func_00160128(q,*(unsigned int*)((char*)p+0xB4),3,D_00482454); break;
case 14: func_00160128(q,*(unsigned int*)((char*)p+0xB4),3,D_00482458); *(unsigned int*)(o+0x100)=*(unsigned int*)(o+0x328)+0x78; *(unsigned long long*)(o+0xA0)|=0x200; break;
case 6: {float f=D_0048245C; func_00160128(q,*(unsigned int*)((char*)p+0xB4),3,f); func_00160010(q,*(unsigned int*)((char*)p+0x94),0x808,f,f); *(unsigned int*)(o+0x100)=func_00153FA8(obj)%60; break;}
case 13: {float f=D_00482460; func_00160128(q,*(unsigned int*)((char*)p+0x84),3,f); func_00160010(q,*(unsigned int*)((char*)p+0x6C),0x808,f,f); *(unsigned int*)(o+0x100)=func_00153FA8(obj)%60+0x78; break;}
case 9: func_00160128(q,*(unsigned int*)((char*)p+0xD4),3,D_00482474); break;
case 8: if(*(short*)(o+0x23C)!=9) {if(*(unsigned int*)(o+0x2E8)&0x380000) {n=(func_00153FA8(obj)&3)*16+0x20;func_00160128(q,*(unsigned int*)((char*)p+n+4),0x14,D_00482464);} else if(*(unsigned long long*)(o+0xA0)&0x200) func_00160010(q,*(unsigned int*)((char*)p+0xBC),0x10,D_00482468,D_00482468); else if(*(signed char*)(o+0x3C0)==1) func_00160010(q,*(unsigned int*)((char*)p+0x7C),0x10,D_0048246C,D_0048246C); else func_00160010(q,*(unsigned int*)((char*)p+0xCC),0x10,D_00482470,D_00482470);} break;
case 10: { n=(func_00153FA8(obj)&3)*16; func_00160128(q,*(unsigned int*)((char*)p+n+0x24),6,D_00482478); if (!(*(unsigned long long*)(o+0xA0)&0x100000000ULL)) { unsigned long long x=*(unsigned long long*)(o+0x10); func_0010C338(obj,&x,*(unsigned short*)(o+0x38),0,*(unsigned int*)(o+0x18),10.0f,2.0f,D_0048247C,D_00482480,2.0f,0.25f); } if (!(*(unsigned int*)(o+0xC)&2)) { if(*(unsigned int*)(o+0x3C4)){ func_00168A38(*(unsigned int*)((char*)p+0xC),buf,*(short*)(o+0x38),q,0,buf+0x10,buf+0x20,o+0x10,1.0f); n=func_001441B8(0x248); if(n) func_00149068(n,buf,*(unsigned int*)p,*(unsigned int*)((char*)p+8),*(unsigned int*)((char*)p+0x10),1,0x4101,0,*(float*)(o+0xE0)); *(unsigned int*)(o+0x3C4)=0; } } break; } case 1: break;
}
}
