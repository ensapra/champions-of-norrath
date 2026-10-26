typedef struct { u32 code; s64 value; } Desc; typedef struct { u8 pad[0xA20]; } State;
extern void func_0016FAF0(void *); extern s32 func_00154620(s32,s32,Desc *,s32); extern s32 func_00164B70(s32,s32,Desc *,s32);
void func_0016EF7C(State *p) {
 Desc d[22]; volatile u8 reserve[0x2A0]; u8 *b=p->pad; s32 q;
 *(s32*)(b+0x4D0)=0; *(s32*)(b+0x988)=0; func_0016FAF0(b+0x990);
 if(*(s32*)(b+0x910)){d[0].code=0xC6;d[0].value=*(s32*)(b+0x910);}
 if(*(s32*)(b+0x914)){d[1].code=0xD6;d[1].value=*(s32*)(b+0x914);}
 d[2].code=9;d[2].value=0;d[3].code=0xB;d[3].value=0;d[4].code=0xE;d[4].value=0;d[5].code=0x10;d[5].value=0;d[6].code=0x15;d[6].value=0;d[7].code=0x29;d[7].value=0;
 d[8].code=0x3C;d[8].value=*(s32*)(b+0x930);d[9].code=0x3E;d[9].value=*(s32*)(b+0x934);d[10].code=0xCA;d[10].value=*(s32*)(b+0x940);d[11].code=0xCC;d[11].value=*(s32*)(b+0x944);
 d[12].code=0x40;d[12].value=*(s32*)(b+0x938);d[13].code=0x42;d[13].value=*(s32*)(b+0x93C);d[14].code=0xCD;d[14].value=*(s32*)(b+0x948);d[15].code=0xCE;d[15].value=*(s32*)(b+0x94C);
 d[16].code=0xD0;d[16].value=*(s32*)(b+0x950);d[17].code=0xD2;d[17].value=*(s32*)(b+0x954);d[18].code=0xD4;d[18].value=1;d[19].code=0xC7;d[19].value=*(s32*)(b+0x95C);d[20].code=0x13;d[20].value=0;
 if(*(s32*)(b+0x918)){d[21].code=0xC8;d[21].value=(s64)(b+0xA00);}else{d[21].code=0xC8;d[21].value=(s64)(b+0x960);}
 *(s32*)(b+0x980)=func_00154620(0,0,d,0x16);
 d[0].code=9;d[0].value=0;d[1].code=0xB;d[1].value=0;d[2].code=0xE;d[2].value=0;d[3].code=0x10;d[3].value=0;d[4].code=0x15;d[4].value=0;
 if(*(s32*)(b+0x918)==0){d[5].code=0x48;d[5].value=*(s32*)(b+0xA18);d[6].code=0x6A;d[6].value=(s64)(b+0x9D0);d[7].code=0x39;d[7].value=(s64)(b+0x9F0);}
 else {d[5].code=0x48;d[5].value=*(s32*)(b+0xA14);d[6].code=0x6A;d[6].value=(s64)(b+0x9C0);d[7].code=0x39;d[7].value=(s64)(b+0x9E0);}
 d[8].code=0x29;d[8].value=0;*(s32*)(b+0x984)=func_00164B70(0,0,d,9);reserve[0]=0;
}
