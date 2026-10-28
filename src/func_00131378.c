s32 func_001050A8(s32*,s32,s32,s32,s32,s32,s32,s32,s32,s32);s32 func_00105190(s32*);s32 func_00110720(s32,void*);s32 func_0011BA18(s32);s32 func_0011CEF0(s32,s32,s32);s32 func_0011E420(s32,s32);
extern s32 D_010CD430[], D_010CD478[], D_010CD7AC[], D_010CD438[], D_001BAC84[], D_001C4E9C[], D_001C4EA0[];
extern char D_010CD420[];
void func_00131378(void){
 s32 buf[48]; s32 i; s32 x = D_010CD7AC[0];
 if (x < 0) goto end;
 if (x >= 7) {
  if (x >= 14) goto end;
  i = 0;
  goto test;
 }
 D_010CD430[0] = func_00110720(func_0011BA18(0x9b), D_010CD420);
 D_010CD478[0] = 0; D_001C4E9C[0] = 0; D_001C4EA0[0] = -1;
 goto end;
body:
 if (!((D_001BAC84[0] >> i) & 1)) {
   func_001050A8(buf, D_010CD438[i], 11, 0, 10, 0, 16, 6, 0x150, 6);
   func_00105190(buf);
 }
 i++;
test:
 if (i < 3) goto body;
end:
 func_0011E420(0,0);
 func_0011CEF0(D_010CD430[0], D_010CD7AC[0], 1);
}
