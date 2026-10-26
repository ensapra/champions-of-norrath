s32 func_00114948(s32,s32,s32,s32,void*,s32);
s32 func_0011BA18(s32);
void func_0012F7F0(void);
extern char func_0012F910[];
extern char func_001B9FD8[];
extern char func_001C4B18[];
extern char func_01000000[];
void func_0012F930(s32 arg0) {
 if(arg0>=0){func_0012F7F0();return;}
 switch(*(s32*)(func_01000000+0xCD474)) {
 case 0: switch(*(s32*)(func_001C4B18+0x388)) {case 1:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x4c),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;case 2:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x4d),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;case 3:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x4e),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;} break;
 case 1: switch(*(s32*)(func_001C4B18+0x388)) {case 1:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x4f),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;case 2:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x50),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;case 3:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x51),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;} break;
 case 2: if(*(s32*)(func_001C4B18+0x388)==2){func_00114948(2,0x1f4,0xfa,func_0011BA18(0x53),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;} else switch(*(s32*)(func_001C4B18+0x388)){case 1:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x52),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;case 3:func_00114948(2,0x1f4,0xfa,func_0011BA18(0x54),func_0012F910,*(s32*)(func_001B9FD8+0x16ec));return;} break;
 }
}
